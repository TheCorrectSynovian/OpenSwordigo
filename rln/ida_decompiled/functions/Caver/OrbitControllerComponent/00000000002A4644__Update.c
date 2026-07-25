/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4644
 * Mangled: _ZN5Caver24OrbitControllerComponent6UpdateEf
 * Demangled: Caver::OrbitControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002037C0  Caver::OrbitControllerComponent::Update(float)
 *
 * Callees: 10
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001FC200  Caver::Matrix4::RotationAxis(float,float,float,float)
 *   0x00000000001FD530  .sqrtf
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 96
 *   insn=0x00000000002A4664 string=0x00000000002A4668 "U"
 *   insn=0x00000000002A4664 string=0x0000000000583734 "o"
 *   insn=0x00000000002A4668 string=0x00000000002A466C "\n5G"
 *   insn=0x00000000002A4684 string=0x00000000002A4688 "t:@"
 *   insn=0x00000000002A4688 string=0x00000000002A468C "`"
 *   insn=0x00000000002A4694 string=0x00000000002A4698 "h"
 *   insn=0x00000000002A4698 string=0x00000000002A469C "aB"
 *   insn=0x00000000002A46A4 string=0x00000000002A46A8 "5@"
 *   insn=0x00000000002A46A8 string=0x00000000002A46AC "Iz"
 *   insn=0x00000000002A46B4 string=0x00000000002A46B8 ""
 *   insn=0x00000000002A46BC string=0x00000000002A46C0 "\t"
 *   insn=0x00000000002A46C0 string=0x00000000002A46C4 "("
 *   insn=0x00000000002A46CC string=0x00000000002A46D0 " "
 *   insn=0x00000000002A46D4 string=0x00000000002A46D8 ""
 *   insn=0x00000000002A46D4 string=0x00000000001FD530 "0'"
 *   insn=0x00000000002A46DC string=0x00000000002A46E0 " !,"
 *   insn=0x00000000002A46F0 string=0x00000000001F8E10 "0'"
 *   insn=0x00000000002A4700 string=0x00000000002A4704 "!$"
 *   insn=0x00000000002A4708 string=0x00000000002A470C ""
 *   insn=0x00000000002A4718 string=0x00000000002A4794 "h"
 *   insn=0x00000000002A4724 string=0x00000000002A4728 "`"
 *   insn=0x00000000002A4728 string=0x00000000002A472C "`"
 *   insn=0x00000000002A4730 string=0x00000000002A4734 """
 *   insn=0x00000000002A4734 string=0x00000000002A4738 "B"
 *   insn=0x00000000002A4738 string=0x00000000002A473C " !""
 *   insn=0x00000000002A4740 string=0x00000000002A4744 "h:@"
 *   insn=0x00000000002A4740 string=0x00000000002A4758 "bJ@"
 *   insn=0x00000000002A4744 string=0x00000000002A4748 "\t9@"
 *   insn=0x00000000002A4748 string=0x00000000002A474C "y@"
 *   insn=0x00000000002A474C string=0x00000000002A4750 "iJ"
 *   insn=0x00000000002A4754 string=0x00000000002A476C "h"
 *   insn=0x00000000002A4758 string=0x00000000002A475C "h:@"
 *   insn=0x00000000002A475C string=0x00000000002A4760 "!"
 *   insn=0x00000000002A4760 string=0x00000000002A4764 "aJ"
 *   insn=0x00000000002A4764 string=0x00000000002A4768 "y@"
 *   insn=0x00000000002A477C string=0x00000000002A4780 "!(,"
 *   insn=0x00000000002A4780 string=0x00000000002A4784 "!H""
 *   insn=0x00000000002A4788 string=0x00000000002A478C "B!"
 *   insn=0x00000000002A479C string=0x00000000002A47A0 "`2O-i"
 *   insn=0x00000000002A47A0 string=0x00000000002A47A4 "i"
 *   insn=0x00000000002A47A4 string=0x00000000002A47A8 "c"
 *   insn=0x00000000002A47A8 string=0x00000000002A47AC "k"
 *   insn=0x00000000002A47B0 string=0x00000000002A47B4 "B$"
 *   insn=0x00000000002A47B4 string=0x00000000002A47B8 "$\t!"
 *   insn=0x00000000002A47BC string=0x00000000002A47C0 "a\t!"
 *   insn=0x00000000002A47C0 string=0x00000000002A47C4 "f(""
 *   insn=0x00000000002A47C4 string=0x00000000002A47C8 "c9$"
 *   insn=0x00000000002A47D0 string=0x00000000002A47D4 "d#"
 *   insn=0x00000000002A47D4 string=0x00000000002A47D8 "E""
 *   insn=0x00000000002A47DC string=0x00000000002A47E0 "%!"
 *   insn=0x00000000002A47E8 string=0x00000000002A47EC "`z"
 *   insn=0x00000000002A47EC string=0x00000000002A47F0 "f"
 *   insn=0x00000000002A47F0 string=0x00000000002A47F4 "M"
 *   insn=0x00000000002A480C string=0x00000000002A4810 "`2O-k&P-"
 *   insn=0x00000000002A4810 string=0x00000000002A4814 "k&P-"
 *   insn=0x00000000002A4818 string=0x00000000002A4828 "a"
 *   insn=0x00000000002A481C string=0x00000000002A4820 ""
 *   insn=0x00000000002A4828 string=0x00000000002A482C "b"
 *   insn=0x00000000002A482C string=0x00000000002A4830 ""
 *   insn=0x00000000002A4830 string=0x00000000002A4834 "\n"
 *   insn=0x00000000002A4834 string=0x00000000002A4838 "  "
 *   insn=0x00000000002A4838 string=0x00000000002A483C "@( "
 *   insn=0x00000000002A4848 string=0x00000000002A484C "\t}"
 *   insn=0x00000000002A4850 string=0x00000000002A4854 ""
 *   insn=0x00000000002A4860 string=0x00000000002A4864 "`"
 *   insn=0x00000000002A4864 string=0x00000000002A4868 "az@"
 *   insn=0x00000000002A4868 string=0x00000000002A486C "b"
 *   insn=0x00000000002A4870 string=0x00000000002A4874 "@( "
 *   insn=0x00000000002A4888 string=0x00000000002A488C "`) "
 *   insn=0x00000000002A4890 string=0x00000000002A4894 "`"
 *   insn=0x00000000002A4894 string=0x00000000002A4898 "az@"
 *   insn=0x00000000002A4898 string=0x00000000002A489C "b"
 *   insn=0x00000000002A48A0 string=0x00000000002A48A4 "@( "
 *   insn=0x00000000002A48B8 string=0x00000000002A48BC " ) "
 *   insn=0x00000000002A48C8 string=0x00000000002A48CC "`"
 *   insn=0x00000000002A48D8 string=0x00000000002A48DC "I^"
 *   insn=0x00000000002A48DC string=0x00000000001FC200 "0'"
 *   insn=0x00000000002A48FC string=0x00000000002A4900 "4J"
 *   insn=0x00000000002A4900 string=0x00000000001F71D0 "0'"
 *   insn=0x00000000002A490C string=0x00000000002A4910 "bJ@"
 *   insn=0x00000000002A4910 string=0x00000000002A4914 "c"
 *   insn=0x00000000002A4914 string=0x00000000002A4918 "t"
 *   insn=0x00000000002A4924 string=0x00000000002A4928 "!(#"
 *   insn=0x00000000002A4950 string=0x00000000002A4954 "!"
 *   insn=0x00000000002A4954 string=0x00000000002A4958 "  ""
 *   insn=0x00000000002A4964 string=0x00000000002A4968 "\t"
 *   insn=0x00000000002A4974 string=0x00000000002A4978 "#8#"
 *   insn=0x00000000002A4978 string=0x00000000002A497C "c"
 *   insn=0x00000000002A497C string=0x00000000002A4980 "` ""
 *   insn=0x00000000002A4980 string=0x00000000002A4984 "I"
 *   insn=0x00000000002A4984 string=0x00000000002A4988 ")"
 *   insn=0x00000000002A498C string=0x00000000002A4990 "\t"
 *   insn=0x00000000002A49A0 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002A49BC string=0x00000000002A49C0 "!"
 *   insn=0x00000000002A49C0 string=0x00000000002A49E4 ";F"
 *   insn=0x00000000002A49E4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OrbitControllerComponent::Update(__int64 this, float a2)
{
  float v2; // s4
  float32x2_t *v3; // x19
  float32x2_t *v4; // x20
  float32x2_t v5; // d11
  float32x2_t v6; // d13
  float v7; // s9
  float v8; // s8
  float32x2_t v9; // d0
  float32x2_t v10; // d1
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x9
  unsigned __int32 v13; // w8
  float v14; // s12
  float v15; // s9
  float v16; // s11
  float v17; // s0
  float v18; // s6
  unsigned __int64 v19; // d8
  float v20; // w20
  float v21; // s0
  float v22; // s0
  float v23; // s0
  Caver::Matrix4 *v24; // x0
  float v25; // s3
  unsigned __int64 v26; // x20
  int v27; // w9
  _DWORD *v28; // x8
  float v30; // [xsp+10h] [xbp-F0h]
  unsigned __int64 v31; // [xsp+20h] [xbp-E0h] BYREF
  float v32; // [xsp+28h] [xbp-D8h]
  int v33; // [xsp+2Ch] [xbp-D4h]
  float32x2_t v34; // [xsp+30h] [xbp-D0h] BYREF
  float v35; // [xsp+38h] [xbp-C8h]
  float32x2_t v36; // [xsp+40h] [xbp-C0h] BYREF
  float v37; // [xsp+48h] [xbp-B8h]
  float v38; // [xsp+50h] [xbp-B0h] BYREF
  float v39; // [xsp+54h] [xbp-ACh]
  float v40; // [xsp+58h] [xbp-A8h]
  float32x2_t v41; // [xsp+60h] [xbp-A0h] BYREF
  __int64 v42[9]; // [xsp+68h] [xbp-98h] BYREF

  v2 = a2;
  v3 = (float32x2_t *)this;
  v42[8] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 > 0.001 )
  {
    v4 = *(float32x2_t **)(this + 112);
    v30 = *(float *)(this + 140);
    if ( v4 )
    {
      v5.n64_u64[0] = *(unsigned __int64 *)(*(_QWORD *)(this + 40) + 104LL);
      Caver::Vector2::Vector2((Caver::Vector2 *)&v34, (const Caver::Vector3 *)(this + 144));
      v6.n64_u64[0] = vsub_f32(v4[14], v34).n64_u64[0];
      v7 = vaddv_f32(vmul_f32(v6, v6));
      v8 = sqrtf(v7);
      if ( v7 <= 1.0 )
      {
        v2 = a2;
      }
      else
      {
        v41.n64_u64[0] = v6.n64_u64[0];
        Caver::Vector2::Normalize((Caver::Vector2 *)&v41);
        v2 = a2;
        v5.n64_u64[0] = vadd_f32(vmul_n_f32(v41, (float)(v8 * 27.0) * a2), v5).n64_u64[0];
      }
      v9.n64_u64[0] = vsub_f32(v5, vmul_n_f32(v5, v2 * 5.0)).n64_u64[0];
      v10.n64_u64[0] = vmul_n_f32(v9, v2).n64_u64[0];
      v11 = v3[14].n64_u64[0];
      if ( v7 >= vaddv_f32(vmul_f32(v10, v10)) )
      {
        v3[18].n64_u64[0] = vadd_f32(v10, v3[18]).n64_u64[0];
        v13 = *(_DWORD *)(v11 + 120);
      }
      else
      {
        v12 = *(_QWORD *)(v11 + 112);
        v13 = *(_DWORD *)(v11 + 120);
        v3[18].n64_u64[0] = v12;
      }
      v3[19].n64_u32[0] = v13;
      v30 = v30 * fmaxf((float)(v8 / -200.0) + 1.0, 0.0);
    }
    else
    {
      v9.n64_u64[0] = 0;
    }
    *(float32x2_t *)(v3[5].n64_u64[0] + 104) = v9;
    v14 = v3[15].n64_f32[1];
    v15 = v3[16].n64_f32[1];
    v16 = v3[16].n64_f32[0];
    v17 = v3[15].n64_f32[0] + v2;
    v18 = v3[19].n64_f32[1] + (float)(v3[17].n64_f32[0] * v2);
    v3[15].n64_f32[0] = v17;
    v3[19].n64_f32[1] = v18;
    if ( (float)((float)((float)((float)(v16 - (float)(v15 * 0.0)) * (float)(v16 - (float)(v15 * 0.0)))
                       + (float)((float)((float)(v15 * 0.0) - v14) * (float)((float)(v15 * 0.0) - v14)))
               + (float)((float)((float)(v14 * 0.0) - (float)(v16 * 0.0))
                       * (float)((float)(v14 * 0.0) - (float)(v16 * 0.0)))) <= 0.001 )
    {
      v19 = 1065353216;
      v20 = 0.0;
    }
    else
    {
      v34.n64_f32[0] = v16 - (float)(v15 * 0.0);
      v34.n64_f32[1] = (float)(v15 * 0.0) - v14;
      v35 = (float)(v14 * 0.0) - (float)(v16 * 0.0);
      Caver::Vector3::Normalize((Caver::Vector3 *)&v34);
      v19 = v34.n64_u64[0];
      v20 = v35;
      v17 = v3[15].n64_f32[0];
      v14 = v3[15].n64_f32[1];
      v16 = v3[16].n64_f32[0];
      v15 = v3[16].n64_f32[1];
    }
    v21 = (float)(v3[20].n64_f32[1] + (float)(v3[22].n64_f32[0] * v17)) * 6.28318531;
    v38 = v14 + (float)(sinf(v21) * 0.4);
    v22 = (float)(v3[21].n64_f32[0] + (float)(v3[22].n64_f32[1] * v3[15].n64_f32[0])) * 6.28318531;
    v39 = v16 + (float)(sinf(v22) * 0.4);
    v23 = (float)(v3[21].n64_f32[1] + (float)(v3[23].n64_f32[0] * v3[15].n64_f32[0])) * 6.28318531;
    v40 = v15 + (float)(sinf(v23) * 0.4);
    v24 = (Caver::Matrix4 *)Caver::Vector3::Normalize((Caver::Vector3 *)&v38);
    Caver::Matrix4::RotationAxis(v42, v24, v3[19].n64_f32[1], v38, v39, v40);
    v31 = v19;
    v32 = v20;
    v33 = 0;
    C_Matrix4Vector4Mul((const float *)v42, (const float *)&v31, (float *)&v34);
    Caver::Vector3::Vector3((Caver::Vector3 *)&v36, (const Caver::Vector4 *)&v34);
    v25 = v3[19].n64_f32[0];
    v26 = v3[5].n64_u64[0];
    v34.n64_u64[0] = vadd_f32(vmul_n_f32(v36, v30), v3[18]).n64_u64[0];
    v35 = (float)(v30 * v37) + v25;
    this = Caver::Vector2::Vector2((Caver::Vector2 *)&v31, (const Caver::Vector3 *)&v34);
    if ( fabsf(*(float *)&v31 - *(float *)(v26 + 112)) <= 0.0001 )
    {
      v28 = (_DWORD *)(v26 + 116);
      if ( fabsf(*((float *)&v31 + 1) - *(float *)(v26 + 116)) <= 0.0001 )
      {
LABEL_20:
        *(float *)(v26 + 120) = v35;
        return this;
      }
      v27 = HIDWORD(v31);
    }
    else
    {
      v27 = HIDWORD(v31);
      v28 = (_DWORD *)(v26 + 116);
    }
    *(_DWORD *)(v26 + 112) = v31;
    *v28 = v27;
    if ( !*(_BYTE *)(v26 + 180) )
    {
      this = Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v26);
      *(_BYTE *)(v26 + 180) = 1;
    }
    goto LABEL_20;
  }
  return this;
}

