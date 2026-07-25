/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049C3F8
 * Mangled: _ZN5Caver13GUIScrollView10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GUIScrollView::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x000000000049C40C string=0x000000000049C410 "i"
 *   insn=0x000000000049C414 string=0x000000000049C418 "A"
 *   insn=0x000000000049C418 string=0x000000000049C41C "`"
 *   insn=0x000000000049C41C string=0x000000000049C420 " "
 *   insn=0x000000000049C420 string=0x000000000049C424 "h"
 *   insn=0x000000000049C420 string=0x000000000049C464 "h"
 *   insn=0x000000000049C428 string=0x000000000049C42C "h"
 *   insn=0x000000000049C430 string=0x000000000049C434 "i"
 *   insn=0x000000000049C438 string=0x000000000049C43C ""
 *   insn=0x000000000049C438 string=0x000000000049C450 ""
 *   insn=0x000000000049C440 string=0x000000000049C444 ""
 *   insn=0x000000000049C448 string=0x000000000049C44C "`"
 *   insn=0x000000000049C454 string=0x000000000049C458 "\t@"
 *   insn=0x000000000049C468 string=0x000000000049C46C "`"
 *   insn=0x000000000049C46C string=0x000000000049C470 "a:A"
 *   insn=0x000000000049C47C string=0x000000000049C480 "!!"
 *   insn=0x000000000049C490 string=0x000000000049C494 "("
 *   insn=0x000000000049C494 string=0x000000000049C498 "`nA"
 *   insn=0x000000000049C494 string=0x0000000000583C38 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GUIScrollView::TouchEnded(_QWORD *result, _QWORD *a2)
{
  _QWORD *v3; // x19
  int v4; // w8
  float v5; // s0

  v3 = result;
  if ( *a2 == result[43] )
  {
    result = (_QWORD *)result[52];
    if ( result && !*((_BYTE *)v3 + 433) )
    {
      v4 = *((unsigned __int8 *)v3 + 432);
      *((_BYTE *)v3 + 433) = 1;
      if ( !v4 )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD *))*result)(result, a2);
        result = (_QWORD *)v3[52];
      }
      result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*result + 16LL))(result, a2);
      *((_BYTE *)v3 + 433) = 0;
    }
    if ( *((_BYTE *)v3 + 355) )
    {
      v5 = (float)(*((float *)v3 + 67) * *((float *)v3 + 67)) + (float)(*((float *)v3 + 78) * *((float *)v3 + 78));
      *((_BYTE *)v3 + 355) = 0;
      if ( v5 < 40000.0 || *((float *)v3 + 91) > 0.08 )
      {
        *((_BYTE *)v3 + 252) = 0;
        *((_DWORD *)v3 + 67) = 0;
        *((_BYTE *)v3 + 296) = 0;
        *((_DWORD *)v3 + 78) = 0;
      }
    }
    *((_BYTE *)v3 + 354) = 0;
    v3[43] = 0;
  }
  return result;
}

