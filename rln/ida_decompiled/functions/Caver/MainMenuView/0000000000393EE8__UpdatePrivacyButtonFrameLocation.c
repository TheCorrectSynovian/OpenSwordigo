/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000393EE8
 * Mangled: _ZN5Caver12MainMenuView32UpdatePrivacyButtonFrameLocationEv
 * Demangled: Caver::MainMenuView::UpdatePrivacyButtonFrameLocation(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 8
 *   insn=0x0000000000393EF4 string=0x0000000000393EF8 "T"
 *   insn=0x0000000000393F08 string=0x0000000000393F0C "i"
 *   insn=0x0000000000393F0C string=0x0000000000393F10 "`"
 *   insn=0x0000000000393F0C string=0x00000000001F5CB0 "P'"
 *   insn=0x0000000000393F28 string=0x0000000000393F2C "A(!"
 *   insn=0x0000000000393F30 string=0x0000000000393F34 ""
 *   insn=0x0000000000393F4C string=0x00000000001FB170 "0'"
 *   insn=0x0000000000393F70 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuView::UpdatePrivacyButtonFrameLocation(float **this)
{
  float *v2; // x0
  float v3; // s3
  float v5; // [xsp+8h] [xbp-38h]
  float v6; // [xsp+Ch] [xbp-34h]
  float v7; // [xsp+10h] [xbp-30h]
  float v8[4]; // [xsp+18h] [xbp-28h] BYREF
  __int64 v9; // [xsp+28h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::safeBounds((Caver::GUIView *)this);
  v2 = this[45];
  v3 = v2[31];
  v8[1] = v6 + 9.0;
  v8[2] = v3;
  v8[3] = v2[32];
  v8[0] = (float)((float)(v5 + v7) + -10.0) - v3;
  return Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)v8);
}

