/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C2DF4
 * Mangled: _ZN5Caver18WaterMeshComponent4DrawEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FBAA0  Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 11
 *   0x00000000001F3AA0  Caver::WaterMeshComponent::CreateMesh(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F9030  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FB780  Caver::WaterMeshComponent::UpdateMesh(void)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000202E40  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Referenced strings: 27
 *   insn=0x00000000002C2E04 string=0x00000000002C2E08 "V"
 *   insn=0x00000000002C2E20 string=0x00000000002C2E24 "h"
 *   insn=0x00000000002C2E2C string=0x00000000001F3AA0 "P'"
 *   insn=0x00000000002C2E30 string=0x00000000002C2E34 "h"
 *   insn=0x00000000002C2E38 string=0x00000000002C2E3C "Q"
 *   insn=0x00000000002C2E3C string=0x00000000001FB780 "0'"
 *   insn=0x00000000002C2E40 string=0x00000000002C2E44 "h"
 *   insn=0x00000000002C2E48 string=0x00000000002C2E4C "\n"
 *   insn=0x00000000002C2E4C string=0x00000000002C2E50 ""
 *   insn=0x00000000002C2E50 string=0x00000000002C2E54 "A"
 *   insn=0x00000000002C2E5C string=0x00000000002C2E60 "\n"
 *   insn=0x00000000002C2E60 string=0x00000000002C2E64 "B"
 *   insn=0x00000000002C2E90 string=0x00000000002C2E94 "(9@"
 *   insn=0x00000000002C2E94 string=0x00000000002C2E98 ")y@"
 *   insn=0x00000000002C2EBC string=0x00000000001FBCC0 "0'"
 *   insn=0x00000000002C2EDC string=0x00000000002C2EE0 ""
 *   insn=0x00000000002C2F0C string=0x00000000002C2F10 "$"
 *   insn=0x00000000002C2F24 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C2F30 string=0x00000000002C2F34 "a"
 *   insn=0x00000000002C2F50 string=0x00000000002C2F54 "!"
 *   insn=0x00000000002C2F58 string=0x00000000002C2F5C ""
 *   insn=0x00000000002C2F68 string=0x00000000001FB1A0 "0'"
 *   insn=0x00000000002C2F84 string=0x00000000002C2F88 "*"
 *   insn=0x00000000002C2F88 string=0x00000000001F9030 "0'"
 *   insn=0x00000000002C2FA8 string=0x00000000002C2FAC "}"
 *   insn=0x00000000002C2FC0 string=0x00000000002C2FC4 "$"
 *   insn=0x00000000002C2FF4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::WaterMeshComponent *__fastcall Caver::WaterMeshComponent::Draw(
        Caver::WaterMeshComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  __int64 v4; // x20
  __int64 v7; // x9
  __int64 v8; // x8
  Caver::Matrix4 *v9; // x0
  int v10; // w8
  __int64 v11; // x8
  Caver::Texture *v12; // x1
  unsigned __int64 v13; // d1
  _BYTE v14[8]; // [xsp+8h] [xbp-B8h] BYREF
  _BYTE v15[60]; // [xsp+10h] [xbp-B0h] BYREF
  int v16; // [xsp+4Ch] [xbp-74h]
  _OWORD v17[4]; // [xsp+50h] [xbp-70h] BYREF
  __int64 v18; // [xsp+98h] [xbp-28h]

  v4 = (__int64)this;
  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_BYTE *)this + 296) )
    this = (Caver::WaterMeshComponent *)Caver::WaterMeshComponent::CreateMesh(this);
  if ( *(_BYTE *)(v4 + 320) )
    this = (Caver::WaterMeshComponent *)Caver::WaterMeshComponent::UpdateMesh((Caver::WaterMeshComponent *)v4);
  if ( *(_DWORD *)(v4 + 336) )
  {
    v17[3] = *((_OWORD *)a4 + 3);
    v17[2] = *((_OWORD *)a4 + 2);
    v17[1] = *((_OWORD *)a4 + 1);
    v17[0] = *(_OWORD *)a4;
    v7 = *(_QWORD *)(v4 + 40);
    v8 = *(_QWORD *)(v7 + 112);
    LODWORD(v7) = *(_DWORD *)(v7 + 120);
    *(_OWORD *)v15 = xmmword_583490;
    *(_OWORD *)&v15[16] = xmmword_5837E0;
    *(_OWORD *)&v15[32] = xmmword_5837F0;
    *(_QWORD *)&v15[48] = v8;
    *(_DWORD *)&v15[56] = v7;
    v16 = 1065353216;
    v9 = (Caver::Matrix4 *)C_Matrix4Mul((const float *)v17, (const float *)v15, (float *)v17);
    Caver::Matrix4::RotationZ((__int64 *)v15, v9, *(float *)(*(_QWORD *)(v4 + 40) + 128LL));
    C_Matrix4Mul((const float *)v17, (const float *)v15, (float *)v17);
    v10 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 140LL);
    *(_OWORD *)&v15[4] = 0u;
    *(_OWORD *)&v15[24] = 0u;
    *(_DWORD *)v15 = v10;
    *(_DWORD *)&v15[20] = v10;
    *(_DWORD *)&v15[40] = v10;
    *(_OWORD *)&v15[44] = 0u;
    v16 = 1065353216;
    C_Matrix4Mul((const float *)v17, (const float *)v15, (float *)v17);
    Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v17);
    v11 = *(_QWORD *)(v4 + 168);
    if ( v11
      || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 152), (const Caver::Component *)v4),
          (v11 = *(_QWORD *)(v4 + 168)) != 0) )
    {
      v12 = *(Caver::Texture **)(v11 + 120);
      if ( v12 )
        Caver::RenderingContext::BindTexture(a2, v12);
    }
    v13 = vmul_f32(*(float32x2_t *)(v4 + 184), *(float32x2_t *)(v4 + 216)).n64_u64[0];
    *(float32x2_t *)v15 = vmul_f32(*(float32x2_t *)(v4 + 176), *(float32x2_t *)(v4 + 208));
    *(_QWORD *)&v15[8] = v13;
    Caver::Color::FromFloatColor();
    Caver::RenderingContext::SetColor(a2, (const Caver::Color *)v14);
    Caver::VertexArrayObject::Draw((Caver::VertexArrayObject *)(v4 + 224), a2, 4, 0, 3 * *(_DWORD *)(v4 + 332));
    *(float32x4_t *)v15 = vmulq_f32(*(float32x4_t *)(v4 + 192), *(float32x4_t *)(v4 + 208));
    Caver::Color::FromFloatColor();
    Caver::RenderingContext::SetColor(a2, (const Caver::Color *)v14);
    return (Caver::WaterMeshComponent *)Caver::VertexArrayObject::Draw(
                                          (Caver::VertexArrayObject *)(v4 + 224),
                                          a2,
                                          4,
                                          3 * *(_DWORD *)(v4 + 332),
                                          3 * *(_DWORD *)(v4 + 336));
  }
  return this;
}

