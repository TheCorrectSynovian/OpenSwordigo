/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042F388
 * Mangled: _ZN5Caver10PortalView12CenterAtNodeEPNS_11MapViewNodeEb
 * Demangled: Caver::PortalView::CenterAtNode(Caver::MapViewNode *,bool)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F20  Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&,bool)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *
 * Referenced strings: 9
 *   insn=0x000000000042F398 string=0x000000000042F39C "V"
 *   insn=0x000000000042F3C0 string=0x000000000042F3C4 "("
 *   insn=0x000000000042F3D0 string=0x000000000042F3D4 " "
 *   insn=0x000000000042F3DC string=0x00000000001FDA30 "0'"
 *   insn=0x000000000042F418 string=0x000000000042F41C "!@!"
 *   insn=0x000000000042F424 string=0x000000000042F428 "b"
 *   insn=0x000000000042F424 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000042F434 string=0x00000000001F6F20 "0'"
 *   insn=0x000000000042F45C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalView::CenterAtNode(Caver::PortalView *this, float32x2_t **a2, char a3)
{
  Caver::GUIView *v5; // x21
  __int64 v6; // x8
  float v7; // s1
  float v9[2]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v10[2]; // [xsp+10h] [xbp-60h] BYREF
  __int64 v11[2]; // [xsp+20h] [xbp-50h] BYREF
  unsigned __int64 v12; // [xsp+30h] [xbp-40h] BYREF
  __int64 v13; // [xsp+38h] [xbp-38h] BYREF
  float32x2_t v14; // [xsp+40h] [xbp-30h]
  __int64 v15; // [xsp+48h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v14.n64_u64[0] = *(unsigned __int64 *)(*((_QWORD *)this + 32) + 124LL);
  v12 = vsub_f32((*a2)[1], vmul_f32(v14, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  Caver::Vector2::Rounded(v11, (Caver::Vector2 *)&v12);
  v13 = v11[0];
  v5 = (Caver::GUIView *)*((_QWORD *)this + 32);
  Caver::GUIView::ConvertRectFromView(v10, v5, (const Caver::Rectangle *)&v13, *((Caver::GUIView **)this + 34));
  v6 = *((_QWORD *)this + 32);
  v7 = *(float *)(v6 + 300);
  v9[0] = -*(float *)(v6 + 256);
  v9[1] = -v7;
  Caver::Rectangle::TranslatedRectangle(v11, (Caver::Rectangle *)v10, (const Caver::Vector2 *)v9);
  return Caver::GUIScrollView::ScrollRectToVisible(v5, (const Caver::Rectangle *)v11, a3 & 1);
}

