/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000461CF8
 * Mangled: _ZNK5Caver15PointLightGroup13CombinedLightEv
 * Demangled: Caver::PointLightGroup::CombinedLight(void)
 *
 * Callers: 2
 *   0x00000000001F4DA0  Caver::PointLightGroup::CombinedLight(void)
 *   0x00000000004612D4  Caver::PointLightManager::GetOptimizedLights(Caver::Rectangle const&,Caver::PointLight *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 40
 *   insn=0x0000000000461CF8 string=0x0000000000461CFC "\t"
 *   insn=0x0000000000461D04 string=0x0000000000461D08 " "
 *   insn=0x0000000000461D0C string=0x0000000000461D10 "\t"
 *   insn=0x0000000000461D10 string=0x0000000000461D14 "?"
 *   insn=0x0000000000461D1C string=0x0000000000461D20 ""
 *   insn=0x0000000000461D3C string=0x0000000000461D40 ""
 *   insn=0x0000000000461D44 string=0x0000000000461D48 "k"
 *   insn=0x0000000000461D50 string=0x0000000000461D54 "z"
 *   insn=0x0000000000461D54 string=0x0000000000461D58 "r]A-y"
 *   insn=0x0000000000461D58 string=0x0000000000461D5C "y"
 *   insn=0x0000000000461D5C string=0x0000000000461D60 "xA^"
 *   insn=0x0000000000461D60 string=0x0000000000461D64 "u"
 *   insn=0x0000000000461D64 string=0x0000000000461D68 "vQ"
 *   insn=0x0000000000461D68 string=0x0000000000461D6C "s"
 *   insn=0x0000000000461D6C string=0x0000000000461D70 "@#1"
 *   insn=0x0000000000461D70 string=0x0000000000461D74 "e"
 *   insn=0x0000000000461D74 string=0x0000000000461D78 "Q"
 *   insn=0x0000000000461D74 string=0x0000000000461D80 "z"
 *   insn=0x0000000000461D88 string=0x0000000000461D8C "@#0"
 *   insn=0x0000000000461D8C string=0x0000000000461D90 "e"
 *   insn=0x0000000000461D90 string=0x0000000000461D94 "P"
 *   insn=0x0000000000461D90 string=0x0000000000461D9C "J"
 *   insn=0x0000000000461DA0 string=0x0000000000461DA4 "%+%"
 *   insn=0x0000000000461DB4 string=0x0000000000461DB8 "d"
 *   insn=0x0000000000461DB8 string=0x0000000000461DBC "@* "
 *   insn=0x0000000000461DBC string=0x0000000000461DC0 "_"
 *   insn=0x0000000000461DC0 string=0x0000000000461DC4 "k"
 *   insn=0x0000000000461DC4 string=0x0000000000461DC8 "k"
 *   insn=0x0000000000461DC8 string=0x0000000000461DCC "p"
 *   insn=0x0000000000461DDC string=0x0000000000461DE0 ""
 *   insn=0x0000000000461DE4 string=0x0000000000461DE8 "\n"
 *   insn=0x0000000000461E04 string=0x0000000000461E08 ""
 *   insn=0x0000000000461E10 string=0x0000000000461E14 "2"
 *   insn=0x0000000000461E14 string=0x0000000000461E18 "&"
 *   insn=0x0000000000461E18 string=0x0000000000461E1C "1"
 *   insn=0x0000000000461E20 string=0x0000000000461E24 "!"
 *   insn=0x0000000000461E24 string=0x0000000000461E28 ""\n""
 *   insn=0x0000000000461E2C string=0x0000000000461E30 "#\n#"
 *   insn=0x0000000000461E30 string=0x0000000000461E34 "'\n0"
 *   insn=0x0000000000461E38 string=0x0000000000461E3C " \n "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::PointLightGroup::CombinedLight@<S0>(Caver::PointLightGroup *this@<X0>, __int64 a2@<X8>)
{
  __int64 v2; // x9
  float v3; // s16
  __int64 v4; // x10
  float32x2_t v5; // d1
  float v6; // s0
  float v7; // s2
  float v8; // s5
  float v9; // s6
  float32x2_t v10; // d7
  float32x2_t v11; // d4
  __int64 v12; // x11
  float v13; // s17
  float32x2_t v14; // d3
  float v15; // s26
  float v16; // s18
  float v17; // s23
  float v18; // s25
  float32x2_t v19; // d24
  float v20; // s21
  float32x2_t v21; // d20
  float32x2_t v22; // d22
  float32x2_t v23; // d19
  float v24; // s26
  float v25; // s25
  float32x2_t v26; // d24
  float v27; // s16
  float v28; // s6
  float v29; // s17
  float result; // s0

  *(_OWORD *)(a2 + 16) = 0u;
  *(_OWORD *)(a2 + 32) = 0u;
  *(_OWORD *)a2 = 0u;
  *(int32x2_t *)(a2 + 52) = vdup_n_s32(0x7F7FFFFFu);
  v2 = *(int *)this;
  if ( (int)v2 <= 0 )
  {
    v5.n64_u64[0] = 0;
    v6 = 0.0;
    v27 = 0.0;
    v14.n64_u32[0] = 0;
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    v10.n64_u64[0] = 0;
    v11.n64_u64[0] = 0;
  }
  else
  {
    v3 = 3.4028e38;
    v4 = 0;
    v5.n64_u64[0] = 0;
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    v10.n64_u64[0] = 0;
    v11.n64_u64[0] = 0;
    v12 = *((_QWORD *)this + 1) + 32LL;
    v13 = 3.4028e38;
    v14.n64_u64[0] = 0;
    do
    {
      v15 = *(float *)(v12 + 20);
      v16 = *(float *)(v12 + 8);
      v17 = *(float *)(v12 + 12);
      v18 = *(float *)(v12 - 32);
      v19.n64_u64[0] = *(unsigned __int64 *)(v12 - 28);
      v20 = *(float *)(v12 - 20);
      v22.n64_u64[0] = *(unsigned __int64 *)(v12 - 16);
      v21.n64_u64[0] = *(unsigned __int64 *)(v12 - 8);
      v23.n64_u64[0] = *(unsigned __int64 *)v12;
      if ( v15 < v13 )
      {
        v13 = *(float *)(v12 + 20);
        *(float *)(a2 + 52) = v15;
      }
      v24 = *(float *)(v12 + 24);
      v25 = v17 * v18;
      v26.n64_u64[0] = vmul_n_f32(v19, v17).n64_u64[0];
      if ( v24 < v3 )
      {
        v3 = *(float *)(v12 + 24);
        *(float *)(a2 + 56) = v24;
      }
      ++v4;
      v9 = v17 + v9;
      v8 = v25 + v8;
      v5.n64_u64[0] = vadd_f32(v26, v5).n64_u64[0];
      v7 = v20 + v7;
      v10.n64_u64[0] = vadd_f32(v22, v10).n64_u64[0];
      v14.n64_u64[0] = vadd_f32(v21, v14).n64_u64[0];
      v11.n64_u64[0] = vadd_f32(v23, v11).n64_u64[0];
      v6 = v16 + v6;
      v12 += 60;
    }
    while ( v4 < v2 );
    v27 = v14.n64_f32[1];
    *(float *)(a2 + 40) = v6;
    *(float *)(a2 + 44) = v9;
    *(float *)a2 = v8;
    *(float32x2_t *)(a2 + 4) = v5;
    *(float *)(a2 + 12) = v7;
    *(float32x2_t *)(a2 + 16) = v10;
    *(float32x2_t *)(a2 + 24) = v14;
    *(float32x2_t *)(a2 + 32) = v11;
  }
  v28 = 1.0 / v9;
  v29 = 1.0 / (float)(int)v2;
  result = v29 * v6;
  *(float *)a2 = v8 * v28;
  *(float32x2_t *)(a2 + 4) = vmul_n_f32(v5, v28);
  *(float *)(a2 + 12) = v29 * v7;
  *(float32x2_t *)(a2 + 16) = vmul_n_f32(v10, v29);
  *(float *)(a2 + 24) = v29 * v14.n64_f32[0];
  *(float *)(a2 + 28) = v29 * v27;
  *(float32x2_t *)(a2 + 32) = vmul_n_f32(v11, v29);
  *(float *)(a2 + 40) = result;
  return result;
}

