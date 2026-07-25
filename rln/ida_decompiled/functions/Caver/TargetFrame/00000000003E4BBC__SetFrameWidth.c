/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E4BBC
 * Mangled: _ZN5Caver11TargetFrame13SetFrameWidthEf
 * Demangled: Caver::TargetFrame::SetFrameWidth(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 11
 *   insn=0x00000000003E4BC8 string=0x00000000003E4BCC "S"
 *   insn=0x00000000003E4BCC string=0x00000000003E4BD0 "h"
 *   insn=0x00000000003E4BE8 string=0x00000000003E4BEC "x@"
 *   insn=0x00000000003E4BEC string=0x00000000003E4BF0 "\t"
 *   insn=0x00000000003E4BF4 string=0x00000000003E4BF8 "B!"
 *   insn=0x00000000003E4BFC string=0x00000000003E4C00 "b(""
 *   insn=0x00000000003E4C00 string=0x00000000003E4C04 "A8!"
 *   insn=0x00000000003E4C18 string=0x00000000003E4C1C "UY"
 *   insn=0x00000000003E4C1C string=0x00000000003E4C20 "h"
 *   insn=0x00000000003E4C1C string=0x00000000001FB170 "0'"
 *   insn=0x00000000003E4C40 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TargetFrame::SetFrameWidth(Caver::TargetFrame *this, float a2)
{
  float v2; // s0
  float v3; // w8
  float v4; // w9
  float v5; // s0
  float v7[4]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v8; // [xsp+18h] [xbp-18h]

  v2 = roundf(a2 * 0.5);
  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *((float *)this + 30);
  v4 = *((float *)this + 32);
  v5 = v2 + v2;
  v7[0] = (float)(*((float *)this + 29) + (float)(*((float *)this + 31) * 0.5)) - (float)(v5 * 0.5);
  v7[1] = v3;
  v7[2] = v5;
  v7[3] = v4;
  return Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)v7);
}

