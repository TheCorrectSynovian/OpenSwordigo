/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1724
 * Mangled: _ZNK5Caver9Rectangle24DistanceFromPointSquaredERKNS_7Vector2E
 * Demangled: Caver::Rectangle::DistanceFromPointSquared(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001FC650  Caver::Rectangle::DistanceFromPointSquared(Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000004B1730 string=0x00000000004B1734 "!"
 *   insn=0x00000000004B1738 string=0x00000000004B173C "  ""
 *   insn=0x00000000004B1740 string=0x00000000004B1744 ""
 *   insn=0x00000000004B1740 string=0x00000000004B179C "`8 "
 *   insn=0x00000000004B1748 string=0x00000000004B174C "!"
 *   insn=0x00000000004B174C string=0x00000000004B1750 "c($"
 *   insn=0x00000000004B1754 string=0x00000000004B1758 "-"
 *   insn=0x00000000004B1758 string=0x00000000004B175C "  ""
 *   insn=0x00000000004B1758 string=0x00000000004B177C "  ""
 *   insn=0x00000000004B1764 string=0x00000000004B1768 "B($"
 *   insn=0x00000000004B1768 string=0x00000000004B176C "  ""
 *   insn=0x00000000004B176C string=0x00000000004B1770 "l"
 *   insn=0x00000000004B1770 string=0x00000000004B1774 """
 *   insn=0x00000000004B1774 string=0x00000000004B1778 "\t"
 *   insn=0x00000000004B1784 string=0x00000000004B1788 "B(#"
 *   insn=0x00000000004B1788 string=0x00000000004B178C "  ""
 *   insn=0x00000000004B178C string=0x00000000004B1790 "L"
 *   insn=0x00000000004B1790 string=0x00000000004B1794 """
 *   insn=0x00000000004B179C string=0x00000000004B17A0 "A8!"
 *   insn=0x00000000004B17A4 string=0x00000000004B17A8 "!!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Rectangle::DistanceFromPointSquared(float *a1, float *a2)
{
  float v2; // s0
  float v3; // s3
  float v4; // s1
  float v5; // s2

  v2 = *a2;
  v3 = *a1;
  if ( *a2 < *a1 )
  {
    v4 = a2[1];
    v5 = a1[1];
    if ( v4 < v5 )
      return (float)((float)(v3 - v2) * (float)(v3 - v2)) + (float)((float)(v5 - v4) * (float)(v5 - v4));
    goto LABEL_6;
  }
  v5 = a1[1];
  v4 = a2[1];
  v3 = v3 + a1[2];
  if ( v2 > v3 )
  {
    if ( v4 < v5 )
      return (float)((float)(v3 - v2) * (float)(v3 - v2)) + (float)((float)(v5 - v4) * (float)(v5 - v4));
LABEL_6:
    v5 = v5 + a1[3];
    if ( v4 <= v5 )
      v5 = v4;
    return (float)((float)(v3 - v2) * (float)(v3 - v2)) + (float)((float)(v5 - v4) * (float)(v5 - v4));
  }
  if ( v4 >= v5 )
  {
    v5 = v5 + a1[3];
    if ( v4 <= v5 )
      v5 = a2[1];
  }
  v3 = *a2;
  return (float)((float)(v3 - v2) * (float)(v3 - v2)) + (float)((float)(v5 - v4) * (float)(v5 - v4));
}

