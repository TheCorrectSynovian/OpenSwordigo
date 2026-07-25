/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D67B4
 * Mangled: _ZN5Caver15GameOverlayView27UpdateSkillButtonVisibilityEv
 * Demangled: Caver::GameOverlayView::UpdateSkillButtonVisibility(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000003D67B4 string=0x00000000003D67B8 ""
 *   insn=0x00000000003D67BC string=0x00000000003D67CC "\t"
 *   insn=0x00000000003D67C0 string=0x00000000003D67C4 "\t"
 *   insn=0x00000000003D67CC string=0x00000000003D67D0 "?"
 *   insn=0x00000000003D67D4 string=0x00000000003D67D8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::UpdateSkillButtonVisibility(__int64 this)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(this + 400);
  if ( *(_BYTE *)(this + 416) )
    *(_BYTE *)(v1 + 228) = 1;
  else
    *(_BYTE *)(v1 + 228) = *(_QWORD *)(this + 424) == 0;
  return this;
}

