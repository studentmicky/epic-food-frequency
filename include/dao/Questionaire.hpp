#ifndef TEST_QUESTIONAIRE_HPP
#define TEST_QUESTIONAIRE_HPP

#include "Epic_lib.hpp"

namespace Test
{
    namespace Questionaire
    {
        class Questionaire 
        {
            public:
                Questionaire() : m_id(0), m_valid(false) {}

                explicit Questionaire(const std::string & filename) :
                    m_id(0),m_valid(false), m_filename(filename) {}

                static Questionaire find_by_filename(const std::string & filename) ;
                static Questionaire find_by_id(sqlite3_int64 id) ;

                bool save();

                // accessors
                std::string get_filename() const { 
                    return m_filename; 
                }
                sqlite3_int64 get_id() const { 
                    return m_id; 
                }

                bool filename_empty() const { 
                    return m_filename.empty() ; 
                }

                // mutators
                void set_filename(const std::string & filename) { 
                    m_filename = filename; 
                }

                void set_id(sqlite3_int64 id) { 
                    m_id = id; 
                }
                
                bool validate() {
                    m_valid = ( (m_id > 0) && (!filename_empty()));
                    return m_valid;
                }

                bool valid() const {
                    return m_valid;
                }

                friend std::ostream & operator<<(std::ostream & rhs, const Questionaire & questionaire) {
                    rhs << "Questionaire: [" << questionaire.get_id() << ",'" << questionaire.get_filename() << "']" << std::endl;
                    return rhs;
                }

            private:
                sqlite3_int64 m_id;
                std::string m_filename;
                bool m_valid;
        };
    } // Questionaire namespace

} // Test namespace


#endif /* ndef TEST_QUESTIONAIRE_HPP */