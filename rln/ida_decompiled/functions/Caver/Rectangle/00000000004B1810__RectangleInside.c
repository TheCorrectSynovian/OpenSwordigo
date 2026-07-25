/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1810
 * Mangled: _ZNK5Caver9Rectangle15RectangleInsideERKS0_
 * Demangled: Caver::Rectangle::RectangleInside(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001FDDA0  Caver::Rectangle::RectangleInside(Caver::Rectangle const&)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000004B1818 string=0x00000000004B181C "j"
 *   insn=0x00000000004B181C string=0x00000000004B1828 ""@"
 *   insn=0x00000000004B1830 string=0x00000000004B1834 "!(#"
 *   insn=0x00000000004B1838 string=0x00000000004B183C "i"
 *   insn=0x00000000004B183C string=0x00000000004B1848 " "
 *   insn=0x00000000004B1850 string=0x00000000004B1854 "j"
 *   insn=0x00000000004B1854 string=0x00000000004B1860 """
 *   insn=0x00000000004B1868 string=0x00000000004B186C "!(#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Rectangle::RectangleInside(float *a1, float *a2)
{
  float v3; // s0
  float v4; // s1

  if ( *a2 < *a1 )
    return 0;
  if ( (float)(*a2 + a2[2]) > (float)(*a1 + a1[2]) )
    return 0;
  v3 = a2[1];
  v4 = a1[1];
  return v3 >= v4 && (float)(v3 + a2[3]) <= (float)(v4 + a1[3]);
}

