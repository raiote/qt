#ifndef TSTDOCGENERATOR1_GLOBAL_H
#define TSTDOCGENERATOR1_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TSTDOCGENERATOR1_LIBRARY)
#  define TSTDOCGENERATOR1SHARED_EXPORT Q_DECL_EXPORT
#else
#  define TSTDOCGENERATOR1SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TSTDOCGENERATOR1_GLOBAL_H
