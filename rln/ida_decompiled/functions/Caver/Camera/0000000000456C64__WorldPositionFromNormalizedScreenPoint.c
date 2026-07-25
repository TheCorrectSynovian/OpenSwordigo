/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000456C64
 * Mangled: _ZNK5Caver6Camera38WorldPositionFromNormalizedScreenPointENS_7Vector2Ef
 * Demangled: Caver::Camera::WorldPositionFromNormalizedScreenPoint(Caver::Vector2,float)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 10
 *   insn=0x0000000000456C70 string=0x0000000000456C74 "T"
 *   insn=0x0000000000456C8C string=0x0000000000456C90 "("
 *   insn=0x0000000000456CAC string=0x0000000000456CB0 "H"
 *   insn=0x0000000000456CB0 string=0x00000000001F71D0 "0'"
 *   insn=0x0000000000456CC0 string=0x0000000000456CC4 "`"
 *   insn=0x0000000000456CC4 string=0x0000000000456CC8 "!"
 *   insn=0x0000000000456CCC string=0x0000000000456CD0 "a"
 *   insn=0x0000000000456CD0 string=0x0000000000456CD4 "`\n"
 *   insn=0x0000000000456CE4 string=0x0000000000456CF8 "v}"
 *   insn=0x0000000000456CF8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Camera::WorldPositionFromNormalizedScreenPoint@<S0>(
        __int64 a1@<X0>,
        __int64 *a2@<X1>,
        float32x2_t *a3@<X8>,
        float a4@<S0>)
{
  __int64 v5; // x8
  float result; // s0
  float32x2_t v7; // [xsp+8h] [xbp-48h] BYREF
  float v8; // [xsp+10h] [xbp-40h]
  float v9[3]; // [xsp+18h] [xbp-38h] BYREF
  float v10; // [xsp+24h] [xbp-2Ch]
  __int64 v11; // [xsp+28h] [xbp-28h] BYREF
  float v12; // [xsp+30h] [xbp-20h]
  int v13; // [xsp+34h] [xbp-1Ch]
  __int64 v14; // [xsp+38h] [xbp-18h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a2;
  v12 = a4;
  v13 = 1065353216;
  v11 = v5;
  C_Matrix4Vector4Mul((const float *)(a1 + 384), (const float *)&v11, v9);
  Caver::Vector3::Vector3((Caver::Vector3 *)&v7, (const Caver::Vector4 *)v9);
  result = (float)(1.0 / v10) * v8;
  a3->n64_u64[0] = vmul_n_f32(v7, 1.0 / v10).n64_u64[0];
  a3[1].n64_f32[0] = result;
  return result;
}

