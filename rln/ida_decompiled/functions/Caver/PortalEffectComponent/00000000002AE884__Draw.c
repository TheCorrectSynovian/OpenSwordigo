/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AE884
 * Mangled: _ZN5Caver21PortalEffectComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4ERKNS_7Vector3ES8_
 * Demangled: Caver::PortalEffectComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F4830  Caver::PortalEffectComponent::CreateVertices(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FA470  Caver::RenderingContext::SetAlpha(float)
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000201770  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *   0x0000000000202E40  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Referenced strings: 14
 *   insn=0x00000000002AE894 string=0x00000000002AE898 "V"
 *   insn=0x00000000002AE8B0 string=0x00000000002AE8B4 "h"
 *   insn=0x00000000002AE8BC string=0x00000000001F4830 "P'"
 *   insn=0x00000000002AE8C8 string=0x00000000001F74B0 "0'"
 *   insn=0x00000000002AE8D4 string=0x00000000002AE8D8 "nE"
 *   insn=0x00000000002AE8F4 string=0x00000000002AE8F8 "z$"
 *   insn=0x00000000002AE8F8 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002AE908 string=0x00000000002AE90C "MQ"
 *   insn=0x00000000002AE954 string=0x00000000002AE958 "#"
 *   insn=0x00000000002AE978 string=0x00000000001FA470 "0'"
 *   insn=0x00000000002AE984 string=0x00000000002AE988 "c"
 *   insn=0x00000000002AE98C string=0x00000000002AE990 "xK"
 *   insn=0x00000000002AE9AC string=0x00000000002AE9C4 "C"
 *   insn=0x00000000002AE9C4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalEffectComponent::Draw(
        Caver::SceneObject **this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        const Caver::Vector3 *a4,
        const Caver::Vector3 *a5)
{
  Caver::SceneObject *v8; // x8
  __int64 v10[8]; // [xsp+8h] [xbp-A8h] BYREF
  float v11[16]; // [xsp+48h] [xbp-68h] BYREF
  __int64 v12; // [xsp+88h] [xbp-28h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_DWORD *)this + 54) )
    Caver::PortalEffectComponent::CreateVertices((Caver::PortalEffectComponent *)this);
  Caver::SceneObject::WorldMatrix(v10, this[5]);
  C_Matrix4Mul((const float *)a3, (const float *)v10, v11);
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v11);
  v8 = this[22];
  if ( v8
    || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(this + 20), (const Caver::Component *)this),
        (v8 = this[22]) != 0) )
  {
    Caver::RenderingContext::BindTexture(a2, *((Caver::Texture **)v8 + 15));
  }
  Caver::RenderingContext::SetVertexAttribPointer();
  Caver::RenderingContext::SetVertexAttribPointer();
  Caver::RenderingContext::SetVertexAttribPointer();
  Caver::RenderingContext::SetAlpha(a2, *((float *)this[5] + 35));
  Caver::RenderingContext::DrawElements();
  return Caver::RenderingContext::SetAlpha(a2, 1.0);
}

