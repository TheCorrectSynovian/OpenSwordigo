/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034EB34
 * Mangled: _ZN5Caver13GameSceneView14LayoutSubviewsEv
 * Demangled: Caver::GameSceneView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F5DC0  Caver::Camera::SetAspectRatio(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FC500  Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 38
 *   insn=0x000000000034EB44 string=0x000000000034EB48 "U"
 *   insn=0x000000000034EB54 string=0x000000000034EB58 "hz@"
 *   insn=0x000000000034EB58 string=0x000000000034EB5C "h"
 *   insn=0x000000000034EB5C string=0x000000000034EB60 ""
 *   insn=0x000000000034EB5C string=0x000000000034EB88 "`"
 *   insn=0x000000000034EB60 string=0x000000000034EB64 "`B"
 *   insn=0x000000000034EB64 string=0x000000000034EB68 "!A"
 *   insn=0x000000000034EB6C string=0x000000000034EB70 "hz@"
 *   insn=0x000000000034EB70 string=0x000000000034EB74 "`"
 *   insn=0x000000000034EB74 string=0x000000000034EB78 ""
 *   insn=0x000000000034EB84 string=0x00000000001F5DC0 "P'"
 *   insn=0x000000000034EB88 string=0x000000000034EB8C "`"
 *   insn=0x000000000034EB8C string=0x000000000034EB90 "a"
 *   insn=0x000000000034EB8C string=0x000000000034EB98 "`"
 *   insn=0x000000000034EB90 string=0x000000000034EB94 "w"
 *   insn=0x000000000034EB94 string=0x00000000001FB170 "0'"
 *   insn=0x000000000034EB98 string=0x000000000034EB9C "`"
 *   insn=0x000000000034EB9C string=0x000000000034EBA0 "a"
 *   insn=0x000000000034EB9C string=0x000000000034EBA8 "`"
 *   insn=0x000000000034EBA0 string=0x000000000034EBA4 "W"
 *   insn=0x000000000034EBA4 string=0x00000000001FC500 "0'"
 *   insn=0x000000000034EBA8 string=0x000000000034EBAC "`"
 *   insn=0x000000000034EBAC string=0x000000000034EBB0 "a"
 *   insn=0x000000000034EBAC string=0x000000000034EBB8 "t"
 *   insn=0x000000000034EBB0 string=0x000000000034EBB4 "S"
 *   insn=0x000000000034EBBC string=0x000000000034EC38 "`"
 *   insn=0x000000000034EBC4 string=0x000000000034EBC8 ":"
 *   insn=0x000000000034EBC8 string=0x000000000034EBCC "h"
 *   insn=0x000000000034EBC8 string=0x00000000001F5CB0 "P'"
 *   insn=0x000000000034EBF0 string=0x000000000034EBF4 "_"
 *   insn=0x000000000034EBF4 string=0x000000000034EBF8 "t"
 *   insn=0x000000000034EBFC string=0x0000000000583734 "o"
 *   insn=0x000000000034EC14 string=0x000000000034EC18 ""
 *   insn=0x000000000034EC2C string=0x00000000001F3C90 "P'"
 *   insn=0x000000000034EC38 string=0x000000000034EC3C "a"
 *   insn=0x000000000034EC3C string=0x000000000034EC40 "0"
 *   insn=0x000000000034EC48 string=0x00000000001F94B0 "0'"
 *   insn=0x000000000034EC70 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::LayoutSubviews(Caver::GameSceneView *this)
{
  __int64 v2; // x8
  Caver::GUIView *v3; // x0
  Caver::GUIEffect *v4; // x0
  Caver::GUIEffect *v5; // x0
  __int64 v6; // x20
  unsigned __int64 v7; // d0
  __int64 v8; // x20
  __int128 *v9; // x8
  __int128 v11; // [xsp+0h] [xbp-60h] BYREF
  float32x2_t v12; // [xsp+18h] [xbp-48h]
  float32x2_t v13; // [xsp+20h] [xbp-40h]
  __int128 v14; // [xsp+28h] [xbp-38h] BYREF
  __int64 v15; // [xsp+38h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 30);
  if ( v2 )
  {
    *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v2 + 32) + 576LL) = *(_OWORD *)((char *)this + 132);
    Caver::Camera::SetAspectRatio(
      *(Caver::Camera **)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 576LL),
      *((float *)this + 35) / *((float *)this + 36));
  }
  v3 = (Caver::GUIView *)*((_QWORD *)this + 32);
  if ( v3 )
    Caver::GUIView::SetFrame(v3, (Caver::GameSceneView *)((char *)this + 132));
  v4 = (Caver::GUIEffect *)*((_QWORD *)this + 49);
  if ( v4 )
    Caver::GUIEffect::SetFrame(v4, (Caver::GameSceneView *)((char *)this + 132));
  v5 = (Caver::GUIEffect *)*((_QWORD *)this + 44);
  if ( v5 )
    Caver::GUIEffect::SetFrame(v5, (Caver::GameSceneView *)((char *)this + 132));
  v6 = *((_QWORD *)this + 41);
  if ( v6 )
  {
    Caver::GUIView::safeBounds(this);
    v7 = vsub_f32(vadd_f32(v12, v13), *(float32x2_t *)(*((_QWORD *)this + 41) + 124LL)).n64_u64[0];
    *((_QWORD *)&v14 + 1) = *(_QWORD *)(v6 + 124);
    *(_QWORD *)&v14 = v7;
    Caver::GUIView::SetFrame((Caver::GUIView *)v6, (const Caver::Rectangle *)&v14);
    v8 = *((_QWORD *)this + 41);
    v9 = (__int128 *)(v8 + 148);
    if ( *(float *)(v8 + 156) <= 0.001 )
      v9 = (__int128 *)(v8 + 132);
    v11 = *v9;
    Caver::Rectangle::RectangleByOutsetting((__int64 *)&v14, (Caver::Rectangle *)&v11, 6.0);
    *(_OWORD *)(v8 + 148) = v14;
  }
  Caver::GUIEffect::SetFrame(*((Caver::GUIEffect **)this + 46), (Caver::GameSceneView *)((char *)this + 132));
  return Caver::GUIView::LayoutSubviews(this);
}

