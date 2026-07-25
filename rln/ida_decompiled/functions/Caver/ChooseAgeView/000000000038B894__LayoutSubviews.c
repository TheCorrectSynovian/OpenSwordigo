/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038B894
 * Mangled: _ZN5Caver13ChooseAgeView14LayoutSubviewsEv
 * Demangled: Caver::ChooseAgeView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB1E0  Caver::Rectangle::RectangleByInsetting(float)
 *   0x00000000001FE4D0  Caver::ChooseAgeView::UpdateArrowFrames(void)
 *
 * Referenced strings: 28
 *   insn=0x000000000038B8A8 string=0x000000000038B8AC "U"
 *   insn=0x000000000038B8BC string=0x00000000001F94B0 "0'"
 *   insn=0x000000000038B8CC string=0x000000000038B8D0 "`~@"
 *   insn=0x000000000038B8D0 string=0x000000000038B8D4 "'"
 *   insn=0x000000000038B8D4 string=0x00000000001FB170 "0'"
 *   insn=0x000000000038B8E0 string=0x000000000038B8E4 "?"
 *   insn=0x000000000038B8E4 string=0x00000000001FB1E0 "0'"
 *   insn=0x000000000038B8EC string=0x000000000038B8F0 ""
 *   insn=0x000000000038B8F0 string=0x000000000038B8F4 "\t"
 *   insn=0x000000000038B904 string=0x000000000038B908 "@( "
 *   insn=0x000000000038B908 string=0x000000000038B90C "("
 *   insn=0x000000000038B920 string=0x000000000038B924 " (#"
 *   insn=0x000000000038B934 string=0x000000000038B938 ""($"
 *   insn=0x000000000038B93C string=0x000000000038B940 " ( "
 *   insn=0x000000000038B94C string=0x000000000038B950 "`"
 *   insn=0x000000000038B958 string=0x000000000038B95C "`"
 *   insn=0x000000000038B970 string=0x000000000038B974 "`"
 *   insn=0x000000000038B980 string=0x000000000038B984 "c8!"
 *   insn=0x000000000038B984 string=0x000000000038B988 "c""
 *   insn=0x000000000038B988 string=0x000000000038B98C "!(#"
 *   insn=0x000000000038B99C string=0x000000000038B9A0 "b""
 *   insn=0x000000000038B9A0 string=0x000000000038B9A4 "!8""
 *   insn=0x000000000038B9A8 string=0x000000000038B9AC "!@&"
 *   insn=0x000000000038B9BC string=0x000000000038B9C0 "h"
 *   insn=0x000000000038B9D0 string=0x000000000038B9D4 "h"
 *   insn=0x000000000038B9D0 string=0x00000000001F3C90 "P'"
 *   insn=0x000000000038B9F4 string=0x000000000038BA10 "0"
 *   insn=0x000000000038BA10 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ChooseAgeView::LayoutSubviews(Caver::GUIView **this)
{
  float *v2; // x0
  float v3; // s3
  __int128 v5; // [xsp+0h] [xbp-80h] BYREF
  int v6; // [xsp+10h] [xbp-70h] BYREF
  float v7; // [xsp+14h] [xbp-6Ch]
  float v8; // [xsp+18h] [xbp-68h]
  float v9; // [xsp+1Ch] [xbp-64h]
  __int64 v10; // [xsp+20h] [xbp-60h] BYREF
  float v11; // [xsp+28h] [xbp-58h]
  float v12; // [xsp+2Ch] [xbp-54h]
  __int128 v13; // [xsp+30h] [xbp-50h] BYREF
  __int64 v14; // [xsp+48h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews((Caver::GUIView *)this);
  v13 = *(_OWORD *)((char *)this + 132);
  Caver::GUIView::SetFrame(this[31], (const Caver::Rectangle *)&v13);
  Caver::Rectangle::RectangleByInsetting(&v10, (Caver::Rectangle *)((char *)this + 132), 0.0);
  v11 = (float)((float)((float)(*(float *)&v10 + 10.0)
                      + (float)((float)(*(float *)&v10 + v11) - (float)(*(float *)&v10 + 10.0)))
              + -10.0)
      - (float)(*(float *)&v10 + 10.0);
  v8 = v11;
  *(float *)&v10 = *(float *)&v10 + 10.0;
  v6 = v10;
  v12 = (float)((float)(*((float *)&v10 + 1) + v12) + -10.0) - *((float *)&v10 + 1);
  v9 = (float)(*((float *)&v10 + 1) + v12) - (float)(*((float *)&v10 + 1) + 45.0);
  v7 = *((float *)&v10 + 1) + 45.0;
  Caver::GUIView::SetFrame(this[33], (const Caver::Rectangle *)&v6);
  Caver::GUIView::SetFrame(this[35], (const Caver::Rectangle *)&v6);
  v2 = (float *)this[37];
  v3 = v2[32];
  *(float *)&v5 = *(float *)&v10 + 10.0;
  DWORD1(v5) = roundf((float)(*((float *)&v10 + 1) + (float)((float)(v7 - *((float *)&v10 + 1)) * 0.5)) - (float)(v3 * 0.5));
  *((float *)&v5 + 2) = (float)((float)((float)(*(float *)&v10 + 10.0)
                                      + (float)((float)(*(float *)&v10 + v11) - (float)(*(float *)&v10 + 10.0)))
                              + -10.0)
                      - (float)(*(float *)&v10 + 10.0);
  *((float *)&v5 + 3) = v3;
  Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)&v5);
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v5, (Caver::GUIView *)((char *)this[37] + 132), 20.0);
  *(_OWORD *)((char *)this[37] + 148) = v5;
  return Caver::ChooseAgeView::UpdateArrowFrames((Caver::ChooseAgeView *)this);
}

