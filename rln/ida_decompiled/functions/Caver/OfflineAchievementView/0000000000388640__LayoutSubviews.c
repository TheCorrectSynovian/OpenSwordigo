/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000388640
 * Mangled: _ZN5Caver22OfflineAchievementView14LayoutSubviewsEv
 * Demangled: Caver::OfflineAchievementView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *
 * Referenced strings: 72
 *   insn=0x0000000000388658 string=0x000000000038865C "U"
 *   insn=0x000000000038866C string=0x0000000000388670 "`"
 *   insn=0x000000000038866C string=0x00000000001F94B0 "0'"
 *   insn=0x0000000000388670 string=0x0000000000388674 "a"
 *   insn=0x0000000000388674 string=0x0000000000388678 "`"
 *   insn=0x0000000000388678 string=0x000000000038867C ""
 *   insn=0x0000000000388680 string=0x0000000000388684 "|@"
 *   insn=0x0000000000388684 string=0x0000000000388688 "!("
 *   insn=0x000000000038868C string=0x0000000000388690 "A("
 *   insn=0x00000000003886B0 string=0x00000000003886B4 "`"
 *   insn=0x00000000003886B0 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003886BC string=0x00000000003886C0 "`"
 *   insn=0x00000000003886C0 string=0x00000000003886C4 "`"
 *   insn=0x00000000003886C0 string=0x00000000001F5840 "P'"
 *   insn=0x00000000003886C8 string=0x00000000003886CC "]"
 *   insn=0x00000000003886CC string=0x00000000003886D0 "h"
 *   insn=0x00000000003886D0 string=0x00000000003886D4 "`"
 *   insn=0x00000000003886DC string=0x00000000003886E0 "`"
 *   insn=0x00000000003886E8 string=0x00000000003886EC "U"
 *   insn=0x00000000003886EC string=0x00000000003886F0 "`"
 *   insn=0x00000000003886F8 string=0x00000000003886FC "x@"
 *   insn=0x00000000003886FC string=0x0000000000388700 "\t@G"
 *   insn=0x0000000000388700 string=0x0000000000388704 "I@"
 *   insn=0x0000000000388714 string=0x0000000000388718 "b"
 *   insn=0x0000000000388718 string=0x000000000038871C "a"
 *   insn=0x000000000038871C string=0x0000000000388720 "`"
 *   insn=0x0000000000388720 string=0x0000000000388724 "c"
 *   insn=0x0000000000388728 string=0x000000000038872C " ( "
 *   insn=0x0000000000388730 string=0x0000000000388734 "c("
 *   insn=0x0000000000388734 string=0x0000000000388738 "B(#"
 *   insn=0x0000000000388744 string=0x0000000000388748 "A8#"
 *   insn=0x0000000000388748 string=0x000000000038874C "!@&"
 *   insn=0x0000000000388754 string=0x0000000000388758 "h"
 *   insn=0x0000000000388758 string=0x000000000038875C "i"
 *   insn=0x000000000038875C string=0x0000000000388760 "`"
 *   insn=0x000000000038876C string=0x0000000000388770 ""u@"
 *   insn=0x0000000000388770 string=0x0000000000388774 "@G"
 *   insn=0x0000000000388780 string=0x0000000000388784 "A(!"
 *   insn=0x0000000000388788 string=0x000000000038878C "\t(""
 *   insn=0x000000000038878C string=0x0000000000388790 "*8)"
 *   insn=0x0000000000388798 string=0x000000000038879C "u"
 *   insn=0x000000000038879C string=0x00000000003887A0 "`"
 *   insn=0x00000000003887A4 string=0x00000000003887A8 "@G"
 *   insn=0x00000000003887B4 string=0x00000000003887B8 "n"
 *   insn=0x00000000003887B8 string=0x00000000003887BC "`"
 *   insn=0x00000000003887BC string=0x00000000003887C0 "<A"
 *   insn=0x00000000003887CC string=0x00000000003887D0 "<"
 *   insn=0x00000000003887D0 string=0x00000000003887D4 "O"
 *   insn=0x00000000003887D4 string=0x00000000003887D8 "`"
 *   insn=0x00000000003887D4 string=0x00000000001F8510 "0'"
 *   insn=0x00000000003887DC string=0x00000000003887E0 "L"
 *   insn=0x00000000003887E0 string=0x00000000003887E4 "t"
 *   insn=0x00000000003887EC string=0x00000000003887F0 "p"
 *   insn=0x0000000000388808 string=0x000000000038880C "Y"
 *   insn=0x000000000038880C string=0x0000000000388810 "h"
 *   insn=0x0000000000388810 string=0x0000000000388814 "t"
 *   insn=0x000000000038882C string=0x0000000000388830 "(!"
 *   insn=0x0000000000388830 string=0x0000000000388834 "_"
 *   insn=0x000000000038884C string=0x0000000000388850 "H"
 *   insn=0x0000000000388850 string=0x0000000000388854 "h"
 *   insn=0x0000000000388854 string=0x0000000000388858 "`"
 *   insn=0x0000000000388864 string=0x0000000000388868 "@G"
 *   insn=0x0000000000388874 string=0x0000000000388878 ">"
 *   insn=0x0000000000388878 string=0x000000000038887C "`"
 *   insn=0x000000000038887C string=0x0000000000388880 "`"
 *   insn=0x0000000000388880 string=0x0000000000388884 "a"
 *   insn=0x000000000038888C string=0x0000000000388890 "|@"
 *   insn=0x0000000000388894 string=0x0000000000388898 " ( "
 *   insn=0x0000000000388898 string=0x000000000038889C "A("
 *   insn=0x00000000003888B0 string=0x00000000003888B4 "/"
 *   insn=0x00000000003888C4 string=0x00000000003888E4 "{"
 *   insn=0x00000000003888E4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OfflineAchievementView::LayoutSubviews(Caver::GUIView **this)
{
  float *v2; // x0
  float v3; // s2
  float v4; // s0
  Caver::GUILabel *v5; // x0
  Caver::GUILabel *v6; // x0
  Caver::GUILabel *v7; // x0
  Caver::GUIView *v8; // x0
  float v9; // w8
  float *v10; // x0
  float v11; // s4
  float v12; // s2
  unsigned int v13; // s0
  Caver::GUIView *v14; // x8
  Caver::GUIView *v15; // x0
  float v16; // s0
  float v17; // s1
  float v18; // s2
  unsigned __int64 v19; // x8
  float v20; // s9
  float v21; // s10
  Caver::GUIView *v22; // x0
  unsigned __int64 v23; // x8
  Caver::GUIView *v24; // x0
  Caver::GUILabel *v25; // x20
  Caver::GUILabel *v26; // x20
  float v27; // s11
  Caver::GUIView *v28; // x0
  float v29; // s0
  float *v30; // x0
  float v31; // s2
  unsigned int v32; // s0
  __int64 v34; // [xsp+8h] [xbp-68h] BYREF
  __int64 v35; // [xsp+10h] [xbp-60h] BYREF
  unsigned __int64 v36; // [xsp+18h] [xbp-58h] BYREF
  float v37; // [xsp+20h] [xbp-50h]
  float v38; // [xsp+24h] [xbp-4Ch]
  __int64 v39; // [xsp+28h] [xbp-48h]

  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews((Caver::GUIView *)this);
  v2 = (float *)this[33];
  v3 = v2[32];
  v4 = roundf((float)(*((float *)this + 34) + (float)(*((float *)this + 36) * 0.5)) - (float)(v3 * 0.5));
  v37 = v2[31];
  v38 = v3;
  LODWORD(v36) = 0;
  *((float *)&v36 + 1) = v4;
  Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)&v36);
  v5 = this[35];
  *((_DWORD *)v5 + 76) = 4;
  Caver::GUILabel::UpdateBounds(v5);
  v6 = this[35];
  *((_DWORD *)v6 + 77) = 4;
  Caver::GUILabel::UpdateBounds(v6);
  Caver::GUIView::SetFrame(this[35], (Caver::GUIView *)((char *)this[33] + 116));
  v7 = this[43];
  *((_DWORD *)v7 + 76) = 1;
  Caver::GUILabel::UpdateBounds(v7);
  v8 = this[43];
  v9 = *(float *)(*((_QWORD *)v8 + 30) + 72LL);
  v36 = *(_QWORD *)((char *)v8 + 116);
  v37 = 60.0;
  v38 = v9;
  Caver::GUIView::SetFrame(v8, (const Caver::Rectangle *)&v36);
  v10 = (float *)this[43];
  v11 = v10[32];
  v12 = *((float *)this + 34) + (float)(*((float *)this + 36) * 0.5);
  *(float *)&v13 = (float)(*((float *)this + 33) + *((float *)this + 35)) - v10[31];
  v37 = v10[31];
  v38 = v11;
  v36 = __PAIR64__(COERCE_UNSIGNED_INT(roundf(v12 - (float)(v11 * 0.5))), v13);
  Caver::GUIView::SetFrame((Caver::GUIView *)v10, (const Caver::Rectangle *)&v36);
  v14 = this[33];
  v15 = this[39];
  v16 = *((float *)v14 + 29);
  v17 = *((float *)v14 + 31);
  v18 = *((float *)this[43] + 29);
  v19 = *(_QWORD *)((char *)v15 + 116);
  v38 = 100.0;
  v20 = (float)(v16 + v17) + 10.0;
  v21 = (float)(v18 + -10.0) - v20;
  v36 = v19;
  v37 = v21;
  Caver::GUIView::SetFrame(v15, (const Caver::Rectangle *)&v36);
  v22 = this[41];
  v23 = *(_QWORD *)((char *)v22 + 116);
  v37 = v21;
  v38 = 100.0;
  v36 = v23;
  Caver::GUIView::SetFrame(v22, (const Caver::Rectangle *)&v36);
  v24 = this[41];
  if ( *((_DWORD *)v24 + 79) != 2 )
  {
    *((_DWORD *)v24 + 79) = 2;
    Caver::GUILabel::UpdateText(v24);
    v24 = this[41];
  }
  *((_BYTE *)v24 + 312) = 1;
  Caver::GUILabel::UpdateText(v24);
  v25 = this[41];
  Caver::GUILabel::TextSize(&v35, v25);
  v36 = 0;
  v37 = v21;
  v38 = *((float *)&v35 + 1);
  Caver::GUIView::SetFrame(v25, (const Caver::Rectangle *)&v36);
  v26 = this[39];
  v27 = (float)(*((float *)this[41] + 30) + *((float *)this[41] + 32)) + 8.0;
  Caver::GUILabel::TextSize(&v34, v26);
  LODWORD(v36) = 0;
  *((float *)&v36 + 1) = v27;
  v37 = v21;
  v38 = *((float *)&v34 + 1);
  Caver::GUIView::SetFrame(v26, (const Caver::Rectangle *)&v36);
  v28 = this[37];
  v29 = *((float *)this[39] + 30) + *((float *)this[39] + 32);
  v36 = *(_QWORD *)((char *)v28 + 116);
  v37 = v21;
  v38 = v29;
  Caver::GUIView::SetFrame(v28, (const Caver::Rectangle *)&v36);
  v30 = (float *)this[37];
  v31 = v30[32];
  *(float *)&v32 = roundf((float)(*((float *)this + 34) + (float)(*((float *)this + 36) * 0.5)) - (float)(v31 * 0.5));
  v37 = v30[31];
  v38 = v31;
  v36 = __PAIR64__(v32, LODWORD(v20));
  return Caver::GUIView::SetFrame((Caver::GUIView *)v30, (const Caver::Rectangle *)&v36);
}

