/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000238DFC
 * Mangled: _ZNK5Caver14ShapeComponent11WorldMatrixEv
 * Demangled: Caver::ShapeComponent::WorldMatrix(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 12
 *   insn=0x0000000000238E0C string=0x0000000000238E10 "U"
 *   insn=0x0000000000238E28 string=0x00000000001F74B0 "0'"
 *   insn=0x0000000000238E2C string=0x0000000000238E30 "AB9"
 *   insn=0x0000000000238E34 string=0x0000000000238E38 "H"
 *   insn=0x0000000000238E38 string=0x0000000000238E3C "I"
 *   insn=0x0000000000238E3C string=0x0000000000238E40 "J"
 *   insn=0x0000000000238E40 string=0x0000000000238E44 "K"
 *   insn=0x0000000000238E48 string=0x0000000000238E4C "!"
 *   insn=0x0000000000238E4C string=0x0000000000238E50 "B"
 *   insn=0x0000000000238E50 string=0x0000000000238E54 "c"
 *   insn=0x0000000000238E68 string=0x0000000000238E6C "\t"
 *   insn=0x0000000000238E94 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::ShapeComponent::WorldMatrix@<X0>(Caver::SceneObject **this@<X0>, __int64 *a2@<X8>)
{
  __int64 *result; // x0
  _OWORD v5[4]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v6; // [xsp+48h] [xbp-28h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = Caver::SceneObject::WorldMatrix(a2, this[5]);
  if ( *((_BYTE *)this[5] + 144) )
  {
    v5[0] = xmmword_5837D0;
    v5[1] = xmmword_5837E0;
    v5[2] = xmmword_5837F0;
    v5[3] = xmmword_583800;
    return (__int64 *)C_Matrix4Mul((const float *)a2, (const float *)v5, (float *)a2);
  }
  return result;
}

