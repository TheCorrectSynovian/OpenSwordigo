/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041A96C
 * Mangled: _ZN5Caver12ItemInfoView14LayoutSubviewsEv
 * Demangled: Caver::ItemInfoView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F42C0  Caver::ItemInfoView::AddAnimations(bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 42
 *   insn=0x000000000041A980 string=0x000000000041A984 "U"
 *   insn=0x000000000041A990 string=0x000000000041A994 "`z@"
 *   insn=0x000000000041A998 string=0x000000000041A9D0 "`"
 *   insn=0x000000000041A99C string=0x000000000041A9A0 "c"
 *   insn=0x000000000041A9A0 string=0x000000000041A9A4 "b"
 *   insn=0x000000000041A9AC string=0x000000000041A9B0 "c(%"
 *   insn=0x000000000041A9B0 string=0x000000000041A9B4 "A(!"
 *   insn=0x000000000041A9B8 string=0x000000000041A9BC "A(!"
 *   insn=0x000000000041A9CC string=0x00000000001FB170 "0'"
 *   insn=0x000000000041A9D8 string=0x000000000041A9DC "a"
 *   insn=0x000000000041A9D8 string=0x000000000041AA18 "`"
 *   insn=0x000000000041A9E0 string=0x000000000041A9E4 "b"
 *   insn=0x000000000041A9E8 string=0x000000000041A9EC "!#"
 *   insn=0x000000000041A9EC string=0x000000000041A9F0 "c"
 *   insn=0x000000000041A9F0 string=0x000000000041A9F4 "A(!"
 *   insn=0x000000000041A9F4 string=0x000000000041A9F8 "!8#"
 *   insn=0x000000000041A9FC string=0x000000000041AA00 "!@&"
 *   insn=0x000000000041AA1C string=0x000000000041AA20 "`"
 *   insn=0x000000000041AA1C string=0x000000000041AA58 "`"
 *   insn=0x000000000041AA24 string=0x000000000041AA28 "b"
 *   insn=0x000000000041AA30 string=0x000000000041AA34 "c"
 *   insn=0x000000000041AA34 string=0x000000000041AA38 "@( "
 *   insn=0x000000000041AA5C string=0x000000000041AA60 "h"
 *   insn=0x000000000041AA5C string=0x000000000041AAAC "h"
 *   insn=0x000000000041AA60 string=0x000000000041AA64 "\t"
 *   insn=0x000000000041AA74 string=0x000000000041AA78 "$"
 *   insn=0x000000000041AA7C string=0x000000000041AA80 "  "
 *   insn=0x000000000041AA84 string=0x000000000041AA88 "@( "
 *   insn=0x000000000041AA88 string=0x000000000041AA8C "a(!"
 *   insn=0x000000000041AA8C string=0x000000000041AA90 "B"
 *   insn=0x000000000041AA94 string=0x000000000041AA98 "!8""
 *   insn=0x000000000041AAB4 string=0x000000000041AAB8 "t"
 *   insn=0x000000000041AAB8 string=0x000000000041AABC ""
 *   insn=0x000000000041AAC4 string=0x000000000041AAC8 "!(("
 *   insn=0x000000000041AAC8 string=0x000000000041AACC "  "
 *   insn=0x000000000041AAE4 string=0x000000000041AAE8 "^|"
 *   insn=0x000000000041AAE8 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000041AAF4 string=0x000000000041AAF8 "h"
 *   insn=0x000000000041AAF8 string=0x000000000041AAFC "`"
 *   insn=0x000000000041AB08 string=0x000000000041AB0C "y@"
 *   insn=0x000000000041AB34 string=0x00000000001F42C0 "P'"
 *   insn=0x000000000041AB60 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemInfoView::LayoutSubviews(Caver::ItemInfoView *this)
{
  __int64 v2; // x0
  unsigned __int64 v3; // d0
  float v4; // s3
  __int64 v5; // x0
  unsigned __int64 v6; // d0
  __int64 v7; // x0
  unsigned __int64 v8; // d1
  float *v9; // x0
  float *v10; // x8
  float v11; // w9
  float v12; // s3
  float v13; // s2
  __int64 v14; // x8
  __int64 v15; // x20
  __int64 v16; // x8
  Caver::GUIView *v17; // x0
  float v18; // s0
  float v19; // s1
  unsigned __int64 v20; // [xsp+0h] [xbp-50h]
  _DWORD v21[2]; // [xsp+10h] [xbp-40h] BYREF
  __int64 v22; // [xsp+18h] [xbp-38h] BYREF
  unsigned __int64 v23; // [xsp+20h] [xbp-30h]
  __int64 v24; // [xsp+28h] [xbp-28h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 30);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 124);
    v4 = *((float *)this + 34) + 6.0;
    *(float *)&v22 = (float)(-6.0 - *(float *)&v3) + (float)(*((float *)this + 33) + *((float *)this + 35));
    *((float *)&v22 + 1) = v4;
    v23 = v3;
    Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)&v22);
  }
  v5 = *((_QWORD *)this + 34);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 124);
    v22 = COERCE_UNSIGNED_INT(roundf((float)(*((float *)this + 33) + (float)(*((float *)this + 35) * 0.5)) - vmuls_n_f32(0.5, *(float *)&v6)))
        | 0x434A000000000000LL;
    v23 = v6;
    Caver::GUIView::SetFrame((Caver::GUIView *)v5, (const Caver::Rectangle *)&v22);
  }
  v7 = *((_QWORD *)this + 36);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 124);
    v22 = COERCE_UNSIGNED_INT(roundf((float)(*((float *)this + 33) + (float)(*((float *)this + 35) * 0.5)) - vmuls_n_f32(0.5, *(float *)&v8)))
        | 0x42DC000000000000LL;
    v23 = v8;
    Caver::GUIView::SetFrame((Caver::GUIView *)v7, (const Caver::Rectangle *)&v22);
  }
  v9 = (float *)*((_QWORD *)this + 42);
  if ( v9 )
  {
    v10 = (float *)*((_QWORD *)this + 36);
    v11 = v9[31];
    v12 = v10[30];
    v13 = v9[32];
    LODWORD(v22) = roundf((float)(v10[29] + (float)(v10[31] * 0.5)) - (float)(v11 * 0.5));
    *((float *)&v22 + 1) = (float)(v12 + -20.0) - v13;
    v23 = __PAIR64__(LODWORD(v13), LODWORD(v11));
    Caver::GUIView::SetFrame((Caver::GUIView *)v9, (const Caver::Rectangle *)&v22);
  }
  v14 = *((_QWORD *)this + 44);
  if ( v14 )
  {
    v15 = *((_QWORD *)this + 42);
    v20 = *(_QWORD *)(v14 + 124);
    v21[0] = roundf((float)(*(float *)&v20 + 20.0) * -0.5);
    v21[1] = 0;
    Caver::Rectangle::TranslatedRectangle(&v22, (Caver::Rectangle *)(v15 + 116), (const Caver::Vector2 *)v21);
    Caver::GUIView::SetFrame((Caver::GUIView *)v15, (const Caver::Rectangle *)&v22);
    v16 = *((_QWORD *)this + 42);
    v17 = (Caver::GUIView *)*((_QWORD *)this + 44);
    v18 = *(float *)(v16 + 116);
    v19 = *(float *)(v16 + 124);
    LODWORD(v16) = *(_DWORD *)(v16 + 120);
    *(float *)&v22 = (float)(v18 + v19) + 20.0;
    HIDWORD(v22) = v16;
    v23 = v20;
    Caver::GUIView::SetFrame(v17, (const Caver::Rectangle *)&v22);
  }
  Caver::ItemInfoView::AddAnimations(this);
}

