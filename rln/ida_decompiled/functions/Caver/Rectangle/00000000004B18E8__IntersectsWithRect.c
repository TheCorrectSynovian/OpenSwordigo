/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B18E8
 * Mangled: _ZNK5Caver9Rectangle18IntersectsWithRectERKS0_
 * Demangled: Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F59D0  Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000004B18E8 string=0x00000000004B18EC ""@"
 *   insn=0x00000000004B18F4 string=0x00000000004B18F8 "@ !"
 *   insn=0x00000000004B18F8 string=0x00000000004B18FC ")"
 *   insn=0x00000000004B1900 string=0x00000000004B1904 "!(""
 *   insn=0x00000000004B190C string=0x00000000004B1910 " "
 *   insn=0x00000000004B1910 string=0x00000000004B1914 """
 *   insn=0x00000000004B191C string=0x00000000004B1920 "@ !"
 *   insn=0x00000000004B1920 string=0x00000000004B1924 "i"
 *   insn=0x00000000004B1928 string=0x00000000004B192C "!(""
 *   insn=0x00000000004B1930 string=0x00000000004B1934 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Rectangle::IntersectsWithRect(float *a1, float *a2)
{
  float v2; // s0
  float v3; // s1

  if ( (float)(*a2 + a2[2]) <= *a1 )
    return 0;
  if ( *a2 >= (float)(*a1 + a1[2]) )
    return 0;
  v2 = a2[1];
  v3 = a1[1];
  return (float)(v2 + a2[3]) > v3 && v2 < (float)(v3 + a1[3]);
}

