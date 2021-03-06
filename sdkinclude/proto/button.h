#ifndef _PROTO_BUTTON_H
#define _PROTO_BUTTON_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_BUTTON_PROTOS_H
#include <clib/button_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *ButtonBase;
#endif

#ifdef __GNUC__
#include <inline/button.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/button_protos.h>
#endif
#else
#include <pragma/button_lib.h>
#endif

#endif	/*  _PROTO_BUTTON_H  */
