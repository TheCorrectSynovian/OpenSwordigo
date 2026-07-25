/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038BA14
 * Mangled: _ZN5Caver13ChooseAgeView17UpdateArrowFramesEv
 * Demangled: Caver::ChooseAgeView::UpdateArrowFrames(void)
 *
 * Callers: 1
 *   0x00000000001FE4D0  Caver::ChooseAgeView::UpdateArrowFrames(void)
 *
 * Callees: 5
 *   0x00000000001F3B80  Caver::GUIView::ConvertPointFromView(Caver::Vector2 const&,Caver::GUIView*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F70D0  Caver::GUISlider::IndicatorCenter(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *
 * Referenced strings: 27
 *   insn=0x000000000038BA24 string=0x000000000038BA28 "T"
 *   insn=0x000000000038BA34 string=0x000000000038BA38 "`"
 *   insn=0x000000000038BA40 string=0x000000000038BA44 "h"
 *   insn=0x000000000038BA40 string=0x00000000001F70D0 "0'"
 *   insn=0x000000000038BA44 string=0x000000000038BA48 "*"
 *   insn=0x000000000038BA48 string=0x000000000038BA4C "@"
 *   insn=0x000000000038BA50 string=0x000000000038BA54 "\t"
 *   insn=0x000000000038BA54 string=0x000000000038BA58 ""
 *   insn=0x000000000038BA5C string=0x000000000038BA60 " "
 *   insn=0x000000000038BA64 string=0x000000000038BA68 "!"
 *   insn=0x000000000038BA68 string=0x000000000038BA6C "B("
 *   insn=0x000000000038BA6C string=0x000000000038BA70 "A"
 *   insn=0x000000000038BA7C string=0x000000000038BA80 "b"
 *   insn=0x000000000038BA88 string=0x000000000038BA8C "="
 *   insn=0x000000000038BA8C string=0x00000000001F3B80 "P'"
 *   insn=0x000000000038BA98 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000038BAA4 string=0x000000000038BAA8 "`"
 *   insn=0x000000000038BAAC string=0x000000000038BAB0 "h"
 *   insn=0x000000000038BAAC string=0x00000000001FB170 "0'"
 *   insn=0x000000000038BABC string=0x000000000038BAC0 "\t"
 *   insn=0x000000000038BAC8 string=0x000000000038BACC "A(!"
 *   insn=0x000000000038BAD0 string=0x000000000038BAD4 "B("
 *   insn=0x000000000038BAD4 string=0x000000000038BAD8 "!8""
 *   insn=0x000000000038BAE0 string=0x000000000038BAE4 "b"
 *   insn=0x000000000038BAEC string=0x000000000038BAF0 "$"
 *   insn=0x000000000038BB08 string=0x000000000038BB0C "`"
 *   insn=0x000000000038BB38 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ChooseAgeView::UpdateArrowFrames(Caver::GUISlider **this)
{
  Caver::GUISlider *v2; // x8
  unsigned __int32 v3; // w9
  float32x2_t v4; // d1
  Caver::GUISlider *v5; // x8
  int v6; // w9
  float v8[4]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v9; // [xsp+10h] [xbp-60h] BYREF
  int v10; // [xsp+18h] [xbp-58h]
  int v11; // [xsp+1Ch] [xbp-54h]
  _BYTE v12[8]; // [xsp+20h] [xbp-50h] BYREF
  __int64 v13; // [xsp+28h] [xbp-48h] BYREF
  __int64 v14; // [xsp+30h] [xbp-40h] BYREF
  unsigned __int32 v15; // [xsp+38h] [xbp-38h]
  int v16; // [xsp+3Ch] [xbp-34h]
  float32x2_t v17; // [xsp+40h] [xbp-30h]
  __int64 v18; // [xsp+48h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUISlider::IndicatorCenter(this[37]);
  v2 = this[39];
  v3 = *((_DWORD *)v2 + 31);
  LODWORD(v2) = *((_DWORD *)v2 + 32);
  v4.n64_u32[0] = v3;
  v4.n64_f32[1] = *(float *)&v2 * 0.5;
  v15 = v3;
  v16 = (int)v2;
  v13 = vsub_f32(vadd_f32(v17, (float32x2_t)0xBF800000C1600000LL), v4).n64_i64[0];
  Caver::GUIView::ConvertPointFromView();
  Caver::Vector2::Rounded(&v9, (Caver::Vector2 *)v12);
  v14 = v9;
  Caver::GUIView::SetFrame(this[39], (const Caver::Rectangle *)&v14);
  v5 = this[41];
  v6 = *((_DWORD *)v5 + 31);
  LODWORD(v5) = *((_DWORD *)v5 + 32);
  v10 = v6;
  v11 = (int)v5;
  v8[2] = v17.n64_f32[0] + 16.0;
  v8[3] = (float)(v17.n64_f32[1] + -1.0) - (float)(*(float *)&v5 * 0.5);
  Caver::GUIView::ConvertPointFromView();
  Caver::Vector2::Rounded(&v13, (Caver::Vector2 *)v8);
  v9 = v13;
  return Caver::GUIView::SetFrame(this[41], (const Caver::Rectangle *)&v9);
}

