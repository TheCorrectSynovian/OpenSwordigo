/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003956A4
 * Mangled: _ZN5Caver12MainMenuView15DidMoveToWindowEv
 * Demangled: Caver::MainMenuView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x000000000039566C  Caver::MainMenuView::~MainMenuView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000003956B0 string=0x00000000003956B4 "h"
 *   insn=0x00000000003956B4 string=0x00000000003956B8 "y@"
 *   insn=0x00000000003956C0 string=0x00000000003956C4 "h"
 *   insn=0x00000000003956D4 string=0x00000000003956D8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuView::DidMoveToWindow(Caver::MainMenuView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::MainMenuView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::MainMenuView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}

