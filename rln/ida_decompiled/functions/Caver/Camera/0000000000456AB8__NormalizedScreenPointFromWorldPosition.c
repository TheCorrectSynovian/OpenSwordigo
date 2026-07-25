/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000456AB8
 * Mangled: _ZNK5Caver6Camera38NormalizedScreenPointFromWorldPositionERKNS_7Vector3EPf
 * Demangled: Caver::Camera::NormalizedScreenPointFromWorldPosition(Caver::Vector3 const&,float *)
 *
 * Callers: 1
 *   0x00000000004568D0  Caver::WhooshParticleEmitter::TitleForParameter(uint)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 10
 *   insn=0x0000000000456AC8 string=0x0000000000456ACC "U"
 *   insn=0x0000000000456AE4 string=0x0000000000456AE8 "("
 *   insn=0x0000000000456AF0 string=0x0000000000456AF4 "(@"
 *   insn=0x0000000000456AFC string=0x0000000000456B00 "$"
 *   insn=0x0000000000456B0C string=0x00000000001F71D0 "0'"
 *   insn=0x0000000000456B20 string=0x0000000000456B24 " "
 *   insn=0x0000000000456B24 string=0x0000000000456B28 "A"
 *   insn=0x0000000000456B34 string=0x0000000000456B38 "T"
 *   insn=0x0000000000456B44 string=0x0000000000456B48 """
 *   insn=0x0000000000456B70 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Camera::NormalizedScreenPointFromWorldPosition@<X0>(
        Caver::Camera *this@<X0>,
        const Caver::Vector3 *a2@<X1>,
        float *a3@<X2>,
        Caver::Vector2 *a4@<X8>)
{
  float v6; // s0
  unsigned __int64 v7; // d1
  float v8; // s0
  float32x2_t v10; // [xsp+8h] [xbp-58h] BYREF
  float v11; // [xsp+10h] [xbp-50h]
  unsigned __int64 v12; // [xsp+18h] [xbp-48h] BYREF
  float v13; // [xsp+20h] [xbp-40h]
  int v14; // [xsp+24h] [xbp-3Ch]
  float v15[4]; // [xsp+28h] [xbp-38h] BYREF
  __int64 v16; // [xsp+38h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v12 = *(_QWORD *)a2;
  v13 = *((float *)a2 + 2);
  v14 = 1065353216;
  C_Matrix4Vector4Mul((const float *)this + 43, (const float *)&v12, v15);
  Caver::Vector3::Vector3((Caver::Vector3 *)&v10, (const Caver::Vector4 *)v15);
  v6 = 1.0 / fabsf(v15[3]);
  v7 = vmul_n_f32(v10, v6).n64_u64[0];
  v8 = v6 * v11;
  v12 = v7;
  v13 = v8;
  if ( a3 )
    *a3 = v8;
  return Caver::Vector2::Vector2(a4, (const Caver::Vector3 *)&v12);
}

