/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004918F0
 * Mangled: _ZN5Caver12GUIAlertView15PresentFromViewEPNS_7GUIViewE
 * Demangled: Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *
 * Callers: 1
 *   0x00000000001FDDF0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7610  Caver::GUIAlertView::UpdateLayout(void)
 *   0x00000000001F84B0  Caver::GUIAlertView::AddAnimations(bool)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FCA30  Caver::GUIView::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 52
 *   insn=0x0000000000491900 string=0x0000000000491904 "V"
 *   insn=0x000000000049190C string=0x0000000000491910 ")"
 *   insn=0x0000000000491910 string=0x0000000000491914 " )"
 *   insn=0x0000000000491918 string=0x000000000049191C "h"
 *   insn=0x0000000000491924 string=0x0000000000491928 "}@"
 *   insn=0x0000000000491934 string=0x0000000000491938 "6"
 *   insn=0x0000000000491938 string=0x00000000001F7610 "0'"
 *   insn=0x0000000000491940 string=0x0000000000491944 "y@"
 *   insn=0x0000000000491948 string=0x000000000049194C "j.T"
 *   insn=0x0000000000491950 string=0x0000000000491954 "\t"
 *   insn=0x0000000000491958 string=0x000000000049195C ""
 *   insn=0x000000000049195C string=0x0000000000491960 "j"
 *   insn=0x0000000000491960 string=0x0000000000491964 "J"
 *   insn=0x0000000000491964 string=0x0000000000491968 "_"
 *   insn=0x000000000049196C string=0x000000000049199C "d"
 *   insn=0x0000000000491974 string=0x0000000000491978 """
 *   insn=0x0000000000491978 string=0x000000000049197C "d$"
 *   insn=0x0000000000491988 string=0x000000000049198C "B(#"
 *   insn=0x000000000049198C string=0x0000000000491990 "B8$"
 *   insn=0x0000000000491990 string=0x0000000000491994 "H"
 *   insn=0x00000000004919A0 string=0x00000000004919A4 """
 *   insn=0x00000000004919A4 string=0x00000000004919A8 "a"
 *   insn=0x00000000004919AC string=0x00000000004919B0 "!"
 *   insn=0x00000000004919B0 string=0x00000000004919B4 "@"
 *   insn=0x00000000004919D0 string=0x00000000001FDA30 "0'"
 *   insn=0x00000000004919D4 string=0x00000000004919D8 "i"
 *   insn=0x00000000004919E8 string=0x00000000004919EC "u\n@"
 *   insn=0x00000000004919E8 string=0x00000000001FB170 "0'"
 *   insn=0x00000000004919F8 string=0x00000000004919FC "i"
 *   insn=0x00000000004919FC string=0x0000000000491A00 ""
 *   insn=0x0000000000491A14 string=0x0000000000491A18 "\t@"
 *   insn=0x0000000000491A20 string=0x0000000000491A24 ""
 *   insn=0x0000000000491A34 string=0x0000000000491A38 "@"
 *   insn=0x0000000000491A4C string=0x00000000001FCA30 "0'"
 *   insn=0x0000000000491A50 string=0x0000000000491A54 "4"
 *   insn=0x0000000000491A58 string=0x0000000000491A5C ""
 *   insn=0x0000000000491A6C string=0x0000000000491A70 "\t@"
 *   insn=0x0000000000491A78 string=0x0000000000491A7C ""
 *   insn=0x0000000000491A8C string=0x0000000000491A90 "@"
 *   insn=0x0000000000491AA0 string=0x00000000001F84B0 "0'"
 *   insn=0x0000000000491AC8 string=0x0000000000491ACC ""
 *   insn=0x0000000000491ACC string=0x0000000000491AD0 "A"
 *   insn=0x0000000000491ADC string=0x00000000001FA980 "0'"
 *   insn=0x0000000000491AE0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000491AE8 string=0x0000000000491AEC "a"
 *   insn=0x0000000000491AF0 string=0x0000000000491AF4 "t"
 *   insn=0x0000000000491AFC string=0x0000000000491B00 "4"
 *   insn=0x0000000000491B04 string=0x0000000000491B08 ""
 *   insn=0x0000000000491B14 string=0x0000000000491B18 "\t@"
 *   insn=0x0000000000491B24 string=0x0000000000491B28 ""
 *   insn=0x0000000000491B34 string=0x0000000000491B38 "@"
 *   insn=0x0000000000491B44 string=0x0000000000491B48 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::PresentFromView(Caver::GUIAlertView *this, Caver::GUIView *a2)
{
  void (__fastcall *v4)(Caver::GUIAlertView *, __int128 *); // x8
  __int64 v5; // x0
  float v6; // w9
  float v7; // w8
  float v8; // s4
  float32x2_t v9; // d1
  float32x2_t v10; // d0
  __int64 v11; // x9
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  unsigned __int64 v20; // [xsp+8h] [xbp-48h] BYREF
  __int128 v21; // [xsp+10h] [xbp-40h] BYREF
  __int64 v22[2]; // [xsp+20h] [xbp-30h] BYREF

  v22[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(void (__fastcall **)(Caver::GUIAlertView *, __int128 *))(*(_QWORD *)this + 248LL);
  v21 = xmmword_596CA0;
  v4(this, &v21);
  Caver::GUIAlertView::UpdateLayout(this);
  v5 = (*(__int64 (__fastcall **)(Caver::GUIView *))(*(_QWORD *)a2 + 240LL))(a2);
  v6 = *(float *)(v5 + 136);
  v7 = *(float *)(v5 + 144);
  if ( (int)((*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 4) >= 1 )
  {
    v8 = (float)((float)(v7 * 0.5) + v6) + 12.0;
    v7 = (float)(v6 + v7) - v8;
    v6 = v8;
  }
  v9.n64_f32[1] = v7;
  v9.n64_u32[0] = *(_DWORD *)(v5 + 140);
  v10.n64_f32[1] = v6;
  v10.n64_u32[0] = *(_DWORD *)(v5 + 132);
  v20 = vsub_f32(
          vadd_f32(v10, vmul_f32(v9, (float32x2_t)0x3F0000003F000000LL)),
          vmul_f32(*(float32x2_t *)((char *)this + 124), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  Caver::Vector2::Rounded(v22, (Caver::Vector2 *)&v20);
  v11 = *(_QWORD *)((char *)this + 124);
  *(_QWORD *)&v21 = v22[0];
  *((_QWORD *)&v21 + 1) = v11;
  Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v21);
  v12 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !v12 || (v13 = v12[1]) == 0 )
  {
    v22[0] = (__int64)off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v14 = v13 + 1;
  *(_QWORD *)&v21 = *((_QWORD *)this + 1);
  *((_QWORD *)&v21 + 1) = v12;
  v12[1] = v14;
  if ( !v14 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    v15 = v12[2] - 1LL;
    v12[2] = v15;
    if ( !v15 )
      (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
  }
  Caver::GUIView::PresentModalView();
  v16 = (_QWORD *)*((_QWORD *)&v21 + 1);
  if ( *((_QWORD *)&v21 + 1) )
  {
    v17 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL) = v17;
    if ( !v17 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
      v18 = v16[2] - 1LL;
      v16[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
    }
  }
  return Caver::GUIAlertView::AddAnimations(this, 0);
}

