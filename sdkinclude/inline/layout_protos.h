#ifndef _VBCCINLINE_LAYOUT_H
#define _VBCCINLINE_LAYOUT_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

Class * __LAYOUT_GetClass(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define LAYOUT_GetClass() __LAYOUT_GetClass(LayoutBase)

BOOL __ActivateLayoutGadget(__reg("a0") struct Gadget * gadget, __reg("a1") struct Window * window, __reg("a2") struct Requester * requester, __reg("d0") ULONG object, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define ActivateLayoutGadget(gadget, window, requester, object) __ActivateLayoutGadget((gadget), (window), (requester), (object), LayoutBase)

VOID __FlushLayoutDomainCache(__reg("a0") struct Gadget * gadget, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define FlushLayoutDomainCache(gadget) __FlushLayoutDomainCache((gadget), LayoutBase)

BOOL __RethinkLayout(__reg("a0") struct Gadget * gadget, __reg("a1") struct Window * window, __reg("a2") struct Requester * requester, __reg("d0") LONG refresh, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define RethinkLayout(gadget, window, requester, refresh) __RethinkLayout((gadget), (window), (requester), (refresh), LayoutBase)

VOID __LayoutLimits(__reg("a0") struct Gadget * gadget, __reg("a1") struct LayoutLimits * limits, __reg("a2") struct TextFont * font, __reg("a3") struct Screen * screen, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define LayoutLimits(gadget, limits, font, screen) __LayoutLimits((gadget), (limits), (font), (screen), LayoutBase)

Class * __PAGE_GetClass(__reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define PAGE_GetClass() __PAGE_GetClass(LayoutBase)

ULONG __SetPageGadgetAttrsA(__reg("a0") struct Gadget * gadget, __reg("a1") Object * object, __reg("a2") struct Window * window, __reg("a3") struct Requester * requester, __reg("a4") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define SetPageGadgetAttrsA(gadget, object, window, requester, tags) __SetPageGadgetAttrsA((gadget), (object), (window), (requester), (tags), LayoutBase)

VOID __RefreshPageGadget(__reg("a0") struct Gadget * gadget, __reg("a1") Object * object, __reg("a2") struct Window * window, __reg("a3") struct Requester * requester, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define RefreshPageGadget(gadget, object, window, requester) __RefreshPageGadget((gadget), (object), (window), (requester), LayoutBase)

#endif /*  _VBCCINLINE_LAYOUT_H  */
