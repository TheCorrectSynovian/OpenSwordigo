/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D4AE4
 * Mangled: _ZN5Caver15GameOverlayView33UpdateSkillToggleButtonVisibilityEv
 * Demangled: Caver::GameOverlayView::UpdateSkillToggleButtonVisibility(void)
 *
 * Callers: 1
 *   0x0000000000202A90  Caver::GameOverlayView::UpdateSkillToggleButtonVisibility(void)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000003D4AE4 string=0x00000000003D4AE8 ""
 *   insn=0x00000000003D4AEC string=0x00000000003D4AFC "\t|@"
 *   insn=0x00000000003D4AF0 string=0x00000000003D4AF4 "\t"
 *   insn=0x00000000003D4AFC string=0x00000000003D4B00 "*%E"
 *   insn=0x00000000003D4B00 string=0x00000000003D4B04 ")"
 *   insn=0x00000000003D4B04 string=0x00000000003D4B08 ")"
 *   insn=0x00000000003D4B08 string=0x00000000003D4B0C "?"
 *   insn=0x00000000003D4B10 string=0x00000000003D4B14 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::UpdateSkillToggleButtonVisibility(__int64 this)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(this + 440);
  if ( *(_BYTE *)(this + 416) )
    *(_BYTE *)(v1 + 228) = 1;
  else
    *(_BYTE *)(v1 + 228) = (unsigned int)((*(_QWORD *)(*(_QWORD *)(this + 248) + 88LL)
                                         - *(_QWORD *)(*(_QWORD *)(this + 248) + 80LL)) >> 4) == 0;
  return this;
}

