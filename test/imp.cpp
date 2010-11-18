#include "imp.hpp"

void
load_header(std::vector< std::string > & header)
{
    header.push_back("ID");
    header.push_back("BEEF");
    header.push_back("BURGER");
    header.push_back("PORK");
    header.push_back("LAMB");
    header.push_back("CHICKEN");
    header.push_back("BACON");
    header.push_back("HAM");
    header.push_back("CORNED_BEEF");
    header.push_back("SAUSAGES");
    header.push_back("SAVOURY_PIES");
    header.push_back("LIVER");
    header.push_back("FRIED_FISH");
    header.push_back("FISH_FINGERS");
    header.push_back("WHITE_FISH");
    header.push_back("OILY_FISH");
    header.push_back("SHELLFISH");
    header.push_back("ROE");
    header.push_back("WHITE_BREAD");
    header.push_back("BROWN_BREAD");
    header.push_back("WHOLEMEAL_BREAD");
    header.push_back("CRACKERS");
    header.push_back("CRISPBREAD");
    header.push_back("PORRIDGE");
    header.push_back("CERIAL");
    header.push_back("BOILED_POTATOES");
    header.push_back("CHIPS");
    header.push_back("ROAST_POTATOES");
    header.push_back("POTATO_SALAD");
    header.push_back("WHITE_RICE");
    header.push_back("BROWN_RICE");
    header.push_back("WHITE_PASTA");
    header.push_back("WHOLEMEAL_PASTA");
    header.push_back("LASAGNE");
    header.push_back("PIZZA");
    header.push_back("SINGLE_CREAM");
    header.push_back("DOUBLE_CREAM");
    header.push_back("LOWFAT_YOGURT");
    header.push_back("FULLFAT_YOGURT");
    header.push_back("DAIRY_DESSERT");
    header.push_back("CHEESE");
    header.push_back("COTTAGE_CHEESE");
    header.push_back("EGGS");
    header.push_back("QUICHE");
    header.push_back("LOWCAL_SALAD_CREAM");
    header.push_back("SALAD_CREAM");
    header.push_back("FRENCH");
    header.push_back("OTHER_DRESSING");
    header.push_back("BUTTER");
    header.push_back("HARD_MARGARINE");
    header.push_back("POLYUNSATURATED_MARGARINE");
    header.push_back("OTHER_MARGARINE");
    header.push_back("LOWFAT_SPREAD");
    header.push_back("VERY_LOWFAT_SPREAD");
    header.push_back("PLAIN_BISCUIT");
    header.push_back("CHOCOLATE_BISCUIT");
    header.push_back("HOMEBAKED_CAKE");
    header.push_back("READYMADE_CAKE");
    header.push_back("HOMEBAKED_BUNS");
    header.push_back("READYMADE_BUNS");
    header.push_back("HOMEBAKED_FRUIT_PIES");
    header.push_back("READYMADE_FRUIT_PIES");
    header.push_back("HOMEBAKED_SPONGE");
    header.push_back("READYMADE_SPONGE");
    header.push_back("MILK_PUDDINGS");
    header.push_back("ICE_CREAM");
    header.push_back("CHOCOLATES");
    header.push_back("CHOCOLATE_BARS");
    header.push_back("SWEETS");
    header.push_back("SUGAR");
    header.push_back("CRISPS");
    header.push_back("NUTS");
    header.push_back("VEGETABLE_SOUP");
    header.push_back("MEAT_SOUP");
    header.push_back("SAUCES");
    header.push_back("KETCHUP");
    header.push_back("PICKLES");
    header.push_back("MARMITE");
    header.push_back("JAM");
    header.push_back("PEANUT_BUTTER");
    header.push_back("TEA");
    header.push_back("INSTANT_COFFEE");
    header.push_back("DECAFF_COFFEE");
    header.push_back("COFFEE_WHITENER");
    header.push_back("COCOA");
    header.push_back("HORLICKS");
    header.push_back("WINE");
    header.push_back("BEER");
    header.push_back("PORT");
    header.push_back("SPIRITS");
    header.push_back("LOWCAL_FIZZY_DRINKS");
    header.push_back("FIZZY_DRINKS");
    header.push_back("FRUIT_JUICE");
    header.push_back("FRUIT_SQUASH");
    header.push_back("APPLES");
    header.push_back("PEARS");
    header.push_back("ORANGES");
    header.push_back("GRAPEFRUIT");
    header.push_back("BANANAS");
    header.push_back("GRAPES");
    header.push_back("MELONS");
    header.push_back("PEACHES");
    header.push_back("STRAWBERRIES");
    header.push_back("TINNED_FRUIT");
    header.push_back("DRIED_FRUIT");
    header.push_back("CARROTS");
    header.push_back("SPINACH");
    header.push_back("BROCCOLI");
    header.push_back("SPROUTS");
    header.push_back("CABBAGE");
    header.push_back("PEAS");
    header.push_back("GREEN_BEANS");
    header.push_back("MARROW");
    header.push_back("CAULIFLOWER");
    header.push_back("PARSNIPS");
    header.push_back("LEEKS");
    header.push_back("ONIONS");
    header.push_back("GARLIC");
    header.push_back("MUSHROOMS");
    header.push_back("PEPPERS");
    header.push_back("BEANSPROUTS");
    header.push_back("GREEN_SALAD");
    header.push_back("WATERCRESS");
    header.push_back("TOMATOES");
    header.push_back("SWEETCORN");
    header.push_back("BEETROOT");
    header.push_back("COLESLAW");
    header.push_back("AVOCADO");
    header.push_back("BEANS");
    header.push_back("LENTILS");
    header.push_back("TOFU");
    header.push_back("OTHER_FOODS");
    header.push_back("FOOD1");
    header.push_back("SIZE1");
    header.push_back("FREQUENCY1");
    header.push_back("FOOD2");
    header.push_back("SIZE2");
    header.push_back("FREQUENCY2");
    header.push_back("FOOD3");
    header.push_back("SIZE3");
    header.push_back("FREQUENCY3");
    header.push_back("FOOD4");
    header.push_back("SIZE4");
    header.push_back("FREQUENCY4");
    header.push_back("FOOD5");
    header.push_back("SIZE5");
    header.push_back("FREQUENCY5");
    header.push_back("FOOD6");
    header.push_back("SIZE6");
    header.push_back("FREQUENCY6");
    header.push_back("MILK");
    header.push_back("MILK_OTHER");
    header.push_back("MILK_FREQUENCY");
    header.push_back("EAT_BREAKFAST");
    header.push_back("CERIAL1");
    header.push_back("TYPE1");
    header.push_back("CERIAL2");
    header.push_back("TYPE2");
    header.push_back("FAT_FRYING");
    header.push_back("FAT_FRYING_TYPE");
    header.push_back("FAT_BAKING");
    header.push_back("FAT_BAKING_TYPE");
    header.push_back("FRY_FREQUENCY_HOME");
    header.push_back("FRY_FREQUENCY_OUT");
    header.push_back("VISIBLE_FAT");
    header.push_back("GRILL_FREQUENCY");
    header.push_back("HOW_COOKED");
    header.push_back("ADD_SALT_COOKING");
    header.push_back("ADD_SALT_TABLE");
    header.push_back("SALT_SUBSTITUTE");
    header.push_back("SALT_SUBSTITUTE_BRAND");
    header.push_back("SUPPLEMENTS");
    header.push_back("VITAMIN1");
    header.push_back("DOSE1");
    header.push_back("VITAMIN2");
    header.push_back("DOSE2");
    header.push_back("VITAMIN3");
    header.push_back("DOSE3");
    header.push_back("VITAMIN4");
    header.push_back("DOSE4");
    header.push_back("VITAMIN5");
    header.push_back("DOSE5");
    header.push_back("VITAMIN6");
    header.push_back("DOSE6");
    header.push_back("VITAMIN7");
    header.push_back("DOSE7");
    header.push_back("VITAMIN8");
    header.push_back("DOSE8");
    header.push_back("DE_INITIALS");
    header.push_back("VERSION");
    header.push_back("VIT1_FREQ");
    header.push_back("VIT2_FREQ");
    header.push_back("VIT3_FREQ");
    header.push_back("VIT4_FREQ");
    header.push_back("VIT5_FREQ");
    header.push_back("VIT6_FREQ");
    header.push_back("VIT7_FREQ");
    header.push_back("VIT8_FREQ");
    header.push_back("DATE_OF_ENTRY");
    header.push_back("MISSING_TICKS");
    header.push_back("SEX");
    header.push_back("DOB");
    header.push_back("VEG");
    header.push_back("SALAD");
    header.push_back("FRUIT");
    header.push_back("FISH");
    header.push_back("MEAT");
}


