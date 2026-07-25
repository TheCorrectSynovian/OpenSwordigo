/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC440
 * Mangled: _ZN5Caver11WeaponTrail9SetVertexEiRKNS_7Vector3ERKNS_5ColorERKNS_7Vector2E
 * Demangled: Caver::WeaponTrail::SetVertex(int,Caver::Vector3 const&,Caver::Color const&,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x0000000000203430  Caver::WeaponTrail::SetVertex(int,Caver::Vector3 const&,Caver::Color const&,Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 38
 *   insn=0x00000000002CC440 string=0x00000000002CC444 "J"
 *   insn=0x00000000002CC444 string=0x00000000002CC448 "(|{"
 *   insn=0x00000000002CC448 string=0x00000000002CC44C "+"
 *   insn=0x00000000002CC44C string=0x00000000002CC450 "j"
 *   insn=0x00000000002CC450 string=0x00000000002CC454 "J@"
 *   insn=0x00000000002CC458 string=0x00000000002CC45C "j\t"
 *   insn=0x00000000002CC45C string=0x00000000002CC460 "a"
 *   insn=0x00000000002CC464 string=0x00000000002CC468 "b"
 *   insn=0x00000000002CC468 string=0x00000000002CC46C "c@=d"
 *   insn=0x00000000002CC46C string=0x00000000002CC470 "d"
 *   insn=0x00000000002CC470 string=0x00000000002CC474 "!"
 *   insn=0x00000000002CC474 string=0x00000000002CC478 "B"
 *   insn=0x00000000002CC47C string=0x00000000002CC480 "c"
 *   insn=0x00000000002CC484 string=0x00000000002CC488 "*"
 *   insn=0x00000000002CC490 string=0x00000000002CC494 "L"
 *   insn=0x00000000002CC494 string=0x00000000002CC498 "_"
 *   insn=0x00000000002CC49C string=0x00000000002CC4A0 "m"
 *   insn=0x00000000002CC4A0 string=0x00000000002CC4A4 "J"
 *   insn=0x00000000002CC4CC string=0x00000000002CC4D0 "j"
 *   insn=0x00000000002CC4D0 string=0x00000000002CC4D4 "\n"
 *   insn=0x00000000002CC4D8 string=0x00000000002CC4DC "J"
 *   insn=0x00000000002CC4DC string=0x00000000002CC4E0 "K\t"
 *   insn=0x00000000002CC4E0 string=0x00000000002CC4E4 "a"
 *   insn=0x00000000002CC4E8 string=0x00000000002CC4EC "b"
 *   insn=0x00000000002CC4EC string=0x00000000002CC4F0 "c@=d"
 *   insn=0x00000000002CC4F0 string=0x00000000002CC4F4 "d"
 *   insn=0x00000000002CC4F4 string=0x00000000002CC4F8 "!"
 *   insn=0x00000000002CC4F8 string=0x00000000002CC4FC "B"
 *   insn=0x00000000002CC500 string=0x00000000002CC504 "c"
 *   insn=0x00000000002CC508 string=0x00000000002CC50C "+"
 *   insn=0x00000000002CC514 string=0x00000000002CC518 "L"
 *   insn=0x00000000002CC520 string=0x00000000002CC524 "m"
 *   insn=0x00000000002CC524 string=0x00000000002CC528 "k"
 *   insn=0x00000000002CC54C string=0x00000000002CC550 "+"
 *   insn=0x00000000002CC550 string=0x00000000002CC554 "K"
 *   insn=0x00000000002CC554 string=0x00000000002CC558 "\t"
 *   insn=0x00000000002CC558 string=0x00000000002CC55C "("
 *   insn=0x00000000002CC560 string=0x00000000002CC564 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrail::SetVertex(
        __int64 result,
        int a2,
        __int64 a3,
        _BYTE *a4,
        _QWORD *a5,
        double a6,
        float a7,
        float a8,
        float a9,
        float a10)
{
  __int64 v10; // x8
  __int64 v11; // x11
  float v12; // s0
  float v13; // s1
  float v14; // s2
  int v15; // w10
  float v16; // s4
  float v17; // s3
  int v18; // w12
  float v19; // s0
  int v20; // w13
  unsigned __int16 v21; // w10
  unsigned __int8 v22; // w12
  __int64 v23; // x10
  float v24; // s0
  int v25; // w11
  float v26; // s3
  int v27; // w12
  float v28; // s0
  int v29; // w13
  unsigned __int16 v30; // w11
  unsigned __int8 v31; // w9

  v10 = 32LL * a2;
  v11 = *(_QWORD *)(result + 24) + v10;
  *(_QWORD *)v11 = *(_QWORD *)a3;
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(a3 + 8);
  LOBYTE(a7) = *a4;
  v12 = *(float *)(result + 12);
  LOBYTE(a8) = a4[1];
  LOBYTE(a9) = a4[2];
  LOBYTE(a10) = a4[3];
  v13 = v12 * (float)LODWORD(a7);
  v14 = v12 * (float)LODWORD(a8);
  v15 = (int)v13;
  v16 = (float)LODWORD(a10);
  v17 = v12 * (float)LODWORD(a9);
  v18 = (int)v14;
  v19 = v12 * v16;
  v20 = (int)v17;
  if ( (int)v13 >= 255 )
    LOBYTE(v15) = -1;
  if ( v18 >= 255 )
    LOBYTE(v18) = -1;
  if ( v20 >= 255 )
    LOBYTE(v20) = -1;
  v21 = (unsigned __int8)v15 | ((unsigned __int8)v18 << 8);
  if ( (int)v19 >= 255 )
    v22 = -1;
  else
    v22 = (int)v19;
  *(_DWORD *)(v11 + 12) = v21 | ((unsigned __int8)v20 << 16) & 0xFFFFFF | (v22 << 24);
  v23 = *(_QWORD *)(result + 24) + v10;
  *(_QWORD *)(v23 + 16) = *a5;
  LOBYTE(v13) = *a4;
  v24 = *(float *)(result + 12);
  LOBYTE(v14) = a4[1];
  LOBYTE(v17) = a4[2];
  LOBYTE(v16) = a4[3];
  v25 = (int)(float)(v24 * (float)LODWORD(v13));
  v26 = v24 * (float)LODWORD(v17);
  v27 = (int)(float)(v24 * (float)LODWORD(v14));
  v28 = v24 * (float)LODWORD(v16);
  v29 = (int)v26;
  if ( v25 >= 255 )
    LOBYTE(v25) = -1;
  if ( v27 >= 255 )
    LOBYTE(v27) = -1;
  if ( v29 >= 255 )
    LOBYTE(v29) = -1;
  v30 = (unsigned __int8)v25 | ((unsigned __int8)v27 << 8);
  if ( (int)v28 >= 255 )
    v31 = -1;
  else
    v31 = (int)v28;
  *(_DWORD *)(v23 + 24) = v30 | ((unsigned __int8)v29 << 16) & 0xFFFFFF | (v31 << 24);
  *(_DWORD *)(*(_QWORD *)(result + 24) + v10 + 28) = 1065353216;
  return result;
}

