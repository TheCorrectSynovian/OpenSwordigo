/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023D32C
 * Mangled: _ZN5Caver19TextBubbleComponent4DrawEPNS_16RenderingContextEPKNS_6CameraERKNS_9RectangleE
 * Demangled: Caver::TextBubbleComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4310  Caver::GUITextBubble::SetMaxBounds(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FB1E0  Caver::Rectangle::RectangleByInsetting(float)
 *   0x00000000001FD140  Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000202160  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 26
 *   insn=0x000000000023D340 string=0x000000000023D344 "W"
 *   insn=0x000000000023D358 string=0x000000000023D35C "h>@"
 *   insn=0x000000000023D360 string=0x000000000023D364 "h"
 *   insn=0x000000000023D370 string=0x000000000023D374 "\t9@"
 *   insn=0x000000000023D374 string=0x000000000023D378 "y@"
 *   insn=0x000000000023D388 string=0x000000000023D38C "m"
 *   insn=0x000000000023D38C string=0x00000000001FD140 "0'"
 *   insn=0x000000000023D39C string=0x000000000023D3A0 " "
 *   insn=0x000000000023D3A8 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000023D3B4 string=0x000000000023D3B8 "("
 *   insn=0x000000000023D3B8 string=0x000000000023D3BC " "
 *   insn=0x000000000023D3BC string=0x000000000023D3C0 "A "
 *   insn=0x000000000023D3C8 string=0x000000000023D3CC "("
 *   insn=0x000000000023D3D8 string=0x000000000023D3DC "("
 *   insn=0x000000000023D3F0 string=0x000000000023D3F4 "hr@"
 *   insn=0x000000000023D434 string=0x000000000023D438 "h"
 *   insn=0x000000000023D438 string=0x000000000023D43C "H"
 *   insn=0x000000000023D43C string=0x000000000023D440 "v>@"
 *   insn=0x000000000023D43C string=0x000000000023D484 "`>@"
 *   insn=0x000000000023D444 string=0x000000000023D448 "h"
 *   insn=0x000000000023D454 string=0x000000000023D458 "b"
 *   insn=0x000000000023D458 string=0x00000000001FB1E0 "0'"
 *   insn=0x000000000023D474 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000023D480 string=0x00000000001F4310 "P'"
 *   insn=0x000000000023D488 string=0x000000000023D48C "5"
 *   insn=0x000000000023D4B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextBubbleComponent::Draw(
        __int64 this,
        Caver::RenderingContext *a2,
        const Caver::Camera *a3,
        const Caver::Rectangle *a4)
{
  __int64 v4; // x19
  __int64 v7; // x8
  __int64 v8; // x9
  float v9; // s0
  Caver::GUITextBubble *v10; // x22
  unsigned __int64 v11; // [xsp+0h] [xbp-130h] BYREF
  __int64 v12[2]; // [xsp+8h] [xbp-128h] BYREF
  __int64 v13; // [xsp+18h] [xbp-118h] BYREF
  unsigned __int64 v14; // [xsp+20h] [xbp-110h] BYREF
  float32x2_t v15; // [xsp+28h] [xbp-108h] BYREF
  float v16; // [xsp+30h] [xbp-100h] BYREF
  __int128 v17; // [xsp+34h] [xbp-FCh]
  float v18; // [xsp+44h] [xbp-ECh]
  __int128 v19; // [xsp+48h] [xbp-E8h]
  float v20; // [xsp+58h] [xbp-D8h]
  __int128 v21; // [xsp+5Ch] [xbp-D4h]
  int v22; // [xsp+6Ch] [xbp-C4h]
  _OWORD v23[3]; // [xsp+70h] [xbp-C0h] BYREF
  float v24; // [xsp+A0h] [xbp-90h]
  float v25; // [xsp+A4h] [xbp-8Ch]
  __int64 v26; // [xsp+A8h] [xbp-88h]
  __int64 v27; // [xsp+B8h] [xbp-78h] BYREF
  int v28; // [xsp+C0h] [xbp-70h]
  __int64 v29; // [xsp+F8h] [xbp-38h]

  v4 = this;
  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(this + 120) )
  {
    v7 = *(_QWORD *)(this + 40);
    v8 = *(_QWORD *)(v7 + 112);
    LODWORD(v7) = *(_DWORD *)(v7 + 120);
    v27 = v8;
    v28 = v7;
    Caver::Camera::ScreenPointFromWorldPosition((__int64 *)&v15, a3, (const Caver::Vector3 *)&v27, a4, 0);
    v14 = vmul_n_f32(v15, *((float *)a2 + 22)).n64_u64[0];
    Caver::Vector2::Rounded(&v13, (Caver::Vector2 *)&v14);
    v9 = 1.0 / *((float *)a2 + 22);
    v15.n64_f32[0] = *(float *)&v13 * v9;
    v15.n64_f32[1] = v9 * *((float *)&v13 + 1);
    v24 = *(float *)&v13 * v9;
    v25 = v9 * *((float *)&v13 + 1);
    v26 = 0x3F80000000000000LL;
    v23[0] = xmmword_583490;
    v23[1] = xmmword_5837E0;
    v23[2] = xmmword_5837F0;
    v16 = *(float *)(v4 + 112);
    v18 = v16;
    v20 = v16;
    v17 = 0u;
    v19 = 0u;
    v21 = 0u;
    v22 = 1065353216;
    C_Matrix4Mul((const float *)v23, &v16, (float *)&v27);
    Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)&v27);
    if ( !*(_BYTE *)(v4 + 118) )
    {
      v10 = *(Caver::GUITextBubble **)(v4 + 120);
      *(_BYTE *)(v4 + 118) = 1;
      Caver::Rectangle::RectangleByInsetting(v12, a4, 15.0);
      v11 = vneg_f32(v15).n64_u64[0];
      Caver::Rectangle::TranslatedRectangle((__int64 *)&v16, (Caver::Rectangle *)v12, (const Caver::Vector2 *)&v11);
      Caver::GUITextBubble::SetMaxBounds(v10, (const Caver::Rectangle *)&v16);
    }
    return Caver::GUITextBubble::Draw(*(Caver::GUITextBubble **)(v4 + 120), a2);
  }
  return this;
}

