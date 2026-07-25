/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042B3E8
 * Mangled: _ZN5Caver11NewMenuView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::NewMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x000000000042A9C8  Caver::NewMenuView::NewMenuView(void)
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000042B3F8 string=0x000000000042B3FC "h"
 *   insn=0x000000000042B400 string=0x000000000042B404 "?"
 *   insn=0x000000000042B404 string=0x000000000042B408 "`"
 *   insn=0x000000000042B410 string=0x000000000042B414 "\niv"
 *   insn=0x000000000042B414 string=0x000000000042B418 "_"
 *   insn=0x000000000042B418 string=0x000000000042B41C "!"
 *   insn=0x000000000042B41C string=0x000000000042B420 "`z@"
 *   insn=0x000000000042B424 string=0x000000000042B428 ""
 *   insn=0x000000000042B430 string=0x000000000042B434 ""
 *   insn=0x000000000042B438 string=0x000000000042B43C "h"
 *   insn=0x000000000042B440 string=0x000000000042B444 "*"
 *   insn=0x000000000042B44C string=0x000000000042B450 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::NewMenuView::ButtonPressed(__int64 result, __int64 a2)
{
  _QWORD *v2; // x19
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v6; // x22
  unsigned __int64 v7; // x21

  v2 = (_QWORD *)result;
  v3 = *(_QWORD *)(result + 248);
  v4 = *(_QWORD *)(result + 256);
  if ( v4 != v3 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( *(_QWORD *)(v3 + v6) == a2 )
      {
        result = v2[30];
        if ( result )
        {
          result = (**(__int64 (__fastcall ***)(__int64, _QWORD *, _QWORD))result)(result, v2, (unsigned int)v7);
          v3 = v2[31];
          v4 = v2[32];
        }
      }
      ++v7;
      v6 += 16;
    }
    while ( v7 < (v4 - v3) >> 4 );
  }
  return result;
}

