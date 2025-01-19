# boost-morphos

**Goal:** Port an up-to-date boost library to MorphOS (ppc).  
The following libraries should work as minimum:  
- chrono
- locale
- iostreams
- filesystem
- program_options

# Cross compile on linux

Requires a working cross-compiler and the MorphOS SDK (version 3.18).  
See [Cross-Compiler Setup](https://bigfoot.morphos-team.net/files/setup-cross-sdk.sh) to setup it on your linux machine.  

```sh
    ./bootstrap.sh
    ./b2 cxxflags="-std=c++17" cflags="-noixemul -D__morphos__" toolset=gcc-power link=static threading=single variant=release optimization=speed \
            --user-config=/path/to/user-config.jam \
            --build-dir=/tmp/boost-build \
            --prefix=/tmp/boost-install \
            --with-atomic \
            --with-chrono \
            --with-program_options \
            --with-system \
            --with-random \
            --with-test \
            --with-locale \
            --with-filesystem \
            --with-iostreams \
            install
```

You need to set --user-config, --build-dir and --prefix to your paths on your system.  
