/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042BAF4
 * Mangled: _ZN5Caver11NewMenuView10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::NewMenuView::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000042BB00 string=0x000000000042BB04 "`z@"
 *   insn=0x000000000042BB08 string=0x000000000042BB0C ""
 *   insn=0x000000000042BB08 string=0x000000000042BB20 "h"
 *   insn=0x000000000042BB10 string=0x000000000042BB14 ""
 *   insn=0x000000000042BB30 string=0x000000000042BB34 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::NewMenuView::TouchBegan(_QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[30];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 8LL))(v2, a1);
    a1[30] = 0;
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 120LL))(a1);
}

