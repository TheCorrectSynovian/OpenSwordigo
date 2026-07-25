/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B6760
 * Mangled: _ZNK5Caver27RotatingBackgroundComponent4DrawEPNS_16RenderingContextEPNS_6CameraE
 * Demangled: Caver::RotatingBackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FA0  Caver::Camera::ForwardDirection(void)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FE5C0  .tanf
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 42
 *   insn=0x00000000002B677C string=0x00000000002B6780 "V"
 *   insn=0x00000000002B67A4 string=0x00000000001F6FA0 "P'"
 *   insn=0x00000000002B67A8 string=0x00000000002B67AC "  "
 *   insn=0x00000000002B67C4 string=0x00000000002B67C8 ")!"
 *   insn=0x00000000002B67C8 string=0x00000000002B67CC "\tA!"
 *   insn=0x00000000002B67CC string=0x00000000002B67D0 "!"
 *   insn=0x00000000002B67D0 string=0x00000000002B67D4 "B"
 *   insn=0x00000000002B67F8 string=0x00000000002B67FC """
 *   insn=0x00000000002B67FC string=0x00000000002B6800 "!"
 *   insn=0x00000000002B681C string=0x00000000002B6820 "\t"
 *   insn=0x00000000002B6820 string=0x00000000002B6824 "\n8!"
 *   insn=0x00000000002B6828 string=0x00000000002B682C "K8#"
 *   insn=0x00000000002B682C string=0x00000000002B6830 "d"
 *   insn=0x00000000002B683C string=0x00000000002B6840 " "
 *   insn=0x00000000002B6850 string=0x00000000002B6854 "$)"
 *   insn=0x00000000002B6878 string=0x00000000002B687C "C"
 *   insn=0x00000000002B687C string=0x00000000002B6880 "`"
 *   insn=0x00000000002B6880 string=0x00000000002B6884 "!(%"
 *   insn=0x00000000002B6884 string=0x00000000002B6888 "h"
 *   insn=0x00000000002B6888 string=0x00000000002B688C "   "
 *   insn=0x00000000002B6890 string=0x00000000002B6894 "h"
 *   insn=0x00000000002B6894 string=0x00000000002B6898 " L "
 *   insn=0x00000000002B6898 string=0x00000000002B689C "!@!"
 *   insn=0x00000000002B68A4 string=0x00000000002B68A8 "h"
 *   insn=0x00000000002B68AC string=0x00000000002B68B0 " L "
 *   insn=0x00000000002B68B4 string=0x00000000002B68B8 "@ #"
 *   insn=0x00000000002B68B8 string=0x00000000002B68BC "AL#"
 *   insn=0x00000000002B68BC string=0x00000000002B68C0 "B@!"
 *   insn=0x00000000002B68C0 string=0x00000000002B68C4 "  ""
 *   insn=0x00000000002B68C4 string=0x00000000002B68C8 "AL!"
 *   insn=0x00000000002B68F0 string=0x00000000002B68F4 "g%"
 *   insn=0x00000000002B6934 string=0x00000000002B6938 "V%"
 *   insn=0x00000000002B6944 string=0x00000000001FBCC0 "0'"
 *   insn=0x00000000002B6950 string=0x00000000002B6954 "O%"
 *   insn=0x00000000002B6960 string=0x00000000002B6964 ""
 *   insn=0x00000000002B6970 string=0x00000000002B6974 ""
 *   insn=0x00000000002B6974 string=0x00000000001FB1A0 "0'"
 *   insn=0x00000000002B697C string=0x00000000002B6980 ""
 *   insn=0x00000000002B6980 string=0x00000000001FCDA0 "0'"
 *   insn=0x00000000002B698C string=0x00000000002B6990 "!"
 *   insn=0x00000000002B6990 string=0x00000000002B69B4 "G"
 *   insn=0x00000000002B69B4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::RotatingBackgroundComponent::Draw(
        Caver::RotatingBackgroundComponent *this,
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
  float v15; // s0
  float v16; // s5
  float v17; // s6
  float v18; // s2
  float v19; // s4
  float v20; // s1
  float v21; // s4
  float v22; // s3
  float v23; // s0
  float v24; // s1
  float v25; // s1
  float v26; // s2
  float v27; // s1
  float v28; // s2
  float v29; // s0
  Caver::Matrix4 *v30; // x0
  float v31[2]; // [xsp+38h] [xbp-238h] BYREF
  float32x2_t v32; // [xsp+40h] [xbp-230h] BYREF
  float v33; // [xsp+48h] [xbp-228h]
  __int64 v34[8]; // [xsp+50h] [xbp-220h] BYREF
  float v35[16]; // [xsp+90h] [xbp-1E0h] BYREF
  _OWORD v36[3]; // [xsp+D0h] [xbp-1A0h] BYREF
  int v37; // [xsp+100h] [xbp-170h]
  float v38; // [xsp+104h] [xbp-16Ch]
  __int64 v39; // [xsp+108h] [xbp-168h]
  float v40[16]; // [xsp+110h] [xbp-160h] BYREF
  _BYTE v41[20]; // [xsp+150h] [xbp-120h] BYREF
  float v42; // [xsp+164h] [xbp-10Ch]
  __int128 v43; // [xsp+168h] [xbp-108h]
  __int128 v44; // [xsp+178h] [xbp-F8h]
  __int64 v45; // [xsp+188h] [xbp-E8h]
  _OWORD v46[3]; // [xsp+190h] [xbp-E0h] BYREF
  float v47; // [xsp+1C0h] [xbp-B0h]
  float v48; // [xsp+1C4h] [xbp-ACh]
  __int64 v49; // [xsp+1C8h] [xbp-A8h]
  unsigned __int64 v50; // [xsp+1D8h] [xbp-98h] BYREF
  float v51; // [xsp+1E0h] [xbp-90h]

  _ReadStatusReg(TPIDR_EL0);
  v5 = *((float *)a3 + 6);
  result = Caver::Camera::ForwardDirection((__int64 *)&v32, a3);
  if ( v33 <= 0.0 )
  {
    v8 = v5 + 4000.0;
    v9 = (float)-v8 / v33;
    v50 = vmul_n_f32(v32, v9).n64_u64[0];
    v51 = v33 * v9;
    Caver::Vector2::Vector2((Caver::Vector2 *)v31, (const Caver::Vector3 *)&v50);
    v10 = *((float *)this + 30);
    *(float32x2_t *)v41 = vmul_n_f32(*(float32x2_t *)((char *)this + 112), (float)-v8 / v10);
    *(float *)&v41[8] = v10 * (float)((float)-v8 / v10);
    Caver::Vector2::Vector2((Caver::Vector2 *)v36, (const Caver::Vector3 *)v41);
    v11 = v31[0] - *(float *)v36;
    v12 = v31[1] - *((float *)v36 + 1);
    v13 = tanf(*((float *)a3 + 61) * 0.5);
    v14 = *((_QWORD *)this + 16);
    v15 = 0.5 / (float)(v8 * v13);
    v16 = *(float *)(v14 + 16);
    v17 = *(float *)(v14 + 20);
    v18 = *((float *)a3 + 60);
    v19 = (float)(v15 * 20.0) * 0.5;
    *(float *)v41 = v15 * 20.0;
    v42 = v15 * 20.0;
    v45 = 0x3F80000000000000LL;
    *(_OWORD *)&v41[4] = 0u;
    v43 = 0u;
    v20 = v17 * v19;
    v21 = v16 * v19;
    v22 = -(float)(v11 * v15);
    v23 = -(float)(v12 * v15);
    v24 = v20 + -1.0;
    if ( v24 < v23 )
      v23 = v24;
    v25 = -v24;
    v26 = v21 - v18;
    if ( v23 < v25 )
      v23 = v25;
    if ( v26 >= v22 )
      v27 = v22;
    else
      v27 = v26;
    v28 = -v26;
    if ( v27 < v28 )
      v27 = v28;
    v47 = v27;
    v48 = v23;
    v49 = 0x3F80000000000000LL;
    v46[0] = xmmword_583490;
    v46[1] = xmmword_5837E0;
    v46[2] = xmmword_5837F0;
    v44 = xmmword_583490;
    C_Matrix4Mul((const float *)v46, (const float *)v41, v40);
    v29 = *(float *)(*((_QWORD *)this + 16) + 20LL);
    v37 = 0;
    v39 = 0x3F80000000000000LL;
    v38 = v29 * -0.25;
    v36[0] = xmmword_583490;
    v36[1] = xmmword_5837E0;
    v36[2] = xmmword_5837F0;
    v30 = (Caver::Matrix4 *)C_Matrix4Mul(v40, (const float *)v36, v35);
    Caver::Matrix4::RotationZ(v34, v30, *((float *)this + 36));
    C_Matrix4Mul(v35, (const float *)v34, (float *)&v50);
    Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)&v50);
    LODWORD(v50) = -1;
    Caver::RenderingContext::SetColor(a2, (const Caver::Color *)&v50);
    return (__int64 *)Caver::Sprite::Draw(*((Caver::Sprite **)this + 16), a2);
  }
  return result;
}

