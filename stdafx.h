
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

#endif // _STDAFX_H_
