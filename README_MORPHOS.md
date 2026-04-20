# boost-morphos

author: Andre Geisler <andre@exdev.de>  
source origin: [boost.org](https://archives.boost.io/release/1.87.0/source/boost_1_87_0.tar.gz)  
source MorphOS: [github](https://github.com/eliot-exdev/boost-morphos)  
license: Boost Software License - Version 1.0  

**Goal:** Port an up-to-date boost library to MorphOS (ppc).  
The following libraries are build and should work:  
- asio
- atomic
- beast
- filesystem
- iostreams
- chrono
- locale
- program_options
- random
- system
- test
- url
- uuid

# Cross-compile on linux for MorphOS

Requires a working cross-compiler and the MorphOS SDK (version 3.18).  
See [Cross-Compiler Setup](https://bigfoot.morphos-team.net/files/setup-cross-sdk.sh) to setup it on your linux machine.  

```shell
    ./bootstrap.sh
    ./b2 cxxflags="-std=c++17" cflags="-noixemul" toolset=gcc-power link=static threading=single variant=release optimization=speed \
            --user-config=user-config.jam \
            --build-dir=/tmp/boost-build \
            --prefix=/tmp/boost-install \
            --with-asio \
            --with-atomic \
            --with-beast \
            --with-filesystem \
            --with-iostreams \
            --with-chrono \
            --with-locale \
            --with-program_options \
            --with-random \
            --with-system \
            --with-test \
            --with-url \
            --with-uuid \
            install
```

You need to set --user-config, --build-dir and --prefix to your paths on your system.  

You can also use the Makefile.mos:

```shell
    make -f Makefile.mos
```