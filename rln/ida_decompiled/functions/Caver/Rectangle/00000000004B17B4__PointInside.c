/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B17B4
 * Mangled: _ZNK5Caver9Rectangle11PointInsideERKNS_7Vector2E
 * Demangled: Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x0000000000201A00  Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000004B17BC string=0x00000000004B17C0 "j"
 *   insn=0x00000000004B17C0 string=0x00000000004B17CC "!"
 *   insn=0x00000000004B17D0 string=0x00000000004B17D4 "  #"
 *   insn=0x00000000004B17D4 string=0x00000000004B17D8 "j"
 *   insn=0x00000000004B17E4 string=0x00000000004B17E8 "B($"
 *   insn=0x00000000004B17EC string=0x00000000004B17F0 "i"
 *   insn=0x00000000004B17FC string=0x00000000004B1800 "`( "
 *   insn=0x00000000004B1800 string=0x00000000004B1804 "   "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Rectangle::PointInside(float *a1, float *a2)
{
  float v3; // s1
  float v4; // s3

  if ( *a2 < *a1 )
    return 0;
  v3 = a2[1];
  v4 = a1[1];
  if ( v3 < v4 )
    return 0;
  if ( *a2 <= (float)(*a1 + a1[2]) )
    return v3 <= (float)(v4 + a1[3]);
  return 0;
}

