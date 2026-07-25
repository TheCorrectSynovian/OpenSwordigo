/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B0524
 * Mangled: _ZNK5Caver7Polygon11PointInsideERKNS_7Vector2E
 * Demangled: Caver::Polygon::PointInside(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000004B0528 string=0x00000000004B052C ""
 *   insn=0x00000000004B052C string=0x00000000004B0530 ""
 *   insn=0x00000000004B0530 string=0x00000000004B0534 " "
 *   insn=0x00000000004B053C string=0x00000000004B0540 ""
 *   insn=0x00000000004B0540 string=0x00000000004B0544 "l"
 *   insn=0x00000000004B0554 string=0x00000000004B0558 "n"
 *   insn=0x00000000004B055C string=0x00000000004B0560 "@ !"
 *   insn=0x00000000004B0560 string=0x00000000004B0564 "h"
 *   insn=0x00000000004B0564 string=0x00000000004B0568 "  #"
 *   insn=0x00000000004B0564 string=0x00000000004B0570 "  ""
 *   insn=0x00000000004B0574 string=0x00000000004B0578 "` !"
 *   insn=0x00000000004B0584 string=0x00000000004B0588 "eim"
 *   insn=0x00000000004B0588 string=0x00000000004B058C "&8""
 *   insn=0x00000000004B058C string=0x00000000004B0590 "b8""
 *   insn=0x00000000004B05A4 string=0x00000000004B05A8 "E"
 *   insn=0x00000000004B05A8 string=0x00000000004B05AC ")"
 *   insn=0x00000000004B05B0 string=0x00000000004B05B4 "J"
 *   insn=0x00000000004B05BC string=0x00000000004B05C0 "A"
 *   insn=0x00000000004B05C0 string=0x00000000004B05C4 " "
 *   insn=0x00000000004B05CC string=0x00000000004B05D0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Polygon::PointInside(unsigned int *a1, float *a2)
{
  __int64 v2; // x8
  __int64 v3; // x11
  float v4; // s1
  __int64 v5; // x10
  char v6; // w9
  __int64 v7; // x13
  float *v8; // x12
  float v9; // s2
  float v10; // s3

  v2 = *a1;
  if ( (int)v2 < 1 )
    return 0;
  v3 = *((_QWORD *)a1 + 1);
  v4 = a2[1];
  v5 = 0;
  v6 = 0;
  LODWORD(v7) = v2 - 1;
  v8 = (float *)(v3 + 4);
  do
  {
    if ( (int)v7 >= (int)v2 )
      v7 = 0;
    else
      v7 = (int)v7;
    v9 = *v8;
    v10 = *(float *)(v3 + 8 * v7 + 4);
    if ( (*v8 <= v4 && v4 < v10 || v4 < v9 && v10 <= v4)
      && *a2 < (float)(*(v8 - 1)
                     + (float)((float)((float)(v4 - v9) * (float)(*(float *)(v3 + 8 * v7) - *(v8 - 1)))
                             / (float)(v10 - v9))) )
    {
      v6 ^= 1u;
    }
    LODWORD(v7) = v5++;
    v8 += 2;
  }
  while ( v2 != v5 );
  return v6 & 1;
}

