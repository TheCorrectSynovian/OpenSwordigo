/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8988
 * Mangled: _ZNK5Caver19GroundMeshComponent4DrawEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001F4FD0  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 10
 *   0x00000000001F59D0  Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F69F0  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FB7D0  Caver::Rectangle::Rotate(float)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FDE90  .glMaterialfv
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000202E40  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Referenced strings: 45
 *   insn=0x00000000002B89A0 string=0x00000000002B89A4 "W"
 *   insn=0x00000000002B89D8 string=0x00000000002B89DC "I"
 *   insn=0x00000000002B89DC string=0x00000000002B89E0 "J"
 *   insn=0x00000000002B89E0 string=0x00000000002B89E4 "K"
 *   insn=0x00000000002B89E4 string=0x00000000002B89E8 " %"
 *   insn=0x00000000002B89E8 string=0x00000000002B89EC "A"
 *   insn=0x00000000002B89EC string=0x00000000002B89F0 "\t9@"
 *   insn=0x00000000002B89F0 string=0x00000000002B89F4 "\ny@"
 *   insn=0x00000000002B89F4 string=0x00000000002B89F8 "b"
 *   insn=0x00000000002B8A18 string=0x00000000001FBCC0 "0'"
 *   insn=0x00000000002B8A38 string=0x00000000002B8A3C ""
 *   insn=0x00000000002B8A6C string=0x00000000002B8A70 ""
 *   insn=0x00000000002B8A78 string=0x00000000002B8A7C "I"
 *   insn=0x00000000002B8A98 string=0x00000000002B8A9C "q"
 *   insn=0x00000000002B8A9C string=0x00000000001F9C60 "0'"
 *   insn=0x00000000002B8AA4 string=0x00000000002B8AA8 "H"
 *   insn=0x00000000002B8AA8 string=0x0000000000583944 "\n"
 *   insn=0x00000000002B8AB0 string=0x00000000002B8AB4 "@ !"
 *   insn=0x00000000002B8AB8 string=0x00000000002B8AC8 "h"
 *   insn=0x00000000002B8AC0 string=0x00000000002B8AC4 "C"
 *   insn=0x00000000002B8AC4 string=0x00000000001FB7D0 "0'"
 *   insn=0x00000000002B8AC8 string=0x00000000002B8ACC ""
 *   insn=0x00000000002B8ADC string=0x00000000002B8AE0 "A"
 *   insn=0x00000000002B8AE0 string=0x00000000002B8AE4 " "
 *   insn=0x00000000002B8AE4 string=0x00000000002B8AE8 "A"
 *   insn=0x00000000002B8AF4 string=0x00000000001FDE90 "0'"
 *   insn=0x00000000002B8B14 string=0x00000000002B8B18 ""
 *   insn=0x00000000002B8B20 string=0x00000000002B8B24 ""
 *   insn=0x00000000002B8B24 string=0x00000000002B8B28 "\t"
 *   insn=0x00000000002B8B28 string=0x00000000002B8B2C ")"
 *   insn=0x00000000002B8B2C string=0x00000000002B8B30 ""
 *   insn=0x00000000002B8B38 string=0x00000000002B8B3C "@"
 *   insn=0x00000000002B8B38 string=0x00000000001F59D0 "P'"
 *   insn=0x00000000002B8B48 string=0x00000000002B8B4C "a"
 *   insn=0x00000000002B8B60 string=0x00000000001F69F0 "0'"
 *   insn=0x00000000002B8B64 string=0x00000000002B8B68 "?"
 *   insn=0x00000000002B8B68 string=0x00000000002B8B6C "a"
 *   insn=0x00000000002B8BA0 string=0x00000000002B8BA4 ""
 *   insn=0x00000000002B8BA4 string=0x00000000002B8BA8 "\t"
 *   insn=0x00000000002B8BA8 string=0x00000000002B8BAC ")"
 *   insn=0x00000000002B8BAC string=0x00000000002B8BB0 ""
 *   insn=0x00000000002B8BB8 string=0x00000000002B8BBC "@"
 *   insn=0x00000000002B8BC8 string=0x00000000002B8BCC "a"
 *   insn=0x00000000002B8BE8 string=0x00000000002B8BEC "a"
 *   insn=0x00000000002B8C1C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshComponent::Draw(
        __int64 this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  __int64 v4; // x20
  __int64 v8; // x8
  int v9; // w10
  int v10; // w8
  float v11; // s0
  unsigned __int64 v12; // d1
  Caver::MeshInstance **v13; // x24
  Caver::MeshInstance **i; // x25
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x8
  Caver::MeshInstance *v18; // x22
  Caver::Texture *v19; // x1
  Caver::MeshInstance **v20; // x21
  Caver::MeshInstance **j; // x22
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x8
  Caver::MeshInstance *v25; // x20
  Caver::Texture *v26; // x1
  _QWORD v27[2]; // [xsp+0h] [xbp-120h] BYREF
  _QWORD v28[6]; // [xsp+10h] [xbp-110h] BYREF
  __int64 v29[2]; // [xsp+40h] [xbp-E0h] BYREF
  _BYTE v30[20]; // [xsp+50h] [xbp-D0h] BYREF
  int v31; // [xsp+64h] [xbp-BCh]
  __int128 v32; // [xsp+68h] [xbp-B8h]
  int v33; // [xsp+78h] [xbp-A8h]
  __int128 v34; // [xsp+7Ch] [xbp-A4h]
  int v35; // [xsp+8Ch] [xbp-94h]
  _OWORD v36[3]; // [xsp+90h] [xbp-90h] BYREF
  __int64 v37; // [xsp+C0h] [xbp-60h]
  int v38; // [xsp+C8h] [xbp-58h]
  int v39; // [xsp+CCh] [xbp-54h]
  __int64 v40; // [xsp+D8h] [xbp-48h]

  v4 = this;
  v40 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(this + 112) != *(_QWORD *)(this + 120) || *(_QWORD *)(this + 136) != *(_QWORD *)(this + 144) )
  {
    v8 = *(_QWORD *)(this + 40);
    v9 = *(_DWORD *)(v8 + 120);
    v37 = *(_QWORD *)(v8 + 112);
    v36[0] = xmmword_583490;
    v36[1] = xmmword_5837E0;
    v36[2] = xmmword_5837F0;
    v38 = v9;
    v39 = 1065353216;
    Caver::Matrix4::RotationZ((__int64 *)v30, (Caver::Matrix4 *)this, *(float *)(v8 + 128));
    C_Matrix4Mul((const float *)v36, (const float *)v30, (float *)v36);
    v10 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 140LL);
    *(_OWORD *)&v30[4] = 0u;
    v32 = 0u;
    *(_DWORD *)v30 = v10;
    v31 = v10;
    v33 = v10;
    v34 = 0u;
    v35 = 1065353216;
    C_Matrix4Mul((const float *)v36, (const float *)v30, (float *)v36);
    C_Matrix4Mul((const float *)a4, (const float *)v36, (float *)v30);
    Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v30);
    *(float32x2_t *)v30 = vneg_f32(*(float32x2_t *)(*(_QWORD *)(v4 + 40) + 112LL));
    Caver::Rectangle::TranslatedRectangle(v29, a3, (const Caver::Vector2 *)v30);
    v11 = *(float *)(*(_QWORD *)(v4 + 40) + 128LL);
    if ( fabsf(v11) > 0.01 )
      Caver::Rectangle::Rotate((Caver::Rectangle *)v29, -v11);
    if ( !*(_DWORD *)a2 )
    {
      v12 = vmul_f32(*(float32x2_t *)(v4 + 184), *(float32x2_t *)(v4 + 204)).n64_u64[0];
      v28[4] = vmul_f32(*(float32x2_t *)(v4 + 176), *(float32x2_t *)(v4 + 196)).n64_u64[0];
      v28[5] = v12;
      glMaterialfv();
      v28[2] = 0;
      v28[3] = 0;
      glMaterialfv();
    }
    v13 = *(Caver::MeshInstance ***)(v4 + 112);
    for ( i = *(Caver::MeshInstance ***)(v4 + 120); i != v13; v13 += 2 )
    {
      v15 = *(_QWORD *)*v13;
      v16 = *(_QWORD *)(v15 + 324);
      v17 = *(_QWORD *)(v15 + 336);
      v28[0] = v16;
      v28[1] = v17;
      if ( (Caver::Rectangle::IntersectsWithRect((Caver::Rectangle *)v28, (const Caver::Rectangle *)v29) & 1) != 0 )
      {
        v18 = *v13;
        v19 = *(Caver::Texture **)(*(_QWORD *)*v13 + 216LL);
        if ( v19 )
          Caver::RenderingContext::BindTexture(a2, v19);
        Caver::MeshInstance::Draw(v18, a2);
      }
    }
    C_Matrix4Mul((const float *)a4, (const float *)v36, (float *)v30);
    this = Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v30);
    v20 = *(Caver::MeshInstance ***)(v4 + 136);
    for ( j = *(Caver::MeshInstance ***)(v4 + 144); j != v20; v20 += 2 )
    {
      v22 = *(_QWORD *)*v20;
      v23 = *(_QWORD *)(v22 + 324);
      v24 = *(_QWORD *)(v22 + 336);
      v27[0] = v23;
      v27[1] = v24;
      this = Caver::Rectangle::IntersectsWithRect((Caver::Rectangle *)v27, (const Caver::Rectangle *)v29);
      if ( (this & 1) != 0 )
      {
        v25 = *v20;
        v26 = *(Caver::Texture **)(*(_QWORD *)*v20 + 216LL);
        if ( v26 )
          Caver::RenderingContext::BindTexture(a2, v26);
        this = Caver::MeshInstance::Draw(v25, a2);
      }
    }
  }
  return this;
}

