/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B187C
 * Mangled: _ZNK5Caver9Rectangle10RectInsideERKS0_
 * Demangled: Caver::Rectangle::RectInside(Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000004B1880 string=0x00000000004B1884 "@ #"
 *   insn=0x00000000004B1884 string=0x00000000004B1888 "j"
 *   insn=0x00000000004B1888 string=0x00000000004B1894 " "
 *   insn=0x00000000004B189C string=0x00000000004B18A0 "j"
 *   insn=0x00000000004B18A0 string=0x00000000004B18AC "$@"
 *   insn=0x00000000004B18B0 string=0x00000000004B18B4 "B($"
 *   insn=0x00000000004B18B4 string=0x00000000004B18B8 "c(%"
 *   insn=0x00000000004B18B8 string=0x00000000004B18BC "@ #"
 *   insn=0x00000000004B18BC string=0x00000000004B18C0 "i"
 *   insn=0x00000000004B18C0 string=0x00000000004B18CC """
 *   insn=0x00000000004B18D4 string=0x00000000004B18D8 "!(#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Rectangle::RectInside(float *a1, float *a2)
{
  float v3; // s0
  float v4; // s1

  if ( *a2 < *a1 )
    return 0;
  v3 = a2[1];
  v4 = a1[1];
  if ( v3 < v4 )
    return 0;
  if ( (float)(*a2 + a2[2]) <= (float)(*a1 + a1[2]) )
    return (float)(v3 + a2[3]) <= (float)(v4 + a1[3]);
  return 0;
}

