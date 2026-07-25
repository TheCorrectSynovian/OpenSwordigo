/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B19A8
 * Mangled: _ZNK5Caver9Rectangle22OverlapsRectVerticallyERKS0_f
 * Demangled: Caver::Rectangle::OverlapsRectVertically(Caver::Rectangle const&,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000004B19A8 string=0x00000000004B19AC "#"
 *   insn=0x00000000004B19B0 string=0x00000000004B19B4 "#(#"
 *   insn=0x00000000004B19B4 string=0x00000000004B19B8 "D( "
 *   insn=0x00000000004B19B8 string=0x00000000004B19BC "` $"
 *   insn=0x00000000004B19BC string=0x00000000004B19C0 "\t"
 *   insn=0x00000000004B19C4 string=0x00000000004B19C8 "B(#"
 *   insn=0x00000000004B19C8 string=0x00000000004B19CC "@8 "
 *   insn=0x00000000004B19CC string=0x00000000004B19D0 "   "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Rectangle::OverlapsRectVertically(__int64 a1, __int64 a2, float a3)
{
  float v3; // s1
  float v4; // s2

  v3 = *(float *)(a2 + 4);
  v4 = *(float *)(a1 + 4);
  return (float)(v3 + *(float *)(a2 + 12)) > (float)(v4 + a3) && v3 < (float)((float)(v4 + *(float *)(a1 + 12)) - a3);
}

