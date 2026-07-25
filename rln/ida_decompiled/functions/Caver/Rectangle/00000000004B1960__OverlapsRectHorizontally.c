/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1960
 * Mangled: _ZNK5Caver9Rectangle24OverlapsRectHorizontallyERKS0_f
 * Demangled: Caver::Rectangle::OverlapsRectHorizontally(Caver::Rectangle const&,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000004B1960 string=0x00000000004B1964 "#@"
 *   insn=0x00000000004B1968 string=0x00000000004B196C "#(#"
 *   insn=0x00000000004B196C string=0x00000000004B1970 "D( "
 *   insn=0x00000000004B1970 string=0x00000000004B1974 "` $"
 *   insn=0x00000000004B1974 string=0x00000000004B1978 "\t"
 *   insn=0x00000000004B197C string=0x00000000004B1980 "B(#"
 *   insn=0x00000000004B1980 string=0x00000000004B1984 "@8 "
 *   insn=0x00000000004B1984 string=0x00000000004B1988 "   "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Rectangle::OverlapsRectHorizontally(float *a1, float *a2, float a3)
{
  return (float)(*a2 + a2[2]) > (float)(*a1 + a3) && *a2 < (float)((float)(*a1 + a1[2]) - a3);
}

