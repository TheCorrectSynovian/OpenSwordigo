/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000456D84
 * Mangled: _ZNK5Caver6Camera18RayFromScreenPointERKNS_7Vector2E
 * Demangled: Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x0000000000200050  Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001F9ED0  Caver::Matrix4::FromRotationQuaternion(Caver::Quaternion const&)
 *   0x00000000001FCAE0  Caver::Vector4::Normalize(void)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 28
 *   insn=0x0000000000456D98 string=0x0000000000456D9C "U"
 *   insn=0x0000000000456DB0 string=0x0000000000456DB4 ")(@)k"
 *   insn=0x0000000000456DB4 string=0x0000000000456DB8 "k"
 *   insn=0x0000000000456DB8 string=0x0000000000456DBC "h\t"
 *   insn=0x0000000000456DD4 string=0x0000000000456DD8 "n"
 *   insn=0x0000000000456DE4 string=0x00000000001F71D0 "0'"
 *   insn=0x0000000000456DF4 string=0x0000000000456DF8 "`"
 *   insn=0x0000000000456E00 string=0x0000000000456E04 "("
 *   insn=0x0000000000456E04 string=0x0000000000456E08 "\t""
 *   insn=0x0000000000456E08 string=0x0000000000456E0C "1"
 *   insn=0x0000000000456E0C string=0x00000000001F9ED0 "0'"
 *   insn=0x0000000000456E24 string=0x0000000000456E28 "Z"
 *   insn=0x0000000000456E34 string=0x0000000000456E38 "*"
 *   insn=0x0000000000456E38 string=0x00000000001FCAE0 "0'"
 *   insn=0x0000000000456E4C string=0x0000000000456E50 "h"
 *   insn=0x0000000000456E50 string=0x0000000000456E54 "i\n"
 *   insn=0x0000000000456E54 string=0x0000000000456E58 "h"
 *   insn=0x0000000000456E58 string=0x0000000000456E5C "i"
 *   insn=0x0000000000456E5C string=0x0000000000456E60 ""
 *   insn=0x0000000000456E7C string=0x0000000000456E80 "D"
 *   insn=0x0000000000456EA4 string=0x0000000000456EA8 " "
 *   insn=0x0000000000456EA8 string=0x0000000000456EAC "A"
 *   insn=0x0000000000456EB0 string=0x0000000000456EB4 "!"
 *   insn=0x0000000000456EB8 string=0x0000000000456EBC "c"
 *   insn=0x0000000000456EBC string=0x0000000000456EC0 "d\n"
 *   insn=0x0000000000456EC0 string=0x0000000000456EC4 "a"
 *   insn=0x0000000000456EC4 string=0x0000000000456EC8 "`"
 *   insn=0x0000000000456EF4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Camera::RayFromScreenPoint@<X0>(
        Caver::Camera *this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        __int64 a3@<X8>)
{
  int v5; // w10
  unsigned __int64 v6; // d8
  float v7; // s9
  const Caver::Quaternion *v8; // x1
  __int64 result; // x0
  __int64 v10; // x8
  int v11; // w9
  float32x2_t v12; // d3
  float v13; // s4
  unsigned __int64 v14; // d1
  float v15; // s0
  __int64 v16; // [xsp+0h] [xbp-C0h] BYREF
  int v17; // [xsp+8h] [xbp-B8h]
  __int128 v18; // [xsp+10h] [xbp-B0h] BYREF
  __int128 v19; // [xsp+20h] [xbp-A0h] BYREF
  float v20[6]; // [xsp+30h] [xbp-90h] BYREF
  __int64 v21; // [xsp+48h] [xbp-78h] BYREF
  __int64 v22; // [xsp+50h] [xbp-70h]
  __int64 v23; // [xsp+88h] [xbp-38h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *((_DWORD *)a2 + 1);
  if ( *((_BYTE *)this + 236) )
  {
    LODWORD(v21) = *(_DWORD *)a2;
    HIDWORD(v21) = v5;
    v22 = 0x3F80000000000000LL;
    C_Matrix4Vector4Mul((const float *)this + 96, (const float *)&v21, v20);
    Caver::Vector3::Vector3((Caver::Vector3 *)&v19, (const Caver::Vector4 *)v20);
    v6 = vmul_n_f32(*(float32x2_t *)&v19, 1.0 / v20[3]).n64_u64[0];
    v7 = (float)(1.0 / v20[3]) * *((float *)&v19 + 2);
    Caver::Matrix4::FromRotationQuaternion(&v21, (Caver::Camera *)((char *)this + 28), v8);
    v19 = xmmword_5957F0;
    C_Matrix4Vector4Mul((const float *)&v21, (const float *)&v19, (float *)&v18);
    *(_OWORD *)v20 = v18;
    Caver::Vector4::Normalize((Caver::Vector4 *)v20);
    result = Caver::Vector3::Vector3((Caver::Vector3 *)&v16, (const Caver::Vector4 *)v20);
    v10 = v16;
    v11 = v17;
    *(_QWORD *)a3 = v6;
    *(float *)(a3 + 8) = v7;
    *(_QWORD *)(a3 + 12) = v10;
    *(_DWORD *)(a3 + 20) = v11;
  }
  else
  {
    LODWORD(v21) = *(_DWORD *)a2;
    HIDWORD(v21) = v5;
    v22 = 0x3F800000BF800000LL;
    C_Matrix4Vector4Mul((const float *)this + 96, (const float *)&v21, v20);
    result = Caver::Vector3::Vector3((Caver::Vector3 *)&v19, (const Caver::Vector4 *)v20);
    v12.n64_u64[0] = *(_QWORD *)((unsigned __int64)this + 16);
    v13 = *((float *)this + 6);
    v14 = vsub_f32(vmul_n_f32(*(float32x2_t *)&v19, 1.0 / v20[3]), v12).n64_u64[0];
    v15 = (float)((float)(1.0 / v20[3]) * *((float *)&v19 + 2)) - v13;
    *(float32x2_t *)a3 = v12;
    *(float *)(a3 + 8) = v13;
    *(_QWORD *)(a3 + 12) = v14;
    *(float *)(a3 + 20) = v15;
  }
  return result;
}

