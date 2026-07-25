/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000453FF8
 * Mangled: _ZN5Caver14ParticleSystem6UpdateEf
 * Demangled: Caver::ParticleSystem::Update(float)
 *
 * Callers: 1
 *   0x00000000001FE460  Caver::ParticleSystem::Update(float)
 *
 * Callees: 0
 *
 * Referenced strings: 31
 *   insn=0x0000000000453FFC string=0x0000000000454000 "+"
 *   insn=0x0000000000454000 string=0x0000000000454004 "n\t"
 *   insn=0x0000000000454004 string=0x00000000005837A4 "o"
 *   insn=0x0000000000454040 string=0x0000000000454044 " "0"
 *   insn=0x0000000000454044 string=0x0000000000454048 "%"
 *   insn=0x0000000000454048 string=0x000000000045404C "?A("
 *   insn=0x0000000000454048 string=0x00000000004541AC ")"
 *   insn=0x000000000045404C string=0x0000000000454050 "}@"
 *   insn=0x00000000004540C0 string=0x00000000004540C4 "5"
 *   insn=0x00000000004540DC string=0x00000000004540E0 "U\n "
 *   insn=0x00000000004540F0 string=0x00000000004540F4 "P"
 *   insn=0x00000000004540FC string=0x0000000000454100 "3"
 *   insn=0x0000000000454104 string=0x0000000000454108 "1"
 *   insn=0x0000000000454108 string=0x000000000045410C "R*4"
 *   insn=0x0000000000454128 string=0x000000000045412C "s\n "
 *   insn=0x0000000000454130 string=0x0000000000454134 "@"1"
 *   insn=0x000000000045413C string=0x0000000000454140 "3\n""
 *   insn=0x0000000000454140 string=0x0000000000454144 "s\n "
 *   insn=0x0000000000454144 string=0x0000000000454148 "R*3"
 *   insn=0x0000000000454148 string=0x000000000045414C " "2"
 *   insn=0x000000000045414C string=0x0000000000454150 "2N2"
 *   insn=0x0000000000454158 string=0x000000000045415C "O"
 *   insn=0x000000000045415C string=0x00000000004541A4 "$@"
 *   insn=0x0000000000454194 string=0x0000000000454198 "P*0"
 *   insn=0x0000000000454198 string=0x000000000045419C "0\n0"
 *   insn=0x00000000004541A4 string=0x00000000004541A8 ""
 *   insn=0x00000000004541AC string=0x00000000004541B0 "?"
 *   insn=0x00000000004541B0 string=0x00000000004541B4 "J"
 *   insn=0x00000000004541B4 string=0x00000000004541B8 ""
 *   insn=0x00000000004541B8 string=0x00000000004541BC "$"
 *   insn=0x00000000004541C4 string=0x00000000004541C8 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleSystem::Update(__int64 this, double a2)
{
  int v2; // w13
  __int64 v3; // x12
  __int64 v4; // x9
  int v5; // w8
  float32x2_t v6; // d1
  __int64 v7; // x10
  _DWORD *v8; // x14
  __int128 v9; // q16
  __int64 v10; // x12
  float32x2_t *v11; // x14
  float32x2_t *v12; // x14
  float32x2_t v13; // t1
  float32x2_t v14; // d17
  float v15; // s16
  float v16; // s18
  float v17; // s20
  float v18; // s18
  __int64 v19; // x14
  float *v20; // x14
  float v21; // t1
  float v22; // s18
  float v23; // s17
  float v24; // s18
  float v25; // s16
  float v26; // s16

  v2 = *(_DWORD *)(this + 36);
  if ( v2 < 1 )
  {
    *(_DWORD *)(this + 36) = 0;
  }
  else
  {
    v3 = *(_QWORD *)(this + 40);
    v4 = 0;
    v5 = 0;
    v6.n64_u64[0] = vdup_lane_s32(*(int32x2_t *)&a2, 0).n64_u64[0];
    v7 = 64;
    do
    {
      if ( *(float *)(v3 + v7) < (float)(*(float *)(v3 + v7 - 4) + -0.001) )
      {
        if ( v4 != v5 )
        {
          v8 = (_DWORD *)(v3 + v7);
          v9 = *(_OWORD *)(v3 + v7 - 64);
          v10 = v3 + 68LL * v5;
          *(_OWORD *)v10 = v9;
          *(_DWORD *)(v10 + 16) = *(v8 - 12);
          *(_DWORD *)(v10 + 20) = *(v8 - 11);
          *(_DWORD *)(v10 + 24) = *(v8 - 10);
          *(_DWORD *)(v10 + 44) = *(v8 - 5);
          *(_OWORD *)(v10 + 28) = *(_OWORD *)(v8 - 9);
          *(_QWORD *)(v10 + 48) = *((_QWORD *)v8 - 2);
          *(_DWORD *)(v10 + 64) = *v8;
          *(_QWORD *)(v10 + 56) = *((_QWORD *)v8 - 1);
          v3 = *(_QWORD *)(this + 40);
        }
        v11 = (float32x2_t *)(v3 + 68LL * v5);
        v13.n64_u64[0] = v11[2].n64_u64[0];
        v12 = v11 + 2;
        v14.n64_u64[0] = v13.n64_u64[0];
        v15 = v12[6].n64_f32[0] + *(float *)&a2;
        v12[6].n64_f32[0] = v15;
        v16 = v12[1].n64_f32[0];
        v17 = (float)(v16 * *(float *)&a2) + v12[-1].n64_f32[1];
        *(float32x2_t *)((char *)v12 - 12) = vadd_f32(vmul_f32(v6, v13), *(float32x2_t *)((char *)v12 - 12));
        v12[-1].n64_f32[1] = v17;
        if ( *(_BYTE *)(this + 145) )
        {
          v18 = v16 + (float)(*(float *)(this + 156) * *(float *)&a2);
          v12->n64_u64[0] = vadd_f32(v14, vmul_f32(v6, *(float32x2_t *)(this + 148))).n64_u64[0];
          v12[1].n64_f32[0] = v18;
        }
        v19 = v3 + 68LL * v5;
        v21 = *(float *)(v19 + 40);
        v20 = (float *)(v19 + 40);
        v22 = v21;
        v23 = v20[1];
        *(v20 - 2) = *(v20 - 2) + (float)(*(v20 - 1) * *(float *)&a2);
        if ( v21 < v23 )
        {
          v24 = v22 + (float)((float)(v23 * 6.0) * *(float *)&a2);
          if ( v23 < v24 )
            v24 = v23;
          *v20 = v24;
        }
        if ( *(_BYTE *)(this + 160) )
        {
          v25 = v15 / *(float *)(v3 + 68LL * v5 + 60);
          if ( v25 > 0.5 )
          {
            v26 = fmaxf(1.0 - (float)((float)(v25 + -0.5) + (float)(v25 + -0.5)), 0.0);
            *(float *)(v3 + 68LL * v5 + 56) = v26;
            *v20 = v23 * (float)(*(float *)(this + 164) + (float)(v26 * (float)(1.0 - *(float *)(this + 164))));
          }
        }
        v2 = *(_DWORD *)(this + 36);
        ++v5;
      }
      ++v4;
      v7 += 68;
    }
    while ( v4 < v2 );
    *(_DWORD *)(this + 36) = v5;
  }
  return this;
}

