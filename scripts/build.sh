export ac_cv_func_realloc_0_nonnull=yes
export ac_cv_func_malloc_0_nonnull=yes

export LD_FLAGS="-lwinsock32 -lws2_32 -lnetapi32 -luserenv -lshlwapi -lmingw32"
export CFLAGS="--static"
../epic-food-frequency-0.0.2-a/configure --prefix=/home/me/workspace/clone/windows --host=i586-mingw32 --enable-maintainer-mode
make
i586-mingw32-g++ epic_ffq-client.o src/.libs/libEpic.a -static -o epic_ffq.exe