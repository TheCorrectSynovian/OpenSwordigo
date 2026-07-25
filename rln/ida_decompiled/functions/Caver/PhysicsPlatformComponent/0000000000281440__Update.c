/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281440
 * Mangled: _ZN5Caver24PhysicsPlatformComponent6UpdateEf
 * Demangled: Caver::PhysicsPlatformComponent::Update(float)
 *
 * Callers: 1
 *   0x0000000000203070  Caver::PhysicsPlatformComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *
 * Referenced strings: 54
 *   insn=0x000000000028144C string=0x0000000000281450 ""
 *   insn=0x0000000000281450 string=0x0000000000583734 "o"
 *   insn=0x000000000028145C string=0x0000000000281460 "M"
 *   insn=0x0000000000281460 string=0x0000000000281464 "hr@"
 *   insn=0x0000000000281468 string=0x000000000028146C "`"
 *   insn=0x000000000028146C string=0x00000000002814F8 "t"
 *   insn=0x0000000000281470 string=0x0000000000281474 "t"
 *   insn=0x0000000000281470 string=0x00000000002815A4 "b~@"
 *   insn=0x0000000000281474 string=0x0000000000281478 "aF@"
 *   insn=0x0000000000281478 string=0x000000000028147C "dBG"
 *   insn=0x0000000000281484 string=0x0000000000281488 ""
 *   insn=0x0000000000281488 string=0x000000000028148C "!"
 *   insn=0x000000000028148C string=0x0000000000281490 "!"
 *   insn=0x0000000000281490 string=0x0000000000281494 "!"
 *   insn=0x0000000000281494 string=0x0000000000281498 "!"
 *   insn=0x000000000028149C string=0x00000000002814A0 "A"
 *   insn=0x00000000002814A0 string=0x00000000002814A4 """
 *   insn=0x00000000002814A4 string=0x00000000002814A8 "B"
 *   insn=0x00000000002814A8 string=0x00000000002814AC "#"
 *   insn=0x00000000002814AC string=0x00000000002814B0 "a"
 *   insn=0x00000000002814B8 string=0x00000000002814BC "$8%"
 *   insn=0x00000000002814CC string=0x00000000002814D0 "#"
 *   insn=0x00000000002814D4 string=0x00000000002814D8 "c8$"
 *   insn=0x00000000002814D8 string=0x00000000002814DC "c"
 *   insn=0x00000000002814DC string=0x00000000002814E0 "` ""
 *   insn=0x00000000002814E0 string=0x00000000002814E4 "\t"
 *   insn=0x00000000002814F0 string=0x00000000002814F4 "&"
 *   insn=0x00000000002814F8 string=0x00000000002814FC "a"
 *   insn=0x00000000002814FC string=0x0000000000281500 "c"
 *   insn=0x0000000000281500 string=0x0000000000281504 "b"
 *   insn=0x0000000000281508 string=0x000000000028150C "("
 *   insn=0x0000000000281510 string=0x0000000000281514 "!8'"
 *   insn=0x0000000000281514 string=0x0000000000281518 "!#"
 *   insn=0x0000000000281518 string=0x000000000028151C "#"
 *   insn=0x000000000028151C string=0x0000000000281520 "!(""
 *   insn=0x0000000000281520 string=0x0000000000281524 "! "
 *   insn=0x000000000028152C string=0x0000000000281530 "B "
 *   insn=0x0000000000281530 string=0x0000000000281534 "` %"
 *   insn=0x0000000000281534 string=0x0000000000281538 "!8""
 *   insn=0x000000000028153C string=0x0000000000281540 "b"
 *   insn=0x000000000028153C string=0x000000000028155C ""
 *   insn=0x0000000000281540 string=0x0000000000281544 "#"
 *   insn=0x0000000000281544 string=0x0000000000281548 "` ""
 *   insn=0x000000000028154C string=0x0000000000281550 "C@!"
 *   insn=0x0000000000281550 string=0x0000000000281554 "(  "
 *   insn=0x0000000000281554 string=0x0000000000281558 "aL""
 *   insn=0x000000000028155C string=0x0000000000281560 "" "
 *   insn=0x0000000000281568 string=0x000000000028156C "D8'"
 *   insn=0x0000000000281578 string=0x000000000028157C "M"
 *   insn=0x0000000000281594 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002815A4 string=0x00000000002815A8 ""
 *   insn=0x00000000002815AC string=0x00000000002815B0 "@( "
 *   insn=0x00000000002815B0 string=0x00000000002815B4 "`~"
 *   insn=0x00000000002815B8 string=0x00000000002815BC "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsPlatformComponent::Update(__int64 this, float a2)
{
  __int64 v2; // x19
  int v3; // w8
  float32x2_t *v4; // x20
  float32x2_t v10; // d5
  float32x2_t v11; // d1
  float32x2_t v13; // d1
  float32x2_t v14; // d3
  unsigned __int64 v15; // d1
  int v16; // w8
  float v17; // s7
  float v18; // s1
  float v19; // s3
  float v20; // s1
  float v21; // s1
  float v22; // s2
  float v23; // s2
  int v24; // w8
  float v25; // s0
  float v26; // [xsp+0h] [xbp-20h]

  v2 = this;
  if ( a2 > 0.001 )
  {
    v3 = *(_DWORD *)(this + 112);
    if ( v3 == 1 )
    {
      v4 = *(float32x2_t **)(this + 40);
      v17 = v4[16].n64_f32[0];
      v18 = (float)(*(float *)(this + 144) - v17) * *(float *)(this + 152);
      v19 = fabsf(v18);
      v20 = v4[16].n64_f32[1] + (float)((float)(v18 + *(float *)(this + 128)) * a2);
      v21 = v20 - (float)((float)(*(float *)(this + 156) * v20) * a2);
      if ( v19 < 0.05 )
      {
        v22 = *(float *)(this + 160);
        if ( fabsf(v21) < v22 )
        {
          if ( v21 >= 0.0 )
            v21 = *(float *)(this + 160);
          else
            v21 = -v22;
        }
      }
      v23 = v17 + (float)(v21 * a2);
      v4[16].n64_f32[1] = v21;
      if ( fabsf(v23 - v17) <= 0.0001 )
        goto LABEL_16;
      v24 = v4[22].n64_u8[4];
      v4[16].n64_f32[0] = v23;
      if ( v24 )
        goto LABEL_16;
    }
    else
    {
      if ( v3 )
        goto LABEL_16;
      v4 = *(float32x2_t **)(this + 40);
      __asm { FMOV            V3.2S, #20.0 }
      v10.n64_u64[0] = v4[14].n64_u64[0];
      v11.n64_u64[0] = vmul_n_f32(
                         vadd_f32(
                           vmul_f32(vsub_f32(*(float32x2_t *)(this + 136), v10), _D3),
                           *(float32x2_t *)(this + 116)),
                         a2).n64_u64[0];
      __asm { FMOV            V3.2S, #10.0 }
      v13.n64_u64[0] = vadd_f32(v4[13], v11).n64_u64[0];
      v14.n64_u64[0] = vsub_f32(v13, vmul_n_f32(vmul_f32(v13, _D3), a2)).n64_u64[0];
      v15 = vadd_f32(v10, vmul_n_f32(v14, a2)).n64_u64[0];
      v4[13].n64_u64[0] = v14.n64_u64[0];
      if ( fabsf(*(float *)&v15 - v10.n64_f32[0]) <= 0.0001 && fabsf(*((float *)&v15 + 1) - v10.n64_f32[1]) <= 0.0001 )
        goto LABEL_16;
      v16 = v4[22].n64_u8[4];
      v4[14].n64_u64[0] = v15;
      if ( v16 )
        goto LABEL_16;
    }
    v26 = a2;
    this = Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v4);
    a2 = v26;
    v4[22].n64_u8[4] = 1;
LABEL_16:
    v25 = *(float *)(v2 + 124) + a2;
    *(float *)(v2 + 124) = v25;
    if ( v25 > 0.1 )
    {
      *(_DWORD *)(v2 + 116) = 0;
      *(_DWORD *)(v2 + 120) = 0;
      *(_DWORD *)(v2 + 128) = 0;
    }
  }
  return this;
}

