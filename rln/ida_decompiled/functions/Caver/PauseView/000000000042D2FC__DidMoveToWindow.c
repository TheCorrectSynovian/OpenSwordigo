/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042D2FC
 * Mangled: _ZN5Caver9PauseView15DidMoveToWindowEv
 * Demangled: Caver::PauseView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x000000000042D1C4  Caver::PauseView::~PauseView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000042D308 string=0x000000000042D30C "h"
 *   insn=0x000000000042D30C string=0x000000000042D310 "y@"
 *   insn=0x000000000042D318 string=0x000000000042D31C "h"
 *   insn=0x000000000042D32C string=0x000000000042D330 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PauseView::DidMoveToWindow(Caver::PauseView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::PauseView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::PauseView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}

