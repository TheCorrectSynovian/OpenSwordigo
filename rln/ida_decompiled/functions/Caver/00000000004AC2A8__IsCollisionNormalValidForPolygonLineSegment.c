/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AC2A8
 * Mangled: _ZN5Caver43IsCollisionNormalValidForPolygonLineSegmentERKNS_7Vector2ERKNS_7PolygonEi
 * Demangled: Caver::IsCollisionNormalValidForPolygonLineSegment(Caver::Vector2 const&,Caver::Polygon const&,int)
 *
 * Callers: 1
 *   0x00000000001FD560  Caver::IsCollisionNormalValidForPolygonLineSegment(Caver::Vector2 const&,Caver::Polygon const&,int)
 *
 * Callees: 0
 *
 * Referenced strings: 27
 *   insn=0x00000000004AC2AC string=0x00000000004AC2B0 "\t"
 *   insn=0x00000000004AC2B0 string=0x00000000004AC2B4 "&"
 *   insn=0x00000000004AC2B4 string=0x00000000004AC2B8 "$"
 *   insn=0x00000000004AC2B8 string=0x00000000004AC2BC "I|@"
 *   insn=0x00000000004AC2C4 string=0x00000000004AC2C8 "p "
 *   insn=0x00000000004AC2C8 string=0x00000000004AC2CC "Q!"
 *   insn=0x00000000004AC2D0 string=0x00000000004AC2D4 "" "
 *   insn=0x00000000004AC2D4 string=0x00000000004AC2D8 "e"
 *   insn=0x00000000004AC2D8 string=0x00000000004AC2DC "B"
 *   insn=0x00000000004AC2D8 string=0x00000000004AC304 "*"
 *   insn=0x00000000004AC2DC string=0x00000000004AC2E0 "\t"
 *   insn=0x00000000004AC2EC string=0x00000000004AC2F0 "d"
 *   insn=0x00000000004AC2F0 string=0x00000000004AC2F4 "E"
 *   insn=0x00000000004AC2FC string=0x00000000004AC300 ""
 *   insn=0x00000000004AC300 string=0x00000000004AC334 "F$"
 *   insn=0x00000000004AC304 string=0x00000000004AC308 "+"
 *   insn=0x00000000004AC308 string=0x00000000004AC30C "j"
 *   insn=0x00000000004AC30C string=0x00000000004AC310 "J\t"
 *   insn=0x00000000004AC310 string=0x00000000004AC314 "_"
 *   insn=0x00000000004AC314 string=0x00000000004AC318 "a"
 *   insn=0x00000000004AC318 string=0x00000000004AC324 "\t"
 *   insn=0x00000000004AC344 string=0x00000000004AC348 "c@!"
 *   insn=0x00000000004AC348 string=0x00000000004AC34C """"
 *   insn=0x00000000004AC350 string=0x00000000004AC354 "B8#"
 *   insn=0x00000000004AC354 string=0x00000000004AC358 "H  "
 *   insn=0x00000000004AC364 string=0x00000000004AC368 "!%"
 *   insn=0x00000000004AC36C string=0x00000000004AC370 "  "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::IsCollisionNormalValidForPolygonLineSegment(float *a1, __int64 a2, int a3)
{
  __int64 v3; // x8
  float v4; // s0
  float v5; // s1
  float *v6; // x9
  float v7; // s7
  float v8; // s4
  float v9; // s5
  float v10; // s3
  float v11; // s2
  __int64 v12; // x8
  float v13; // s4
  float v14; // s5
  __int64 v16; // x8

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *a1;
  v5 = a1[1];
  v6 = (float *)(v3 + 8LL * a3);
  v7 = v6[1];
  v8 = v6[2];
  v9 = v6[3];
  v10 = v8 - *v6;
  v11 = v9 - v7;
  if ( (float)((float)(v10 * *a1) + (float)((float)(v9 - v7) * v5)) >= 0.0 )
  {
    if ( *(_DWORD *)a2 + *(unsigned __int8 *)(a2 + 33) - 2 == a3 )
      return 0;
    v16 = v3 + 8LL * a3;
    v13 = *(float *)(v16 + 16) - v8;
    v14 = *(float *)(v16 + 20) - v9;
  }
  else
  {
    if ( !a3 )
      return 0;
    v12 = v3 + 8LL * a3;
    v13 = v8 - *v6;
    v14 = v9 - v7;
    v11 = v7 - *(float *)(v12 - 4);
    v10 = *v6 - *(float *)(v12 - 8);
  }
  if ( (float)((float)(v14 * v10) - (float)(v11 * v13)) <= 0.0 )
    return 0;
  if ( (float)((float)(v5 * v11) - (float)(v4 * (float)-v10)) <= 0.0 )
    return 0;
  return (float)((float)(v4 * (float)-v13) - (float)(v5 * v14)) > 0.0;
}

