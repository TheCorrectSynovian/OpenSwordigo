/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000456B74
 * Mangled: _ZNK5Caver6Camera28ScreenPointFromWorldPositionERKNS_7Vector3ERKNS_9RectangleEPf
 * Demangled: Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *
 * Callers: 1
 *   0x00000000001FD140  Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 11
 *   insn=0x0000000000456B84 string=0x0000000000456B88 "V"
 *   insn=0x0000000000456BA0 string=0x0000000000456BA4 "("
 *   insn=0x0000000000456BB0 string=0x0000000000456BB4 "(@"
 *   insn=0x0000000000456BCC string=0x00000000001F71D0 "0'"
 *   insn=0x0000000000456BE0 string=0x0000000000456BE4 " "
 *   insn=0x0000000000456BE4 string=0x0000000000456BE8 "A"
 *   insn=0x0000000000456BF4 string=0x0000000000456BF8 "U"
 *   insn=0x0000000000456C1C string=0x0000000000456C20 "@"
 *   insn=0x0000000000456C20 string=0x0000000000456C24 " "
 *   insn=0x0000000000456C24 string=0x0000000000456C28 "`"
 *   insn=0x0000000000456C50 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::Camera::ScreenPointFromWorldPosition@<D0>(
        Caver::Camera *this@<X0>,
        const Caver::Vector3 *a2@<X1>,
        float32x2_t *a3@<X2>,
        float *a4@<X3>,
        float32x2_t *a5@<X8>)
{
  float v8; // s0
  unsigned __int64 v9; // d1
  float v10; // s0
  float32x2_t result; // d0
  float32x2_t v12; // [xsp+0h] [xbp-60h] BYREF
  float32x2_t v13; // [xsp+8h] [xbp-58h] BYREF
  float v14; // [xsp+10h] [xbp-50h]
  unsigned __int64 v15; // [xsp+18h] [xbp-48h] BYREF
  float v16; // [xsp+20h] [xbp-40h]
  int v17; // [xsp+24h] [xbp-3Ch]
  float v18[4]; // [xsp+28h] [xbp-38h] BYREF
  __int64 v19; // [xsp+38h] [xbp-28h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v15 = *(_QWORD *)a2;
  v16 = *((float *)a2 + 2);
  v17 = 1065353216;
  C_Matrix4Vector4Mul((const float *)this + 43, (const float *)&v15, v18);
  Caver::Vector3::Vector3((Caver::Vector3 *)&v13, (const Caver::Vector4 *)v18);
  v8 = 1.0 / fabsf(v18[3]);
  v9 = vmul_n_f32(v13, v8).n64_u64[0];
  v10 = v8 * v14;
  v15 = v9;
  v16 = v10;
  if ( a4 )
    *a4 = v10;
  Caver::Vector2::Vector2((Caver::Vector2 *)&v12, (const Caver::Vector3 *)&v15);
  result.n64_u64[0] = vadd_f32(
                        (float32x2_t)a3->n64_u64[0],
                        vmul_f32(
                          a3[1],
                          vadd_f32(vmul_f32(v12, (float32x2_t)0x3F0000003F000000LL), (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
  a5->n64_u64[0] = result.n64_u64[0];
  return result;
}

