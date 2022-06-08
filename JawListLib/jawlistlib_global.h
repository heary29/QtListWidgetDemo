#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(JAWLISTLIB_LIB)
#  define JAWLISTLIB_EXPORT Q_DECL_EXPORT
# else
#  define JAWLISTLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define JAWLISTLIB_EXPORT
#endif
