/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB828
 * Mangled: _ZN5Caver19WeaponGlowComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4ERKNS_7Vector3ES8_
 * Demangled: Caver::WeaponGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F54A0  Caver::Matrix4::RotationY(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FD050  Caver::TransformComponent::WorldMatrix(void)
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000201770  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *   0x00000000002030F0  Caver::WeaponGlowComponent::CreateVertexData(void)
 *
 * Referenced strings: 18
 *   insn=0x00000000002CB83C string=0x00000000002CB840 "V"
 *   insn=0x00000000002CB860 string=0x00000000002CB864 "#"
 *   insn=0x00000000002CB898 string=0x00000000001FD050 "0'"
 *   insn=0x00000000002CB8B0 string=0x00000000002CB8B4 "w"
 *   insn=0x00000000002CB8C0 string=0x00000000001F74B0 "0'"
 *   insn=0x00000000002CB8CC string=0x00000000002CB8D0 "p"
 *   insn=0x00000000002CB8D8 string=0x00000000002CB8DC " "
 *   insn=0x00000000002CB8E0 string=0x00000000002CB8E4 "AB9"
 *   insn=0x00000000002CB8E8 string=0x00000000002CB8EC " "
 *   insn=0x00000000002CB8F4 string=0x00000000001F54A0 "P'"
 *   insn=0x00000000002CB900 string=0x00000000002CB904 "c"
 *   insn=0x00000000002CB910 string=0x00000000002CB914 ""
 *   insn=0x00000000002CB924 string=0x00000000001FB1A0 "0'"
 *   insn=0x00000000002CB94C string=0x00000000002CB950 "#"
 *   insn=0x00000000002CB96C string=0x00000000002CB970 "#"
 *   insn=0x00000000002CB978 string=0x00000000002CB97C "}"
 *   insn=0x00000000002CB98C string=0x00000000002CB9A8 "J"
 *   insn=0x00000000002CB9A8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponGlowComponent::Draw(
        Caver::SceneObject **this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        const Caver::Vector3 *a4,
        const Caver::Vector3 *a5)
{
  Caver::TransformComponent *v8; // x0
  Caver::SceneObject *v9; // x8
  Caver::Matrix4 *v10; // x0
  float v11; // s0
  float v13; // [xsp+0h] [xbp-100h] BYREF
  __int64 v14[8]; // [xsp+40h] [xbp-C0h] BYREF
  _OWORD v15[4]; // [xsp+80h] [xbp-80h] BYREF
  __int64 v16; // [xsp+C8h] [xbp-38h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 112) )
  {
    Caver::WeaponGlowComponent::CreateVertexData((Caver::WeaponGlowComponent *)this);
    *((_BYTE *)this + 112) = 0;
  }
  v15[3] = *((_OWORD *)a3 + 3);
  v15[2] = *((_OWORD *)a3 + 2);
  v15[1] = *((_OWORD *)a3 + 1);
  v15[0] = *(_OWORD *)a3;
  v8 = this[27];
  if ( v8 )
  {
    Caver::TransformComponent::WorldMatrix(v8);
  }
  else
  {
    v9 = this[28];
    if ( v9 )
      C_Matrix4Mul((const float *)v15, (const float *)v9 + 54, (float *)v15);
    Caver::SceneObject::WorldMatrix(v14, this[5]);
    v10 = (Caver::Matrix4 *)C_Matrix4Mul((const float *)v15, (const float *)v14, &v13);
    v11 = 3.1416;
    if ( !*((_BYTE *)this[5] + 144) )
      v11 = 0.0;
    Caver::Matrix4::RotationY(v14, v10, v11);
  }
  C_Matrix4Mul((const float *)v15, (const float *)v14, (float *)v15);
  Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v15);
  LODWORD(v14[0]) = -1;
  Caver::RenderingContext::SetColor(a2, (const Caver::Color *)v14);
  Caver::RenderingContext::SetVertexAttribPointer();
  Caver::RenderingContext::SetVertexAttribPointer();
  return Caver::RenderingContext::DrawElements();
}

