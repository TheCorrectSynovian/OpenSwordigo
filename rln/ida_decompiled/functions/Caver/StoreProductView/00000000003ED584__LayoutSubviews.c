/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003ED584
 * Mangled: _ZN5Caver16StoreProductView14LayoutSubviewsEv
 * Demangled: Caver::StoreProductView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *
 * Referenced strings: 62
 *   insn=0x00000000003ED59C string=0x00000000003ED5A0 "U"
 *   insn=0x00000000003ED5B0 string=0x00000000003ED5B4 "`z@"
 *   insn=0x00000000003ED5B0 string=0x00000000001F94B0 "0'"
 *   insn=0x00000000003ED5B4 string=0x00000000003ED5B8 "a"
 *   insn=0x00000000003ED5BC string=0x00000000003ED5C0 "c"
 *   insn=0x00000000003ED5BC string=0x00000000001FB170 "0'"
 *   insn=0x00000000003ED5C0 string=0x00000000003ED5C4 "b"
 *   insn=0x00000000003ED5C4 string=0x00000000003ED5C8 "`"
 *   insn=0x00000000003ED5CC string=0x00000000003ED5D0 "d"
 *   insn=0x00000000003ED5D0 string=0x00000000003ED5D4 "@( "
 *   insn=0x00000000003ED5DC string=0x00000000003ED5E0 "\t"
 *   insn=0x00000000003ED5E4 string=0x00000000003ED5E8 "c($"
 *   insn=0x00000000003ED5E8 string=0x00000000003ED5EC "D)"
 *   insn=0x00000000003ED5F4 string=0x00000000003ED5F8 "a8$"
 *   insn=0x00000000003ED5F8 string=0x00000000003ED5FC "!@&"
 *   insn=0x00000000003ED608 string=0x00000000003ED60C "t"
 *   insn=0x00000000003ED60C string=0x00000000003ED610 ""
 *   insn=0x00000000003ED620 string=0x00000000001F3C90 "P'"
 *   insn=0x00000000003ED630 string=0x00000000003ED634 "`"
 *   insn=0x00000000003ED634 string=0x00000000003ED638 " "
 *   insn=0x00000000003ED638 string=0x00000000003ED63C "@G"
 *   insn=0x00000000003ED648 string=0x00000000003ED64C "`"
 *   insn=0x00000000003ED64C string=0x00000000003ED650 "a"
 *   insn=0x00000000003ED650 string=0x00000000003ED654 "`"
 *   insn=0x00000000003ED654 string=0x00000000003ED658 ""
 *   insn=0x00000000003ED65C string=0x00000000003ED660 "\t|@"
 *   insn=0x00000000003ED660 string=0x00000000003ED664 "!)"
 *   insn=0x00000000003ED668 string=0x00000000003ED66C "A)"
 *   insn=0x00000000003ED68C string=0x00000000003ED690 "h"
 *   insn=0x00000000003ED690 string=0x00000000003ED694 "i"
 *   insn=0x00000000003ED694 string=0x00000000003ED698 "`"
 *   insn=0x00000000003ED6A4 string=0x00000000003ED6A8 ""u@"
 *   insn=0x00000000003ED6A8 string=0x00000000003ED6AC "@G"
 *   insn=0x00000000003ED6B8 string=0x00000000003ED6BC "A(!"
 *   insn=0x00000000003ED6C0 string=0x00000000003ED6C4 "\n(""
 *   insn=0x00000000003ED6C4 string=0x00000000003ED6C8 "+8*"
 *   insn=0x00000000003ED6D8 string=0x00000000003ED6DC "`"
 *   insn=0x00000000003ED6E0 string=0x00000000003ED6E4 "@G"
 *   insn=0x00000000003ED6F4 string=0x00000000003ED6F8 "`"
 *   insn=0x00000000003ED6F8 string=0x00000000003ED6FC "<A"
 *   insn=0x00000000003ED708 string=0x00000000003ED70C "<"
 *   insn=0x00000000003ED710 string=0x00000000003ED714 "`"
 *   insn=0x00000000003ED710 string=0x00000000001F8510 "0'"
 *   insn=0x00000000003ED718 string=0x00000000003ED71C ""
 *   insn=0x00000000003ED71C string=0x00000000003ED720 "|+"
 *   insn=0x00000000003ED720 string=0x00000000003ED724 "t"
 *   insn=0x00000000003ED74C string=0x00000000003ED750 "h"
 *   insn=0x00000000003ED750 string=0x00000000003ED754 "t"
 *   insn=0x00000000003ED768 string=0x00000000003ED76C "(("
 *   insn=0x00000000003ED788 string=0x00000000003ED78C "y6"
 *   insn=0x00000000003ED78C string=0x00000000003ED790 "h"
 *   insn=0x00000000003ED790 string=0x00000000003ED794 "`"
 *   insn=0x00000000003ED7A0 string=0x00000000003ED7A4 "@G"
 *   insn=0x00000000003ED7B0 string=0x00000000003ED7B4 "o6"
 *   insn=0x00000000003ED7B4 string=0x00000000003ED7B8 "`"
 *   insn=0x00000000003ED7B8 string=0x00000000003ED7BC "`"
 *   insn=0x00000000003ED7BC string=0x00000000003ED7C0 "a"
 *   insn=0x00000000003ED7C8 string=0x00000000003ED7CC "|@"
 *   insn=0x00000000003ED7D0 string=0x00000000003ED7D4 " ( "
 *   insn=0x00000000003ED7D4 string=0x00000000003ED7D8 "A)"
 *   insn=0x00000000003ED7EC string=0x00000000003ED7F0 "`6"
 *   insn=0x00000000003ED820 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreProductView::LayoutSubviews(Caver::GUIView **this)
{
  float *v2; // x0
  float v3; // s2
  float v4; // s3
  unsigned int v5; // s0
  Caver::GUIView *v6; // x20
  Caver::GUIView *v7; // x0
  __int64 v8; // x8
  Caver::GUIView *v9; // x0
  float v10; // s2
  float v11; // s0
  Caver::GUIView *v12; // x0
  float v13; // s10
  float v14; // s11
  Caver::GUIView *v15; // x0
  __int64 v16; // x8
  Caver::GUIView *v17; // x0
  Caver::GUILabel *v18; // x20
  Caver::GUILabel *v19; // x20
  unsigned int v20; // s8
  Caver::GUIView *v21; // x0
  unsigned int v22; // s0
  Caver::GUIView *v23; // x0
  float v24; // s2
  unsigned int v25; // s0
  __int64 v27; // [xsp+8h] [xbp-68h] BYREF
  __int64 v28; // [xsp+10h] [xbp-60h] BYREF
  __int128 v29; // [xsp+18h] [xbp-58h] BYREF
  __int64 v30; // [xsp+28h] [xbp-48h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews((Caver::GUIView *)this);
  Caver::GUIView::SetFrame(this[30], (const Caver::Rectangle *)((char *)this + 132));
  v2 = (float *)this[32];
  v3 = v2[32];
  v4 = *((float *)this + 34) + (float)(*((float *)this + 36) * 0.5);
  *(float *)&v5 = (float)((float)(*((float *)this + 33) + *((float *)this + 35)) + -10.0) - v2[31];
  *((float *)&v29 + 2) = v2[31];
  *((float *)&v29 + 3) = v3;
  *(_QWORD *)&v29 = __PAIR64__(COERCE_UNSIGNED_INT(roundf(v4 - (float)(v3 * 0.5))), v5);
  Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)&v29);
  v6 = this[32];
  Caver::Rectangle::RectangleByOutsetting((__int64 *)&v29, (Caver::GUIView *)((char *)v6 + 132), 10.0);
  *(_OWORD *)((char *)v6 + 148) = v29;
  v7 = this[34];
  v8 = *(_QWORD *)((char *)v7 + 116);
  *((int32x2_t *)&v29 + 1) = vdup_n_s32(0x428C0000u);
  *(_QWORD *)&v29 = v8;
  Caver::GUIView::SetFrame(v7, (const Caver::Rectangle *)&v29);
  v9 = this[34];
  v10 = *((float *)v9 + 32);
  v11 = roundf((float)(*((float *)this + 34) + (float)(*((float *)this + 36) * 0.5)) - (float)(v10 * 0.5));
  DWORD2(v29) = *((_DWORD *)v9 + 31);
  *((float *)&v29 + 3) = v10;
  LODWORD(v29) = 1088421888;
  *((float *)&v29 + 1) = v11;
  Caver::GUIView::SetFrame(v9, (const Caver::Rectangle *)&v29);
  v12 = this[38];
  v13 = (float)(*((float *)this[34] + 29) + *((float *)this[34] + 31)) + 7.0;
  v14 = (float)(*((float *)this[32] + 29) + -7.0) - v13;
  *(_QWORD *)&v29 = *(_QWORD *)((char *)v12 + 116);
  *((float *)&v29 + 2) = v14;
  HIDWORD(v29) = 1120403456;
  Caver::GUIView::SetFrame(v12, (const Caver::Rectangle *)&v29);
  v15 = this[40];
  v16 = *(_QWORD *)((char *)v15 + 116);
  *((_QWORD *)&v29 + 1) = LODWORD(v14) | 0x42C8000000000000LL;
  *(_QWORD *)&v29 = v16;
  Caver::GUIView::SetFrame(v15, (const Caver::Rectangle *)&v29);
  v17 = this[40];
  if ( *((_DWORD *)v17 + 79) != 2 )
  {
    *((_DWORD *)v17 + 79) = 2;
    Caver::GUILabel::UpdateText(v17);
    v17 = this[40];
  }
  *((_BYTE *)v17 + 312) = 1;
  Caver::GUILabel::UpdateText(v17);
  v18 = this[40];
  Caver::GUILabel::TextSize(&v28, v18);
  *(_QWORD *)&v29 = 0;
  *((_QWORD *)&v29 + 1) = __PAIR64__(HIDWORD(v28), LODWORD(v14));
  Caver::GUIView::SetFrame(v18, (const Caver::Rectangle *)&v29);
  v19 = this[38];
  *(float *)&v20 = (float)(*((float *)this[40] + 30) + *((float *)this[40] + 32)) + 10.0;
  Caver::GUILabel::TextSize(&v27, v19);
  LODWORD(v29) = 0;
  *(_QWORD *)((char *)&v29 + 4) = __PAIR64__(LODWORD(v14), v20);
  HIDWORD(v29) = HIDWORD(v27);
  Caver::GUIView::SetFrame(v19, (const Caver::Rectangle *)&v29);
  v21 = this[36];
  *(float *)&v22 = *((float *)this[38] + 30) + *((float *)this[38] + 32);
  *(_QWORD *)&v29 = *(_QWORD *)((char *)v21 + 116);
  *((_QWORD *)&v29 + 1) = __PAIR64__(v22, LODWORD(v14));
  Caver::GUIView::SetFrame(v21, (const Caver::Rectangle *)&v29);
  v23 = this[36];
  v24 = *((float *)v23 + 32);
  *(float *)&v25 = roundf((float)(*((float *)this + 34) + (float)(*((float *)this + 36) * 0.5)) - (float)(v24 * 0.5));
  DWORD2(v29) = *((_DWORD *)v23 + 31);
  *((float *)&v29 + 3) = v24;
  *(_QWORD *)&v29 = __PAIR64__(v25, LODWORD(v13));
  return Caver::GUIView::SetFrame(v23, (const Caver::Rectangle *)&v29);
}

