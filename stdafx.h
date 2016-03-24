
// Common #includes...

#ifndef _STDAFX_H_
#define _STDAFX_H_

#ifdef  _MSC_VER
#define _CRT_SECURE_NO_WARNINGS  1
#endif

#include <stdio.h>
#include <stdlib.h>

#include "typedefs.h"   // (U32, U64, etc)

#ifndef TRUE
#define TRUE    1
#endif

#ifndef FALSE
#define FALSE   0
#endif

#ifndef __cplusplus
#define true    1
#define false   0
#endif

#ifndef INLINE
#ifdef _MSC_VER
#define INLINE  __inline
#else
#define INLINE    inline
#endif
#endif

#if defined( _MSC_VER ) && !defined( W32_PUSH_WARNINGS )
#define W32_PUSH_WARNINGS()     __pragma( warning( push ))
#define W32_DISABLE_4996()      __pragma( warning( disable : 4996 )) // "This function or variable may be unsafe."
#define W32_POP_WARNINGS()      __pragma( warning( pop ))
#endif // _MSC_VER

#endif // _STDAFX_H_
