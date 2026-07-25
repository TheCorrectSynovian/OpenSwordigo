/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004571BC
 * Mangled: _ZNK5Caver6Camera16ForwardDirectionEv
 * Demangled: Caver::Camera::ForwardDirection(void)
 *
 * Callers: 1
 *   0x00000000001F6FA0  Caver::Camera::ForwardDirection(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001F9ED0  Caver::Matrix4::FromRotationQuaternion(Caver::Quaternion const&)
 *   0x00000000001FCAE0  Caver::Vector4::Normalize(void)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 9
 *   insn=0x00000000004571C8 string=0x00000000004571CC "T"
 *   insn=0x00000000004571E0 string=0x00000000004571E4 ";"
 *   insn=0x00000000004571E4 string=0x00000000001F9ED0 "0'"
 *   insn=0x00000000004571FC string=0x0000000000457200 "d"
 *   insn=0x000000000045720C string=0x0000000000457210 "4"
 *   insn=0x0000000000457210 string=0x00000000001FCAE0 "0'"
 *   insn=0x000000000045721C string=0x00000000001F71D0 "0'"
 *   insn=0x000000000045722C string=0x0000000000457240 "$|"
 *   insn=0x0000000000457240 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Camera::ForwardDirection@<X0>(
        Caver::Camera *this@<X0>,
        const Caver::Quaternion *a2@<X1>,
        Caver::Vector3 *a3@<X8>)
{
  __int128 v5; // [xsp+0h] [xbp-90h] BYREF
  __int128 v6; // [xsp+10h] [xbp-80h] BYREF
  __int128 v7; // [xsp+20h] [xbp-70h] BYREF
  __int64 v8[9]; // [xsp+38h] [xbp-58h] BYREF

  v8[8] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Matrix4::FromRotationQuaternion(v8, (Caver::Camera *)((char *)this + 28), a2);
  v6 = xmmword_5957F0;
  C_Matrix4Vector4Mul((const float *)v8, (const float *)&v6, (float *)&v5);
  v7 = v5;
  Caver::Vector4::Normalize((Caver::Vector4 *)&v7);
  return Caver::Vector3::Vector3(a3, (const Caver::Vector4 *)&v7);
}

