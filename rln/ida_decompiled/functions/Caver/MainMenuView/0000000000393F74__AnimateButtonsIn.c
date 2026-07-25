/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000393F74
 * Mangled: _ZN5Caver12MainMenuView16AnimateButtonsInEf
 * Demangled: Caver::MainMenuView::AnimateButtonsIn(float)
 *
 * Callers: 1
 *   0x00000000001FAD50  Caver::MainMenuView::AnimateButtonsIn(float)
 *
 * Callees: 14
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B30  Caver::GUIButton::titleLabel(void)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FC220  Caver::GUIButton::SetTitle(std::string const&)
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 53
 *   insn=0x0000000000393F90 string=0x0000000000393F94 "V"
 *   insn=0x0000000000393F9C string=0x0000000000393FA0 ""
 *   insn=0x0000000000393FA4 string=0x0000000000393FA8 "h"
 *   insn=0x0000000000393FA8 string=0x0000000000393FAC "?"
 *   insn=0x0000000000393FAC string=0x0000000000393FB0 "`"
 *   insn=0x0000000000393FB4 string=0x0000000000393FB8 "*"
 *   insn=0x0000000000393FC0 string=0x0000000000393FC4 "\t"
 *   insn=0x0000000000393FC4 string=0x0000000000393FC8 "i"
 *   insn=0x0000000000393FD4 string=0x0000000000393FD8 " "
 *   insn=0x0000000000393FD8 string=0x0000000000393FDC "!"
 *   insn=0x0000000000393FFC string=0x00000000001F9C60 "0'"
 *   insn=0x0000000000394008 string=0x000000000039400C " "
 *   insn=0x0000000000394028 string=0x000000000039402C "]"
 *   insn=0x000000000039402C string=0x00000000001FA5A0 "0'"
 *   insn=0x0000000000394034 string=0x0000000000394038 "~"
 *   insn=0x0000000000394038 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000039403C string=0x0000000000394040 "4"
 *   insn=0x0000000000394040 string=0x0000000000394084 "h"
 *   insn=0x0000000000394044 string=0x0000000000394048 ""
 *   insn=0x0000000000394058 string=0x000000000039405C "\t@"
 *   insn=0x0000000000394064 string=0x0000000000394068 ""
 *   insn=0x0000000000394078 string=0x000000000039407C "@"
 *   insn=0x000000000039408C string=0x0000000000394090 ")"
 *   insn=0x00000000003940A4 string=0x00000000003940A8 "!"
 *   insn=0x00000000003940CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003940D4 string=0x00000000003940D8 "4"
 *   insn=0x00000000003940DC string=0x00000000003940E0 ""
 *   insn=0x00000000003940EC string=0x00000000003940F0 "\t@"
 *   insn=0x00000000003940FC string=0x0000000000394100 ""
 *   insn=0x000000000039410C string=0x0000000000394110 "@"
 *   insn=0x0000000000394138 string=0x000000000039413C "U"
 *   insn=0x000000000039414C string=0x0000000000394150 "`"
 *   insn=0x0000000000394150 string=0x0000000000394154 "w"
 *   insn=0x0000000000394154 string=0x00000000001F6B30 "0'"
 *   insn=0x0000000000394164 string=0x0000000000394168 "("
 *   insn=0x0000000000394168 string=0x000000000039416C "_"
 *   insn=0x000000000039416C string=0x0000000000394170 "a"
 *   insn=0x0000000000394170 string=0x0000000000394174 ""
 *   insn=0x0000000000394170 string=0x000000000039417C "`"
 *   insn=0x0000000000394174 string=0x0000000000394178 " "
 *   insn=0x0000000000394174 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000394180 string=0x0000000000394184 "'"
 *   insn=0x0000000000394184 string=0x0000000000394188 "t"
 *   insn=0x0000000000394184 string=0x00000000001FC220 "0'"
 *   insn=0x000000000039418C string=0x0000000000394190 "h"
 *   insn=0x00000000003941B0 string=0x00000000003941B4 "t"
 *   insn=0x00000000003941B0 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003941C4 string=0x00000000001F3C90 "P'"
 *   insn=0x00000000003941D8 string=0x00000000003941DC "`"
 *   insn=0x00000000003941D8 string=0x00000000001F5CB0 "P'"
 *   insn=0x00000000003941F4 string=0x00000000003941F8 "A(!"
 *   insn=0x00000000003941FC string=0x0000000000394200 ""
 *   insn=0x0000000000394228 string=0x0000000000394240 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::MainMenuView::AnimateButtonsIn(_QWORD *this, float a2)
{
  _QWORD *v2; // x19
  __int64 v4; // x8
  __int64 v5; // x23
  unsigned __int64 v6; // x24
  __int64 v7; // x9
  float *v8; // x20
  float v9; // s0
  float v10; // s1
  float v11; // s2
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  float v15[2]; // [xsp+58h] [xbp-80h] BYREF
  __int64 v16[3]; // [xsp+60h] [xbp-78h] BYREF
  _QWORD *v17; // [xsp+78h] [xbp-60h]
  __int64 v18; // [xsp+80h] [xbp-58h]

  v2 = this;
  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = this[47];
  if ( this[48] != v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = v2[33];
      v8 = *(float **)(v4 + v5);
      v9 = *(float *)(v7 + 132);
      v10 = *(float *)(v7 + 140);
      v11 = v8[29];
      v15[1] = 0.0;
      v15[0] = (float)(v9 + v10) - v11;
      Caver::Rectangle::TranslatedRectangle(v16, (Caver::Rectangle *)(v8 + 29), (const Caver::Vector2 *)v15);
      Caver::GUIAnimation::FrameAnimation();
      *(float *)(v16[2] + 88) = (float)((float)v6 * 0.05) + a2;
      Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v8);
      this = (_QWORD *)Caver::GUIView::AddAnimation();
      v12 = v17;
      if ( v17 )
      {
        v13 = v17[1] - 1LL;
        v17[1] = v13;
        if ( !v13 )
        {
          this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
          v14 = v12[2] - 1LL;
          v12[2] = v14;
          if ( !v14 )
            this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
        }
      }
      v4 = v2[47];
      ++v6;
      v5 += 16;
    }
    while ( v6 < (v2[48] - v4) >> 4 );
  }
  return this;
}