void
load_row(std::vector< std::string > & row)
{
    row.push_back("0110002R");
    row.push_back("3");
    row.push_back("2");
    row.push_back("3");
    row.push_back("2");
    row.push_back("3");
    row.push_back("3");
    row.push_back("2");
    row.push_back("2");
    row.push_back("3");
    row.push_back("1");
    row.push_back("1");
    row.push_back("2");
    row.push_back("2");
    row.push_back("4");
    row.push_back("2");
    row.push_back("1");
    row.push_back("1");
    row.push_back("6");
    row.push_back("3");
    row.push_back("3");
    row.push_back("6");
    row.push_back("2");
    row.push_back("4");
    row.push_back("2");
    row.push_back("4");
    row.push_back("3");
    row.push_back("4");
    row.push_back("1");
    row.push_back("2");
    row.push_back("1");
    row.push_back("1");
    row.push_back("1");
    row.push_back("1");
    row.push_back("2");
    row.push_back("1");
    row.push_back("1");
    row.push_back("6");
    row.push_back("1");
    row.push_back("1");
    row.push_back("4");
    row.push_back("1");
    row.push_back("4");
    row.push_back("1");
    row.push_back("2");
    row.push_back("2");
    row.push_back("1");
    row.push_back("1");
    row.push_back("1");
    row.push_back("9");
    row.push_back("1");
    row.push_back("1");
    row.push_back("1");
    row.push_back("1");
    row.push_back("4");
    row.push_back("4");
    row.push_back("3");
    row.push_back("1");
    row.push_back("3");
    row.push_back("1");
    row.push_back("4");
    row.push_back("1");
    row.push_back("2");
    row.push_back("1");
    row.push_back("3");
    row.push_back("5");
    row.push_back("3");
    row.push_back("3");
    row.push_back("4");
    row.push_back("6");
    row.push_back("1");
    row.push_back("6");
    row.push_back("2");
    row.push_back("1");
    row.push_back("5");
    row.push_back("1");
    row.push_back("2");
    row.push_back("6");
    row.push_back("3");
    row.push_back("1");
    row.push_back("8");
    row.push_back("8");
    row.push_back("1");
    row.push_back("1");
    row.push_back("1");
    row.push_back("3");
    row.push_back("1");
    row.push_back("1");
    row.push_back("1");
    row.push_back("1");
    row.push_back("1");
    row.push_back("2");
    row.push_back("2");
    row.push_back("1");
    row.push_back("4");
    row.push_back("4");
    row.push_back("4");
    row.push_back("2");
    row.push_back("6");
    row.push_back("4");
    row.push_back("1");
    row.push_back("4");
    row.push_back("4");
    row.push_back("3");
    row.push_back("3");
    row.push_back("4");
    row.push_back("1");
    row.push_back("4");
    row.push_back("3");
    row.push_back("4");
    row.push_back("3");
    row.push_back("3");
    row.push_back("1");
    row.push_back("3");
    row.push_back("2");
    row.push_back("2");
    row.push_back("4");
    row.push_back("1");
    row.push_back("4");
    row.push_back("1");
    row.push_back("2");
    row.push_back("4");
    row.push_back("2");
    row.push_back("4");
    row.push_back("3");
    row.push_back("3");
    row.push_back("3");
    row.push_back("1");
    row.push_back("3");
    row.push_back("1");
    row.push_back("1");
    row.push_back("-9");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("1");
    row.push_back("");
    row.push_back("4");
    row.push_back("1");
    row.push_back("QUAKER");
    row.push_back("PORRIDGE OATS");
    row.push_back("KELLOGS");
    row.push_back("ALL BRAN");
    row.push_back("3");
    row.push_back("SUNFLOWER");
    row.push_back("5");
    row.push_back("");
    row.push_back("3");
    row.push_back("4");
    row.push_back("3");
    row.push_back("3");
    row.push_back("1");
    row.push_back("1");
    row.push_back("3");
    row.push_back("2");
    row.push_back("");
    row.push_back("1");
    row.push_back("S'DRUG B6 VITAMINS");
    row.push_back("1");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("-");
    row.push_back("1");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("0");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
    row.push_back("");
}


