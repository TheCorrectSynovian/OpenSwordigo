/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D4B1C
 * Mangled: _ZN5Caver15GameOverlayView25UpdateUseButtonVisibilityEv
 * Demangled: Caver::GameOverlayView::UpdateUseButtonVisibility(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000003D4B1C string=0x00000000003D4B20 ""
 *   insn=0x00000000003D4B24 string=0x00000000003D4B34 "\t"
 *   insn=0x00000000003D4B28 string=0x00000000003D4B2C "\t"
 *   insn=0x00000000003D4B34 string=0x00000000003D4B38 ")"
 *   insn=0x00000000003D4B38 string=0x00000000003D4B3C "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::UpdateUseButtonVisibility(__int64 this)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(this + 384);
  if ( *(_BYTE *)(this + 416) )
    *(_BYTE *)(v1 + 228) = 1;
  else
    *(_BYTE *)(v1 + 228) = *(_BYTE *)(this + 417) ^ 1;
  return this;
}

