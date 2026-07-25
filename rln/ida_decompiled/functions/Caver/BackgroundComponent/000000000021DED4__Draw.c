/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021DED4
 * Mangled: _ZNK5Caver19BackgroundComponent4DrawEPNS_16RenderingContextEPNS_6CameraE
 * Demangled: Caver::BackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FA0  Caver::Camera::ForwardDirection(void)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FE5C0  .tanf
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 45
 *   insn=0x000000000021DEF0 string=0x000000000021DEF4 "V"
 *   insn=0x000000000021DF14 string=0x000000000021DF18 ""d"
 *   insn=0x000000000021DF18 string=0x00000000001F6FA0 "P'"
 *   insn=0x000000000021DF1C string=0x000000000021DF20 "  "
 *   insn=0x000000000021DF24 string=0x000000000021DF28 "("
 *   insn=0x000000000021DF38 string=0x000000000021DF3C ")!"
 *   insn=0x000000000021DF3C string=0x000000000021DF40 "\tA!"
 *   insn=0x000000000021DF40 string=0x000000000021DF44 "!"
 *   insn=0x000000000021DF44 string=0x000000000021DF48 "B"
 *   insn=0x000000000021DF68 string=0x000000000021DF6C """
 *   insn=0x000000000021DF6C string=0x000000000021DF70 "!"
 *   insn=0x000000000021DF70 string=0x000000000021DF74 "@ "
 *   insn=0x000000000021DF8C string=0x000000000021DF90 "\t"
 *   insn=0x000000000021DF90 string=0x000000000021DF94 "\n8!"
 *   insn=0x000000000021DF98 string=0x000000000021DF9C "K8#"
 *   insn=0x000000000021DFA4 string=0x000000000021DFA8 ")"
 *   insn=0x000000000021DFA8 string=0x000000000021DFAC """
 *   insn=0x000000000021DFB8 string=0x000000000021DFBC " "
 *   insn=0x000000000021DFC0 string=0x000000000021DFC4 "B"
 *   insn=0x000000000021DFC4 string=0x000000000021DFC8 "!""
 *   insn=0x000000000021DFCC string=0x000000000021DFD0 "&)"
 *   insn=0x000000000021DFEC string=0x000000000021DFF0 "D"
 *   insn=0x000000000021DFF0 string=0x000000000021DFF4 "`"
 *   insn=0x000000000021DFF8 string=0x000000000021DFFC "   "
 *   insn=0x000000000021DFFC string=0x000000000021E000 ")"
 *   insn=0x000000000021E000 string=0x000000000021E004 "c&"
 *   insn=0x000000000021E004 string=0x000000000021E008 " L "
 *   insn=0x000000000021E008 string=0x000000000021E00C "!@!"
 *   insn=0x000000000021E00C string=0x000000000021E010 "*"
 *   insn=0x000000000021E010 string=0x000000000021E014 "&%"
 *   insn=0x000000000021E014 string=0x000000000021E018 ")"
 *   insn=0x000000000021E018 string=0x000000000021E01C "b8""
 *   insn=0x000000000021E024 string=0x000000000021E028 "E"
 *   insn=0x000000000021E028 string=0x000000000021E02C "#"
 *   insn=0x000000000021E02C string=0x000000000021E030 " L "
 *   insn=0x000000000021E030 string=0x000000000021E034 "@ $"
 *   insn=0x000000000021E03C string=0x000000000021E040 "A@!"
 *   insn=0x000000000021E040 string=0x000000000021E044 "BL$"
 *   insn=0x000000000021E048 string=0x000000000021E04C "@ !"
 *   insn=0x000000000021E04C string=0x000000000021E050 ""
 *   insn=0x000000000021E050 string=0x000000000021E054 "!L""
 *   insn=0x000000000021E08C string=0x000000000021E090 "D{"
 *   insn=0x000000000021E090 string=0x00000000001FCDA0 "0'"
 *   insn=0x000000000021E09C string=0x000000000021E0A0 "!"
 *   insn=0x000000000021E0C4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::BackgroundComponent::Draw(
        Caver::BackgroundComponent *this,
        Caver::RenderingContext *a2,
        Caver::Camera *a3)
{
  float v5; // s8
  __int64 *result; // x0
  float v8; // s8
  float v9; // s1
  float v10; // s0
  float v11; // s10
  float v12; // s11
  float v13; // s0
  __int64 v14; // x8
  float v15; // s3
  float v16; // s5
  float v17; // s0
  float v18; // s2
  float v19; // s6
  float v20; // s4
  float v21; // s0
  float v22; // s1
  float v23; // s3
  float v24; // s1
  float v25; // s2
  float v26; // s1
  float v27[2]; // [xsp+0h] [xbp-140h] BYREF
  float v28[2]; // [xsp+8h] [xbp-138h] BYREF
  float32x2_t v29; // [xsp+10h] [xbp-130h] BYREF
  float v30; // [xsp+18h] [xbp-128h]
  _BYTE v31[20]; // [xsp+20h] [xbp-120h] BYREF
  float v32; // [xsp+34h] [xbp-10Ch]
  __int128 v33; // [xsp+38h] [xbp-108h]
  __int128 v34; // [xsp+48h] [xbp-F8h]
  __int64 v35; // [xsp+58h] [xbp-E8h]
  _OWORD v36[3]; // [xsp+60h] [xbp-E0h] BYREF
  float v37; // [xsp+90h] [xbp-B0h]
  float v38; // [xsp+94h] [xbp-ACh]
  __int64 v39; // [xsp+98h] [xbp-A8h]
  unsigned __int64 v40; // [xsp+A8h] [xbp-98h] BYREF
  float v41; // [xsp+B0h] [xbp-90h]
  __int64 v42; // [xsp+E8h] [xbp-58h]

  v42 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *((float *)a3 + 6);
  result = Caver::Camera::ForwardDirection((__int64 *)&v29, a3);
  if ( v30 <= 0.0 )
  {
    v8 = v5 + 11000.0;
    v9 = (float)-v8 / v30;
    v40 = vmul_n_f32(v29, v9).n64_u64[0];
    v41 = v30 * v9;
    Caver::Vector2::Vector2((Caver::Vector2 *)v28, (const Caver::Vector3 *)&v40);
    v10 = *((float *)this + 30);
    *(float32x2_t *)v31 = vmul_n_f32(*(float32x2_t *)((char *)this + 112), (float)-v8 / v10);
    *(float *)&v31[8] = (float)((float)-v8 / v10) * v10;
    Caver::Vector2::Vector2((Caver::Vector2 *)v27, (const Caver::Vector3 *)v31);
    v11 = v28[0] - v27[0];
    v12 = v28[1] - v27[1];
    v13 = tanf(*((float *)a3 + 61) * 0.5);
    v14 = *((_QWORD *)this + 16);
    v15 = *(float *)(v14 + 16);
    v16 = *(float *)(v14 + 20);
    v17 = 0.5 / (float)(v8 * v13);
    v18 = *((float *)a3 + 60);
    v19 = (float)((float)(v17 * 20.0) * (float)(1024.0 / v15)) * 0.5;
    *(float *)v31 = (float)(v17 * 20.0) * (float)(1024.0 / v15);
    v32 = *(float *)v31;
    *(_OWORD *)&v31[4] = 0u;
    v33 = 0u;
    v20 = -(float)(v11 * v17);
    v21 = -(float)(v12 * v17);
    v22 = (float)(v16 * v19) + -1.0;
    v23 = v15 * v19;
    if ( v22 < v21 )
      v21 = (float)(v16 * v19) + -1.0;
    v24 = -v22;
    v25 = v23 - v18;
    if ( v21 < v24 )
      v21 = v24;
    v35 = 0x3F80000000000000LL;
    v26 = -v25;
    if ( v25 >= v20 )
      v25 = v20;
    if ( v25 >= v26 )
      v26 = v25;
    v37 = v26;
    v38 = v21;
    v39 = 0x3F8000003F7D70A4LL;
    v36[0] = xmmword_583490;
    v36[1] = xmmword_5837E0;
    v36[2] = xmmword_5837F0;
    v34 = xmmword_583490;
    C_Matrix4Mul((const float *)v36, (const float *)v31, (float *)&v40);
    Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)&v40);
    return (__int64 *)Caver::Sprite::Draw(*((Caver::Sprite **)this + 16), a2);
  }
  return result;
}

