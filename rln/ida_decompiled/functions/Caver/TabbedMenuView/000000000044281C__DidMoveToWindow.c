/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044281C
 * Mangled: _ZN5Caver14TabbedMenuView15DidMoveToWindowEv
 * Demangled: Caver::TabbedMenuView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x00000000004422EC  Caver::TabbedMenuView::~TabbedMenuView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000442828 string=0x000000000044282C "h"
 *   insn=0x000000000044282C string=0x0000000000442830 "y@"
 *   insn=0x0000000000442838 string=0x000000000044283C "h"
 *   insn=0x000000000044284C string=0x0000000000442850 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TabbedMenuView::DidMoveToWindow(Caver::TabbedMenuView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::TabbedMenuView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::TabbedMenuView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}

