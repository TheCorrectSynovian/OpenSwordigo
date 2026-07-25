/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C1BDC
 * Mangled: _ZN5Caver7IsAnEarEPNS_11VertexList_EPNS_15VertexListNode_ES1_
 * Demangled: Caver::IsAnEar(Caver::VertexList_ *,Caver::VertexListNode_ *,Caver::VertexList_ *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 23
 *   insn=0x00000000002C1BE0 string=0x00000000002C1BE4 "H"
 *   insn=0x00000000002C1BE4 string=0x00000000002C1BE8 ")"
 *   insn=0x00000000002C1BE8 string=0x00000000002C1BEC ""
 *   insn=0x00000000002C1BEC string=0x00000000002C1BF0 ""
 *   insn=0x00000000002C1BF0 string=0x00000000002C1BF4 "h"
 *   insn=0x00000000002C1BF4 string=0x00000000002C1C00 "("
 *   insn=0x00000000002C1C00 string=0x00000000002C1C04 "I"
 *   insn=0x00000000002C1C04 string=0x00000000002C1C08 "\n"
 *   insn=0x00000000002C1C0C string=0x00000000002C1C10 "m"
 *   insn=0x00000000002C1C18 string=0x00000000002C1C1C ","
 *   insn=0x00000000002C1C18 string=0x00000000002C1CA8 "k"
 *   insn=0x00000000002C1C30 string=0x00000000002C1C34 "b"
 *   insn=0x00000000002C1C38 string=0x00000000002C1C3C "'8%"
 *   insn=0x00000000002C1C3C string=0x00000000002C1C40 "P8$"
 *   insn=0x00000000002C1C40 string=0x00000000002C1C44 "q8%"
 *   insn=0x00000000002C1C58 string=0x00000000002C1C5C "&"
 *   insn=0x00000000002C1C64 string=0x00000000002C1C68 "P8&"
 *   insn=0x00000000002C1C68 string=0x00000000002C1C6C "q8'"
 *   insn=0x00000000002C1C7C string=0x00000000002C1C80 "K"
 *   insn=0x00000000002C1C88 string=0x00000000002C1C8C "@8 "
 *   insn=0x00000000002C1C8C string=0x00000000002C1C90 "a8!"
 *   insn=0x00000000002C1C98 string=0x00000000002C1C9C " 8 "
 *   insn=0x00000000002C1C9C string=0x00000000002C1CA0 "  "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::IsAnEar(__int64 a1, float *a2, __int64 a3)
{
  __int64 v4; // x8
  __int64 v5; // x11
  int v6; // w13
  __int64 v7; // x12
  float v8; // s0
  float v9; // s1
  float v10; // s4
  float v11; // s5
  float v12; // s2
  float v13; // s3
  float v14; // s6
  float v15; // s7

  if ( !*(_DWORD *)(a3 + 16) )
    return 1;
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 32LL * *((int *)a2 + 4) + 16) & 0x80000000) == 0 )
    return 0;
  v4 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v6 = *(_DWORD *)(v5 + 16);
    if ( v6 != *(_DWORD *)(*(_QWORD *)a2 + 16LL) )
    {
      v7 = *((_QWORD *)a2 + 1);
      if ( v6 != *(_DWORD *)(v7 + 16) )
      {
        v8 = *(float *)(v4 + 20);
        v9 = *(float *)(v4 + 24);
        v10 = *(float *)(v7 + 20);
        v11 = *(float *)(v7 + 24);
        v12 = *(float *)(v5 + 20);
        v13 = *(float *)(v5 + 24);
        if ( (float)((float)((float)(v8 - v10) * (float)(v13 - v11)) - (float)((float)(v9 - v11) * (float)(v12 - v10))) >= 0.0 )
        {
          v14 = a2[5];
          v15 = a2[6];
          if ( (float)((float)((float)(v10 - v14) * (float)(v13 - v15))
                     - (float)((float)(v11 - v15) * (float)(v12 - v14))) >= 0.0
            && (float)((float)((float)(v14 - v8) * (float)(v13 - v9)) - (float)((float)(v15 - v9) * (float)(v12 - v8))) >= 0.0 )
          {
            break;
          }
        }
      }
    }
    v5 = *(_QWORD *)(v5 + 8);
    if ( v5 == *(_QWORD *)(a3 + 8) )
      return 1;
  }
  return 0;
}

