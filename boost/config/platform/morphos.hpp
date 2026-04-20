//  (C) Copyright Andre Geisler 2025.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for most recent version.

#define BOOST_PLATFORM "MorphOS"

#  ifndef BOOST_HAS_UNISTD_H
#    define BOOST_HAS_UNISTD_H
#  endif

#  include <boost/config/detail/posix_features.hpp>
#  ifndef BOOST_HAS_STDINT_H
#     define BOOST_HAS_STDINT_H
#  endif

//

#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

// required by boost-chrono
#ifndef __STDC_LIMIT_MACROS
    #define __STDC_LIMIT_MACROS
#endif

#define BOOST_NO_CWCHAR
#define BOOST_NO_INTRINSIC_WCHAR_T
 
 
//#define BOOST_DISABLE_THREADS
#define BOOST_HAS_PTHREADS 1
#ifdef BOOST_HAS_PTHREADS
#  define BOOST_HAS_THREADS
#endif

