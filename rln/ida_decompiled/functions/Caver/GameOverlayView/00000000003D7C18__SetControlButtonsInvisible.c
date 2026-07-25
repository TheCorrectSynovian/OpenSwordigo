/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D7C18
 * Mangled: _ZN5Caver15GameOverlayView26SetControlButtonsInvisibleEb
 * Demangled: Caver::GameOverlayView::SetControlButtonsInvisible(bool)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x00000000003D7C18 string=0x00000000003D7C1C "("
 *   insn=0x00000000003D7C24 string=0x00000000003D7C28 "\t"
 *   insn=0x00000000003D7C28 string=0x00000000003D7C2C ""
 *   insn=0x00000000003D7C2C string=0x00000000003D7C30 "("
 *   insn=0x00000000003D7C30 string=0x00000000003D7C34 "\t"
 *   insn=0x00000000003D7C34 string=0x00000000003D7C38 "("
 *   insn=0x00000000003D7C38 string=0x00000000003D7C3C "\t"
 *   insn=0x00000000003D7C3C string=0x00000000003D7C40 "("
 *   insn=0x00000000003D7C40 string=0x00000000003D7C44 "\t"
 *   insn=0x00000000003D7C44 string=0x00000000003D7C48 "("
 *   insn=0x00000000003D7C48 string=0x00000000003D7C4C "\t"
 *   insn=0x00000000003D7C4C string=0x00000000003D7C50 "("
 *   insn=0x00000000003D7C50 string=0x00000000003D7C54 "\t"
 *   insn=0x00000000003D7C54 string=0x00000000003D7C58 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::SetControlButtonsInvisible(__int64 this, char a2)
{
  char v2; // w8
  __int64 v3; // x9

  v2 = a2 & 1;
  if ( (a2 & 1) != *(_BYTE *)(this + 316) )
  {
    v3 = *(_QWORD *)(this + 320);
    *(_BYTE *)(this + 316) = v2;
    *(_BYTE *)(v3 + 292) = v2;
    *(_BYTE *)(*(_QWORD *)(this + 336) + 292LL) = v2;
    *(_BYTE *)(*(_QWORD *)(this + 368) + 292LL) = v2;
    *(_BYTE *)(*(_QWORD *)(this + 352) + 292LL) = v2;
    *(_BYTE *)(*(_QWORD *)(this + 400) + 292LL) = v2;
    *(_BYTE *)(*(_QWORD *)(this + 384) + 292LL) = v2;
  }
  return this;
}

