/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000401CB8
 * Mangled: _ZN5Caver12GameOverView15DidMoveToWindowEv
 * Demangled: Caver::GameOverView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x0000000000401B80  Caver::GameOverView::~GameOverView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000401CC4 string=0x0000000000401CC8 "h"
 *   insn=0x0000000000401CC8 string=0x0000000000401CCC "y@"
 *   insn=0x0000000000401CD4 string=0x0000000000401CD8 "h"
 *   insn=0x0000000000401CE8 string=0x0000000000401CEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverView::DidMoveToWindow(Caver::GameOverView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::GameOverView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::GameOverView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}

