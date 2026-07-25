/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000238E98
 * Mangled: _ZN5Caver14ShapeComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::ShapeComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x00000000001FE640  Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 15
 *   insn=0x0000000000238EAC string=0x0000000000238EB0 "W"
 *   insn=0x0000000000238EC4 string=0x0000000000238EC8 "h"
 *   insn=0x0000000000238ECC string=0x0000000000238ED0 ""
 *   insn=0x0000000000238ED8 string=0x0000000000238EDC "u"
 *   insn=0x0000000000238EDC string=0x00000000001F74B0 "0'"
 *   insn=0x0000000000238EE0 string=0x0000000000238EE4 "AB9("
 *   insn=0x0000000000238EE4 string=0x0000000000238EE8 "("
 *   insn=0x0000000000238EE8 string=0x0000000000238EEC "H"
 *   insn=0x0000000000238EEC string=0x0000000000238EF0 "I"
 *   insn=0x0000000000238EF0 string=0x0000000000238EF4 "J"
 *   insn=0x0000000000238EF4 string=0x0000000000238EF8 "K"
 *   insn=0x0000000000238EFC string=0x0000000000238F00 "!"
 *   insn=0x0000000000238F00 string=0x0000000000238F04 "B"
 *   insn=0x0000000000238F04 string=0x0000000000238F08 "c"
 *   insn=0x0000000000238F78 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShapeComponent::Draw(__int64 this, Caver::RenderingContext *a2, const Caver::Matrix4 *a3)
{
  __int64 v3; // x22
  const Caver::Shape *v5; // x19
  Caver::ShapeComponent *v7; // x0
  __int64 v8[8]; // [xsp+0h] [xbp-C0h] BYREF
  _OWORD v9[4]; // [xsp+40h] [xbp-80h] BYREF
  __int64 v10; // [xsp+88h] [xbp-38h]

  v3 = this;
  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (const Caver::Shape *)(this + 112);
  if ( *(_DWORD *)(this + 112) )
  {
    Caver::SceneObject::WorldMatrix(v8, *(Caver::SceneObject **)(this + 40));
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 144LL) )
    {
      v9[0] = xmmword_5837D0;
      v9[1] = xmmword_5837E0;
      v9[2] = xmmword_5837F0;
      v9[3] = xmmword_583800;
      C_Matrix4Mul((const float *)v8, (const float *)v9, (float *)v8);
    }
    v7 = (Caver::ShapeComponent *)C_Matrix4Mul((const float *)a3, (const float *)v8, (float *)v9);
    return Caver::ShapeComponent::DrawShape(v7, a2, v5, (const Caver::Matrix4 *)v9);
  }
  return this;
}

