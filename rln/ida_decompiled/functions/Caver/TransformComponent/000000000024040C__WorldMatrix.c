/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024040C
 * Mangled: _ZN5Caver18TransformComponent11WorldMatrixEv
 * Demangled: Caver::TransformComponent::WorldMatrix(void)
 *
 * Callers: 1
 *   0x00000000001FD050  Caver::TransformComponent::WorldMatrix(void)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200640  Caver::Matrix4::PreTranslate(Caver::Vector3 const&)
 *
 * Referenced strings: 9
 *   insn=0x000000000024041C string=0x0000000000240420 "U"
 *   insn=0x0000000000240430 string=0x0000000000240434 "a"
 *   insn=0x0000000000240438 string=0x000000000024043C "h"
 *   insn=0x0000000000240444 string=0x0000000000240448 ""
 *   insn=0x000000000024046C string=0x0000000000240470 "h"
 *   insn=0x0000000000240478 string=0x000000000024047C "\t9@"
 *   insn=0x000000000024047C string=0x0000000000240480 "y@"
 *   insn=0x0000000000240488 string=0x000000000024048C "m"
 *   insn=0x00000000002404B4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::TransformComponent::WorldMatrix@<X0>(Caver::TransformComponent *this@<X0>, float *a2@<X8>)
{
  float v4; // w8
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v8; // [xsp+8h] [xbp-78h] BYREF
  int v9; // [xsp+10h] [xbp-70h]
  float v10; // [xsp+18h] [xbp-68h] BYREF
  __int128 v11; // [xsp+1Ch] [xbp-64h]
  float v12; // [xsp+2Ch] [xbp-54h]
  __int128 v13; // [xsp+30h] [xbp-50h]
  float v14; // [xsp+40h] [xbp-40h]
  __int128 v15; // [xsp+44h] [xbp-3Ch]
  int v16; // [xsp+54h] [xbp-2Ch]
  __int64 v17; // [xsp+58h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(float *)(*((_QWORD *)this + 5) + 140LL);
  v11 = 0u;
  v13 = 0u;
  v15 = 0u;
  v10 = v4;
  v12 = v4;
  v14 = v4;
  v16 = 1065353216;
  C_Matrix4Mul(&v10, (const float *)this + 28, a2);
  v5 = *((_QWORD *)this + 5);
  v6 = *(_QWORD *)(v5 + 112);
  LODWORD(v5) = *(_DWORD *)(v5 + 120);
  v8 = v6;
  v9 = v5;
  return Caver::Matrix4::PreTranslate((Caver::Matrix4 *)a2, (const Caver::Vector3 *)&v8);
}

