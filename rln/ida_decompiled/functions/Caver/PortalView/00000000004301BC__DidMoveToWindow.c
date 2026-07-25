/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004301BC
 * Mangled: _ZN5Caver10PortalView15DidMoveToWindowEv
 * Demangled: Caver::PortalView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x000000000042FBF4  Caver::PortalView::~PortalView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004301C8 string=0x00000000004301CC "h"
 *   insn=0x00000000004301CC string=0x00000000004301D0 "y@"
 *   insn=0x00000000004301D8 string=0x00000000004301DC "h"
 *   insn=0x00000000004301EC string=0x00000000004301F0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalView::DidMoveToWindow(Caver::PortalView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::PortalView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::PortalView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}

