/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B9BC8
 * Mangled: _ZN5Caver16GUITextFieldImpl14LayoutSubviewsEv
 * Demangled: Caver::GUITextFieldImpl::LayoutSubviews(void)
 *
 * Callers: 1
 *   0x00000000004B9B90  Caver::GUITextFieldImpl::~GUITextFieldImpl()
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 17
 *   insn=0x00000000004B9BD4 string=0x00000000004B9BD8 "T"
 *   insn=0x00000000004B9BE4 string=0x00000000004B9BE8 "2"
 *   insn=0x00000000004B9BE8 string=0x00000000004B9BEC "`"
 *   insn=0x00000000004B9BE8 string=0x00000000001F94B0 "0'"
 *   insn=0x00000000004B9BEC string=0x00000000004B9BF0 "brA"
 *   insn=0x00000000004B9BF0 string=0x00000000004B9BF4 "czA"
 *   insn=0x00000000004B9BF4 string=0x00000000004B9BF8 "dvA"
 *   insn=0x00000000004B9BF8 string=0x00000000004B9BFC "e~A"
 *   insn=0x00000000004B9C00 string=0x00000000004B9C04 "!8#"
 *   insn=0x00000000004B9C04 string=0x00000000004B9C08 "b"
 *   insn=0x00000000004B9C08 string=0x00000000004B9C0C "cBH"
 *   insn=0x00000000004B9C0C string=0x00000000004B9C10 "`"
 *   insn=0x00000000004B9C14 string=0x00000000004B9C18 "!8%"
 *   insn=0x00000000004B9C18 string=0x00000000004B9C1C "b"
 *   insn=0x00000000004B9C28 string=0x00000000004B9C2C "Q"
 *   insn=0x00000000004B9C2C string=0x00000000001FB170 "0'"
 *   insn=0x00000000004B9C50 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::LayoutSubviews(Caver::GUITextFieldImpl *this)
{
  float32x2_t v2; // d2
  Caver::GUIView *v3; // x0
  float v4; // s0
  float v5; // s1
  unsigned __int64 v7; // [xsp+8h] [xbp-28h] BYREF
  float v8; // [xsp+10h] [xbp-20h]
  float v9; // [xsp+14h] [xbp-1Ch]
  __int64 v10; // [xsp+18h] [xbp-18h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews(this);
  v2.n64_u32[0] = *((_DWORD *)this + 92);
  v2.n64_u32[1] = *((_DWORD *)this + 94);
  v3 = (Caver::GUIView *)*((_QWORD *)this + 41);
  v4 = (float)(*((float *)this + 35) - v2.n64_f32[0]) - *((float *)this + 93);
  v5 = (float)(*((float *)this + 36) - v2.n64_f32[1]) - *((float *)this + 95);
  v7 = vadd_f32(*(float32x2_t *)((char *)this + 132), v2).n64_u64[0];
  v8 = v4;
  v9 = v5;
  return Caver::GUIView::SetFrame(v3, (const Caver::Rectangle *)&v7);
}

