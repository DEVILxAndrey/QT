#ifndef LIBI01_GLOBAL_H
#define LIBI01_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBI01_LIBRARY)
#  define LIBI01_EXPORT Q_DECL_EXPORT
#else
#  define LIBI01_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBI01_GLOBAL_H
