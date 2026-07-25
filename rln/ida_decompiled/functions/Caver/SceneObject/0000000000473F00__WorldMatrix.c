/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473F00
 * Mangled: _ZNK5Caver11SceneObject11WorldMatrixEv
 * Demangled: Caver::SceneObject::WorldMatrix(void)
 *
 * Callers: 1
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200640  Caver::Matrix4::PreTranslate(Caver::Vector3 const&)
 *
 * Referenced strings: 8
 *   insn=0x0000000000473F10 string=0x0000000000473F14 "U"
 *   insn=0x0000000000473F28 string=0x0000000000473F2C "`"
 *   insn=0x0000000000473F2C string=0x0000000000473F30 "d"
 *   insn=0x0000000000473F30 string=0x0000000000473F34 "h"
 *   insn=0x0000000000473F30 string=0x00000000001FBCC0 "0'"
 *   insn=0x0000000000473F68 string=0x0000000000473F6C "h:@"
 *   insn=0x0000000000473F6C string=0x0000000000473F70 "iz@"
 *   insn=0x0000000000473FAC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SceneObject::WorldMatrix@<X0>(Caver::SceneObject *this@<X0>, float *a2@<X8>)
{
  int v4; // w9
  _BYTE v6[20]; // [xsp+8h] [xbp-A8h] BYREF
  int v7; // [xsp+1Ch] [xbp-94h]
  __int128 v8; // [xsp+20h] [xbp-90h]
  int v9; // [xsp+30h] [xbp-80h]
  __int128 v10; // [xsp+34h] [xbp-7Ch]
  int v11; // [xsp+44h] [xbp-6Ch]
  __int64 v12[9]; // [xsp+48h] [xbp-68h] BYREF

  v12[8] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Matrix4::RotationZ(v12, this, *((float *)this + 32));
  *(_DWORD *)v6 = *((_DWORD *)this + 35);
  v7 = *(_DWORD *)v6;
  v9 = *(_DWORD *)v6;
  *(_OWORD *)&v6[4] = 0u;
  v8 = 0u;
  v10 = 0u;
  v11 = 1065353216;
  C_Matrix4Mul((const float *)v12, (const float *)v6, a2);
  v4 = *((_DWORD *)this + 30);
  *(_QWORD *)v6 = *((_QWORD *)this + 14);
  *(_DWORD *)&v6[8] = v4;
  return Caver::Matrix4::PreTranslate((Caver::Matrix4 *)a2, (const Caver::Vector3 *)v6);
}

