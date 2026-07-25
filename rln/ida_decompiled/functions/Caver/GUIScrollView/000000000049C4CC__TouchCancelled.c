/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049C4CC
 * Mangled: _ZN5Caver13GUIScrollView14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::GUIScrollView::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x000000000049C4D8 string=0x000000000049C4DC "("
 *   insn=0x000000000049C4DC string=0x000000000049C4E0 "i"
 *   insn=0x000000000049C4E8 string=0x000000000049C4EC "`"
 *   insn=0x000000000049C4EC string=0x000000000049C4F0 "`"
 *   insn=0x000000000049C4F0 string=0x000000000049C4F4 "h"
 *   insn=0x000000000049C4F0 string=0x000000000049C51C "h"
 *   insn=0x000000000049C4F4 string=0x000000000049C4F8 "("
 *   insn=0x000000000049C4F8 string=0x000000000049C4FC "h"
 *   insn=0x000000000049C504 string=0x000000000049C508 "h"
 *   insn=0x000000000049C508 string=0x000000000049C50C ""
 *   insn=0x000000000049C50C string=0x000000000049C510 "@"
 *   insn=0x000000000049C520 string=0x000000000049C524 "`"
 *   insn=0x000000000049C524 string=0x000000000049C528 "a:A"
 *   insn=0x000000000049C534 string=0x000000000049C538 "!!"
 *   insn=0x000000000049C548 string=0x000000000049C54C "("
 *   insn=0x000000000049C54C string=0x000000000049C550 "`nA"
 *   insn=0x000000000049C54C string=0x0000000000583C38 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GUIScrollView::TouchCancelled(_QWORD *result, _QWORD *a2)
{
  _QWORD *v2; // x19
  float v3; // s0

  v2 = result;
  if ( *a2 == result[43] )
  {
    result = (_QWORD *)result[52];
    if ( result && *((_BYTE *)v2 + 432) && !*((_BYTE *)v2 + 433) )
    {
      *((_BYTE *)v2 + 433) = 1;
      result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
      *((_BYTE *)v2 + 433) = 0;
    }
    if ( *((_BYTE *)v2 + 355) )
    {
      v3 = (float)(*((float *)v2 + 67) * *((float *)v2 + 67)) + (float)(*((float *)v2 + 78) * *((float *)v2 + 78));
      *((_BYTE *)v2 + 355) = 0;
      if ( v3 < 40000.0 || *((float *)v2 + 91) > 0.08 )
      {
        *((_BYTE *)v2 + 252) = 0;
        *((_DWORD *)v2 + 67) = 0;
        *((_BYTE *)v2 + 296) = 0;
        *((_DWORD *)v2 + 78) = 0;
      }
    }
    *((_BYTE *)v2 + 354) = 0;
    v2[43] = 0;
  }
  return result;
}

