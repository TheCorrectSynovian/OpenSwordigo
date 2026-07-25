/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000495598
 * Mangled: _ZN5Caver9GUIButton14LayoutSubviewsEv
 * Demangled: Caver::GUIButton::LayoutSubviews(void)
 *
 * Callers: 1
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *
 * Callees: 4
 *   0x00000000001F5550  Caver::GUIRoundedRect::CreateWithOuterBounds(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 26
 *   insn=0x00000000004955A4 string=0x00000000004955A8 "T"
 *   insn=0x00000000004955B4 string=0x00000000004955B8 "`"
 *   insn=0x00000000004955B8 string=0x00000000004955BC "`"
 *   insn=0x00000000004955BC string=0x00000000004955C0 "a"
 *   insn=0x00000000004955BC string=0x00000000004955C8 "`"
 *   insn=0x00000000004955C4 string=0x00000000001F5550 "P'"
 *   insn=0x00000000004955C8 string=0x00000000004955CC "`"
 *   insn=0x00000000004955CC string=0x00000000004955D0 "a"
 *   insn=0x00000000004955CC string=0x00000000004955D8 "`"
 *   insn=0x00000000004955D8 string=0x00000000004955DC "`"
 *   insn=0x00000000004955DC string=0x00000000004955E0 "a"
 *   insn=0x00000000004955DC string=0x00000000004955E8 "`"
 *   insn=0x00000000004955E8 string=0x00000000004955EC " "
 *   insn=0x00000000004955EC string=0x00000000004955F0 "a"
 *   insn=0x00000000004955F0 string=0x00000000004955F4 "c"
 *   insn=0x00000000004955F4 string=0x00000000004955F8 "d"
 *   insn=0x00000000004955F8 string=0x00000000004955FC "`BH"
 *   insn=0x00000000004955FC string=0x0000000000495600 "e"
 *   insn=0x0000000000495600 string=0x0000000000495604 "f"
 *   insn=0x0000000000495604 string=0x0000000000495608 "!8#"
 *   insn=0x0000000000495608 string=0x000000000049560C "B8$"
 *   insn=0x0000000000495610 string=0x0000000000495614 "!8%"
 *   insn=0x0000000000495614 string=0x0000000000495618 "B8&"
 *   insn=0x000000000049562C string=0x00000000001FB170 "0'"
 *   insn=0x0000000000495634 string=0x00000000001F94B0 "0'"
 *   insn=0x0000000000495658 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::LayoutSubviews(Caver::GUIButton *this)
{
  Caver::GUIRoundedRect *v2; // x0
  Caver::GUIRoundedRect *v3; // x0
  Caver::GUIRoundedRect *v4; // x0
  Caver::GUIView *v5; // x0
  float32x2_t v6; // d3
  float v7; // s1
  float v8; // s2
  unsigned __int64 v10; // [xsp+8h] [xbp-28h] BYREF
  float v11; // [xsp+10h] [xbp-20h]
  float v12; // [xsp+14h] [xbp-1Ch]
  __int64 v13; // [xsp+18h] [xbp-18h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::GUIRoundedRect *)*((_QWORD *)this + 37);
  if ( v2 )
    Caver::GUIRoundedRect::CreateWithOuterBounds(v2, (Caver::GUIButton *)((char *)this + 132));
  v3 = (Caver::GUIRoundedRect *)*((_QWORD *)this + 38);
  if ( v3 )
    Caver::GUIRoundedRect::CreateWithOuterBounds(v3, (Caver::GUIButton *)((char *)this + 132));
  v4 = (Caver::GUIRoundedRect *)*((_QWORD *)this + 39);
  if ( v4 )
    Caver::GUIRoundedRect::CreateWithOuterBounds(v4, (Caver::GUIButton *)((char *)this + 132));
  v5 = (Caver::GUIView *)*((_QWORD *)this + 40);
  if ( v5 )
  {
    v6.n64_u32[0] = *((_DWORD *)this + 104);
    v6.n64_u32[1] = *((_DWORD *)this + 106);
    v7 = (float)(*((float *)this + 35) - v6.n64_f32[0]) - *((float *)this + 105);
    v8 = (float)(*((float *)this + 36) - v6.n64_f32[1]) - *((float *)this + 107);
    v10 = vadd_f32(*(float32x2_t *)((char *)this + 132), v6).n64_u64[0];
    v11 = v7;
    v12 = v8;
    Caver::GUIView::SetFrame(v5, (const Caver::Rectangle *)&v10);
  }
  return Caver::GUIView::LayoutSubviews(this);
}

