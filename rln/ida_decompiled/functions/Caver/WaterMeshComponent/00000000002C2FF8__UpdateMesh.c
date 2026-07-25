/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C2FF8
 * Mangled: _ZN5Caver18WaterMeshComponent10UpdateMeshEv
 * Demangled: Caver::WaterMeshComponent::UpdateMesh(void)
 *
 * Callers: 1
 *   0x00000000001FB780  Caver::WaterMeshComponent::UpdateMesh(void)
 *
 * Callees: 1
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 42
 *   insn=0x00000000002C301C string=0x00000000002C3020 "hFA"
 *   insn=0x00000000002C3024 string=0x00000000002C3028 "(\n"
 *   insn=0x00000000002C3028 string=0x00000000002C302C "("
 *   insn=0x00000000002C302C string=0x00000000002C3030 "\t"
 *   insn=0x00000000002C3030 string=0x00000000002C3034 ""
 *   insn=0x00000000002C3034 string=0x00000000002C3038 "\n"
 *   insn=0x00000000002C3038 string=0x00000000002C303C ""
 *   insn=0x00000000002C303C string=0x00000000002C3040 ""
 *   insn=0x00000000002C3040 string=0x00000000002C3044 "("
 *   insn=0x00000000002C3048 string=0x00000000002C304C ""
 *   insn=0x00000000002C304C string=0x00000000002C3050 "h"
 *   insn=0x00000000002C3050 string=0x00000000002C3054 ""
 *   insn=0x00000000002C3060 string=0x00000000002C3064 "`"
 *   insn=0x00000000002C3064 string=0x00000000002C3068 "a"
 *   insn=0x00000000002C3068 string=0x00000000002C306C "bVA"
 *   insn=0x00000000002C3074 string=0x00000000002C3078 "@*"
 *   insn=0x00000000002C3078 string=0x00000000002C307C "`( "
 *   insn=0x00000000002C308C string=0x00000000002C3090 "aVA"
 *   insn=0x00000000002C309C string=0x00000000002C30A0 "!-"
 *   insn=0x00000000002C30B4 string=0x00000000002C30B8 "h"
 *   insn=0x00000000002C30C4 string=0x00000000002C30C8 "W}{"
 *   insn=0x00000000002C30CC string=0x00000000002C30D0 "x}{"
 *   insn=0x00000000002C30D0 string=0x00000000002C30D4 "\n"
 *   insn=0x00000000002C30D8 string=0x00000000002C30DC "@"
 *   insn=0x00000000002C30DC string=0x00000000002C30E0 "\n"
 *   insn=0x00000000002C30E0 string=0x00000000002C30E4 "@"
 *   insn=0x00000000002C30E4 string=0x00000000002C30E8 "\n"
 *   insn=0x00000000002C30E8 string=0x00000000002C30EC "@"
 *   insn=0x00000000002C30EC string=0x00000000002C30F0 "`VA"
 *   insn=0x00000000002C3108 string=0x00000000002C310C ")}@"
 *   insn=0x00000000002C310C string=0x00000000002C3110 "!"
 *   insn=0x00000000002C3110 string=0x00000000002C3114 ""
 *   insn=0x00000000002C3114 string=0x00000000002C3118 " ( "
 *   insn=0x00000000002C312C string=0x00000000002C3130 "h"
 *   insn=0x00000000002C313C string=0x00000000002C3140 "\t"
 *   insn=0x00000000002C3140 string=0x00000000002C3144 "\n"
 *   insn=0x00000000002C3144 string=0x00000000002C3148 ""
 *   insn=0x00000000002C3148 string=0x00000000002C314C " "
 *   insn=0x00000000002C314C string=0x00000000002C3150 "@"
 *   insn=0x00000000002C3154 string=0x00000000002C3158 "`JA"
 *   insn=0x00000000002C3158 string=0x00000000002C315C "hF"
 *   insn=0x00000000002C315C string=0x00000000002C3160 ") "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WaterMeshComponent::UpdateMesh(Caver::WaterMeshComponent *this)
{
  int v2; // w8
  float v3; // s8
  __int64 v4; // x20
  int v5; // w21
  float v6; // s15
  float v7; // s0
  float v8; // s15
  float v9; // s0
  float v10; // s0
  __int64 v11; // x8
  __int64 v12; // x23
  float v13; // s0
  __int64 v14; // x24
  __int64 v15; // x22
  float v16; // s15
  float v17; // s0
  float v18; // s0
  __int64 v19; // x8
  float v20; // s0

  v2 = *((_DWORD *)this + 81);
  *((_BYTE *)this + 320) = 0;
  if ( (v2 & 0x80000000) == 0 )
  {
    v3 = *((float *)this + 34);
    v4 = -1;
    v5 = 3;
    do
    {
      v6 = *((float *)this + 35) + *((float *)this + 37);
      v7 = (float)((float)(v3 / 160.0) + (float)(*((float *)this + 85) * 0.2)) * 6.28318531;
      v8 = v6 + (float)(sinf(v7) * 6.0);
      v9 = (float)((float)(v3 / 320.0) + (float)(*((float *)this + 85) * 0.6)) * 6.28318531;
      v10 = sinf(v9);
      v11 = *((_QWORD *)this + 38);
      v12 = 32LL * (v5 - 2);
      v13 = v8 + (float)(v10 * 6.0);
      v14 = 32LL * (v5 - 1);
      v15 = 32LL * v5;
      *(float *)(v11 + v12 + 4) = v13;
      *(float *)(v11 + v14 + 4) = v13;
      *(float *)(v11 + v15 + 4) = v13;
      ++v4;
      v16 = *(float *)(v11 + 32LL * (v5 - 3) + 24);
      v17 = (float)((float)((float)(int)v4 / 20.0) + (float)(*((float *)this + 85) * 0.5)) * 6.28318531;
      v18 = sinf(v17);
      v19 = *((_QWORD *)this + 38);
      v20 = v16 + (float)(v18 * 0.2);
      v5 += 4;
      *(float *)(v19 + v12 + 24) = v20;
      *(float *)(v19 + v14 + 24) = v20;
      *(float *)(v19 + v15 + 24) = v20;
      v3 = v3 + *((float *)this + 82);
    }
    while ( v4 < *((int *)this + 81) );
  }
}