void
load_person(Epic::Config::Config & cnf)
{
    std::vector< std::string > header;
    std::vector< std::string > row;

    load_header(header);
    load_row(row);

    for(size_t pos=0; pos < header.size(); ++pos)
    {
        cnf.insert(header.at(pos),row.at(pos),true);
    }
} 

void load_meat_names(std::vector<std::string> & meats)
{
    meats.push_back("BEEF");
    meats.push_back("PORK");
    meats.push_back("LAMB");
    meats.push_back("BACON");
    meats.push_back("HAM");
}

void load_simple_names(std::vector<std::string> & simples)
{
    simples.push_back("KETCHUP");
    simples.push_back("PICKLES");
    simples.push_back("MARMITE");
    simples.push_back("JAM");
    simples.push_back("PEANUT_BUTTER");
    simples.push_back("TEA");
    simples.push_back("INSTANT_COFFEE");
    simples.push_back("DECAFF_COFFEE");
    simples.push_back("COFFEE_WHITENER");
    simples.push_back("COCOA");
    simples.push_back("HORLICKS");
    simples.push_back("WINE");
    simples.push_back("BEER");
    simples.push_back("PORT");
    simples.push_back("SPIRITS");
    simples.push_back("LOWCAL_FIZZY_DRINKS");
    simples.push_back("FIZZY_DRINKS");
    simples.push_back("FRUIT_JUICE");
    simples.push_back("FRUIT_SQUASH");
    simples.push_back("APPLES");
    simples.push_back("PEARS");
    simples.push_back("ORANGES");
    simples.push_back("GRAPEFRUIT");
    simples.push_back("BANANAS");
    simples.push_back("GRAPES");
    simples.push_back("MELONS");
    simples.push_back("PEACHES");
    simples.push_back("STRAWBERRIES");
    simples.push_back("TINNED_FRUIT");
    simples.push_back("DRIED_FRUIT");
    simples.push_back("CARROTS");
    simples.push_back("SPINACH");
    simples.push_back("BROCCOLI");
    simples.push_back("SPROUTS");
    simples.push_back("CABBAGE");
    simples.push_back("PEAS");
    simples.push_back("GREEN_BEANS");
    simples.push_back("MARROW");
    simples.push_back("CAULIFLOWER");
    simples.push_back("PARSNIPS");
    simples.push_back("LEEKS");
    simples.push_back("ONIONS");
    simples.push_back("GARLIC");
    simples.push_back("MUSHROOMS");
    simples.push_back("PEPPERS");
    simples.push_back("BEANSPROUTS");
    simples.push_back("GREEN_SALAD");
    simples.push_back("WATERCRESS");
    simples.push_back("TOMATOES");
    simples.push_back("SWEETCORN");
    simples.push_back("BEETROOT");
    simples.push_back("COLESLAW");
    simples.push_back("AVOCADO");
    simples.push_back("BEANS");
    simples.push_back("LENTILS");
    simples.push_back("TOFU");
    simples.push_back("READYMADE_FRUIT_PIES");
    simples.push_back("READYMADE_SPONGE");
    simples.push_back("MILK_PUDDINGS");
    simples.push_back("ICE_CREAM");
    simples.push_back("CHOCOLATES");
    simples.push_back("CHOCOLATE_BARS");
    simples.push_back("SWEETS");
    simples.push_back("SUGAR");
    simples.push_back("CRISPS");
    simples.push_back("NUTS");
    simples.push_back("VEGETABLE_SOUP");
    simples.push_back("MEAT_SOUP");
    simples.push_back("READYMADE_BUNS");
    simples.push_back("READYMADE_CAKE");
    simples.push_back("POTATO_SALAD");
    simples.push_back("WHITE_RICE");
    simples.push_back("BROWN_RICE");
    simples.push_back("WHITE_PASTA");
    simples.push_back("WHOLEMEAL_PASTA");
    simples.push_back("LASAGNE");
    simples.push_back("PIZZA");
    simples.push_back("SINGLE_CREAM");
    simples.push_back("DOUBLE_CREAM");
    simples.push_back("LOWFAT_YOGURT");
    simples.push_back("FULLFAT_YOGURT");
    simples.push_back("DAIRY_DESSERT");
    simples.push_back("CHEESE");
    simples.push_back("COTTAGE_CHEESE");
    simples.push_back("EGGS");
    simples.push_back("QUICHE");
    simples.push_back("LOWCAL_SALAD_CREAM");
    simples.push_back("SALAD_CREAM");
    simples.push_back("FRENCH");
    simples.push_back("OTHER_DRESSING");
    simples.push_back("BUTTER");
    simples.push_back("HARD_MARGARINE");
    simples.push_back("POLYUNSATURATED_MARGARINE");
    simples.push_back("OTHER_MARGARINE");
    simples.push_back("LOWFAT_SPREAD");
    simples.push_back("VERY_LOWFAT_SPREAD");
    simples.push_back("PLAIN_BISCUIT");
    simples.push_back("CHOCOLATE_BISCUIT");
    simples.push_back("BOILED_POTATOES");
    simples.push_back("PORRIDGE");
    simples.push_back("LIVER");
    simples.push_back("FRIED_FISH");
    simples.push_back("FISH_FINGERS");
    simples.push_back("WHITE_FISH");
    simples.push_back("OILY_FISH");
    simples.push_back("SHELLFISH");
    simples.push_back("ROE");
    simples.push_back("WHITE_BREAD");
    simples.push_back("BROWN_BREAD");
    simples.push_back("WHOLEMEAL_BREAD");
    simples.push_back("CRACKERS");
    simples.push_back("CRISPBREAD");
    simples.push_back("BURGER");
    simples.push_back("CHICKEN");
    simples.push_back("CORNED_BEEF");
    simples.push_back("SAUSAGES");
}
