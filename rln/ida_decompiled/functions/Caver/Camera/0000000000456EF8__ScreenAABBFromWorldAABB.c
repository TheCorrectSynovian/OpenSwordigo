/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000456EF8
 * Mangled: _ZNK5Caver6Camera23ScreenAABBFromWorldAABBERKNS_9RectangleEfS3_
 * Demangled: Caver::Camera::ScreenAABBFromWorldAABB(Caver::Rectangle const&,float,Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001F9E30  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 36
 *   insn=0x0000000000456F18 string=0x0000000000456F1C "X"
 *   insn=0x0000000000456F20 string=0x0000000000456F24 ""
 *   insn=0x0000000000456F38 string=0x0000000000456F3C ""
 *   insn=0x0000000000456F6C string=0x00000000001F71D0 "0'"
 *   insn=0x0000000000456F78 string=0x0000000000456F7C "\t"
 *   insn=0x0000000000456F80 string=0x0000000000456F84 " "
 *   insn=0x0000000000456F84 string=0x0000000000456F88 "!"
 *   insn=0x0000000000456FB8 string=0x0000000000456FBC "@"
 *   insn=0x0000000000456FBC string=0x0000000000456FC0 " "
 *   insn=0x0000000000456FF8 string=0x0000000000456FFC "u"
 *   insn=0x0000000000457010 string=0x0000000000457014 " "
 *   insn=0x0000000000457014 string=0x0000000000457018 "!"
 *   insn=0x0000000000457044 string=0x0000000000457048 " "
 *   insn=0x0000000000457048 string=0x000000000045704C "@"
 *   insn=0x0000000000457060 string=0x0000000000457064 "7#"
 *   insn=0x0000000000457080 string=0x0000000000457084 "S"
 *   insn=0x0000000000457098 string=0x000000000045709C " "
 *   insn=0x000000000045709C string=0x00000000004570A0 "!"
 *   insn=0x00000000004570CC string=0x00000000004570D0 " "
 *   insn=0x00000000004570D0 string=0x00000000004570D4 "@"
 *   insn=0x00000000004570E0 string=0x00000000004570E4 "5C"
 *   insn=0x0000000000457100 string=0x0000000000457104 "3"
 *   insn=0x0000000000457118 string=0x000000000045711C " "
 *   insn=0x000000000045711C string=0x0000000000457120 "!"
 *   insn=0x000000000045714C string=0x0000000000457150 " "
 *   insn=0x0000000000457150 string=0x0000000000457154 "@"
 *   insn=0x000000000045715C string=0x0000000000457160 "4c"
 *   insn=0x0000000000457160 string=0x0000000000457164 "h~"
 *   insn=0x0000000000457164 string=0x0000000000457168 "2"
 *   insn=0x0000000000457168 string=0x00000000001F9E30 "0'"
 *   insn=0x0000000000457170 string=0x0000000000457174 "/"
 *   insn=0x000000000045717C string=0x0000000000457180 ","
 *   insn=0x0000000000457180 string=0x0000000000457184 ""
 *   insn=0x000000000045718C string=0x0000000000457190 "A"
 *   insn=0x0000000000457190 string=0x00000000004571B8 "F|"
 *   insn=0x00000000004571B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Camera::ScreenAABBFromWorldAABB@<X0>(
        Caver::Camera *this@<X0>,
        const Caver::Rectangle *a2@<X1>,
        float a3@<S0>,
        float32x2_t *a4@<X2>,
        unsigned __int64 *a5@<X8>)
{
  const float *v7; // x22
  float v10; // s0
  unsigned __int32 v11; // w8
  float v12; // s0
  float v13; // s0
  float v14; // s0
  float32x2_t v15; // d0
  float32x2_t v16; // d1
  float v17; // s0
  float32x2_t v19; // [xsp+0h] [xbp-C0h] BYREF
  float32x2_t v20; // [xsp+8h] [xbp-B8h] BYREF
  float v21; // [xsp+10h] [xbp-B0h]
  float32x2_t v22; // [xsp+18h] [xbp-A8h] BYREF
  float v23; // [xsp+20h] [xbp-A0h]
  int v24; // [xsp+24h] [xbp-9Ch]
  unsigned __int64 v25; // [xsp+28h] [xbp-98h] BYREF
  float v26; // [xsp+30h] [xbp-90h]
  float v27; // [xsp+34h] [xbp-8Ch]
  unsigned __int64 v28; // [xsp+38h] [xbp-88h] BYREF
  unsigned __int64 v29; // [xsp+40h] [xbp-80h] BYREF
  unsigned __int64 v30; // [xsp+48h] [xbp-78h] BYREF
  _QWORD v31[2]; // [xsp+50h] [xbp-70h] BYREF

  v7 = (const float *)((char *)this + 172);
  v31[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v25 = *(_QWORD *)a2;
  v26 = a3;
  v27 = 1.0;
  C_Matrix4Vector4Mul((const float *)this + 43, (const float *)&v25, (float *)&v28);
  Caver::Vector3::Vector3((Caver::Vector3 *)&v22, (const Caver::Vector4 *)&v28);
  v10 = 1.0 / fabsf(*((float *)&v29 + 1));
  v25 = vmul_n_f32(v22, v10).n64_u64[0];
  v26 = v10 * v23;
  Caver::Vector2::Vector2((Caver::Vector2 *)&v20, (const Caver::Vector3 *)&v25);
  v28 = vadd_f32(
          (float32x2_t)a4->n64_u64[0],
          vmul_f32(a4[1], vadd_f32(vmul_f32(v20, (float32x2_t)0x3F0000003F000000LL), (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
  v11 = *((_DWORD *)a2 + 1);
  v22.n64_f32[0] = *(float *)a2 + *((float *)a2 + 2);
  v22.n64_u32[1] = v11;
  v23 = a3;
  v24 = 1065353216;
  C_Matrix4Vector4Mul(v7, (const float *)&v22, (float *)&v25);
  Caver::Vector3::Vector3((Caver::Vector3 *)&v20, (const Caver::Vector4 *)&v25);
  v12 = 1.0 / fabsf(v27);
  v22.n64_u64[0] = vmul_n_f32(v20, v12).n64_u64[0];
  v23 = v12 * v21;
  Caver::Vector2::Vector2((Caver::Vector2 *)&v19, (const Caver::Vector3 *)&v22);
  v29 = vadd_f32(
          (float32x2_t)a4->n64_u64[0],
          vmul_f32(a4[1], vadd_f32(vmul_f32(v19, (float32x2_t)0x3F0000003F000000LL), (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
  v13 = *((float *)a2 + 1) + *((float *)a2 + 3);
  v22.n64_u32[0] = *(_DWORD *)a2;
  v22.n64_f32[1] = v13;
  v23 = a3;
  v24 = 1065353216;
  C_Matrix4Vector4Mul(v7, (const float *)&v22, (float *)&v25);
  Caver::Vector3::Vector3((Caver::Vector3 *)&v20, (const Caver::Vector4 *)&v25);
  v14 = 1.0 / fabsf(v27);
  v22.n64_u64[0] = vmul_n_f32(v20, v14).n64_u64[0];
  v23 = v14 * v21;
  Caver::Vector2::Vector2((Caver::Vector2 *)&v19, (const Caver::Vector3 *)&v22);
  v30 = vadd_f32(
          (float32x2_t)a4->n64_u64[0],
          vmul_f32(a4[1], vadd_f32(vmul_f32(v19, (float32x2_t)0x3F0000003F000000LL), (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
  v15.n64_u64[0] = *(unsigned __int64 *)a2;
  v16.n64_u64[0] = *(_QWORD *)((unsigned __int64)a2 + 8);
  v23 = a3;
  v22.n64_u64[0] = vadd_f32(v15, v16).n64_u64[0];
  v24 = 1065353216;
  C_Matrix4Vector4Mul(v7, (const float *)&v22, (float *)&v25);
  Caver::Vector3::Vector3((Caver::Vector3 *)&v20, (const Caver::Vector4 *)&v25);
  v17 = 1.0 / fabsf(v27);
  v22.n64_u64[0] = vmul_n_f32(v20, v17).n64_u64[0];
  v23 = v17 * v21;
  Caver::Vector2::Vector2((Caver::Vector2 *)&v19, (const Caver::Vector3 *)&v22);
  v31[0] = vadd_f32(
             (float32x2_t)a4->n64_u64[0],
             vmul_f32(
               a4[1],
               vadd_f32(vmul_f32(v19, (float32x2_t)0x3F0000003F000000LL), (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
  *a5 = v28;
  a5[1] = 0;
  Caver::Rectangle::ExpandToIncludePoint((Caver::Rectangle *)a5, (const Caver::Vector2 *)&v29);
  Caver::Rectangle::ExpandToIncludePoint((Caver::Rectangle *)a5, (const Caver::Vector2 *)&v30);
  return Caver::Rectangle::ExpandToIncludePoint((Caver::Rectangle *)a5, (const Caver::Vector2 *)v31);
}

