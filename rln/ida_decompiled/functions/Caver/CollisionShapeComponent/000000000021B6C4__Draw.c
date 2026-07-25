/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021B6C4
 * Mangled: _ZN5Caver23CollisionShapeComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::CollisionShapeComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC0A0  Caver::CollisionShapeComponent::WorldMatrix(float)
 *   0x00000000001FE640  Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 16
 *   insn=0x000000000021B6D8 string=0x000000000021B6DC "W"
 *   insn=0x000000000021B6F0 string=0x000000000021B6F4 "h"
 *   insn=0x000000000021B6F4 string=0x000000000021B6F8 ""
 *   insn=0x000000000021B6FC string=0x000000000021B700 "h\nA"
 *   insn=0x000000000021B700 string=0x000000000021B704 "h"
 *   insn=0x000000000021B704 string=0x000000000021B708 "H&"
 *   insn=0x000000000021B708 string=0x000000000021B70C "@"
 *   insn=0x000000000021B70C string=0x000000000021B710 "v""
 *   insn=0x000000000021B710 string=0x000000000021B714 ""
 *   insn=0x000000000021B714 string=0x000000000021B718 "("
 *   insn=0x000000000021B718 string=0x000000000021B71C "`>A"
 *   insn=0x000000000021B724 string=0x000000000021B728 "^"
 *   insn=0x000000000021B728 string=0x00000000001FC0A0 "0'"
 *   insn=0x000000000021B74C string=0x000000000021B750 "`BA"
 *   insn=0x000000000021B764 string=0x000000000021B768 "N"
 *   insn=0x000000000021B7B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::Draw(
        Caver::CollisionShapeComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  __int64 result; // x0
  float v7; // s0
  float v8[16]; // [xsp+8h] [xbp-B8h] BYREF
  float v9[16]; // [xsp+48h] [xbp-78h] BYREF
  __int64 v10; // [xsp+88h] [xbp-38h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = (*(__int64 (__fastcall **)(Caver::CollisionShapeComponent *))(*(_QWORD *)this + 296LL))(this);
  if ( *((_DWORD *)this + 66) )
  {
    if ( Caver::CollisionShapeComponent::drawDepth )
    {
      Caver::CollisionShapeComponent::WorldMatrix(this, *((float *)this + 79));
      C_Matrix4Mul((const float *)a3, v8, v9);
      Caver::ShapeComponent::DrawShape(
        this,
        a2,
        (Caver::CollisionShapeComponent *)((char *)this + 264),
        (const Caver::Matrix4 *)v9);
      v7 = *((float *)this + 80);
    }
    else
    {
      v7 = 0.0;
    }
    Caver::CollisionShapeComponent::WorldMatrix(this, v7);
    C_Matrix4Mul((const float *)a3, v8, v9);
    return Caver::ShapeComponent::DrawShape(
             this,
             a2,
             (Caver::CollisionShapeComponent *)((char *)this + 264),
             (const Caver::Matrix4 *)v9);
  }
  return result;
}

