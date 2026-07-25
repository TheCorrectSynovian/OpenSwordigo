/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049BF58
 * Mangled: _ZN5Caver13GUIScrollView16EndDragWithTouchERKNS_7FWTouchE
 * Demangled: Caver::GUIScrollView::EndDragWithTouch(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000049BF68 string=0x000000000049BF6C "!!"
 *   insn=0x000000000049BF7C string=0x000000000049BF80 "H"
 *   insn=0x000000000049BF80 string=0x0000000000583C38 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIScrollView::EndDragWithTouch(__int64 result)
{
  float v1; // s0

  v1 = (float)(*(float *)(result + 268) * *(float *)(result + 268))
     + (float)(*(float *)(result + 312) * *(float *)(result + 312));
  *(_BYTE *)(result + 355) = 0;
  if ( v1 < 40000.0 || *(float *)(result + 364) > 0.08 )
  {
    *(_BYTE *)(result + 252) = 0;
    *(_DWORD *)(result + 268) = 0;
    *(_BYTE *)(result + 296) = 0;
    *(_DWORD *)(result + 312) = 0;
  }
  return result;
}

