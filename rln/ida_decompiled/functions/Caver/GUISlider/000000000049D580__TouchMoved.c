/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049D580
 * Mangled: _ZN5Caver9GUISlider10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::GUISlider::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 26
 *   insn=0x000000000049D58C string=0x000000000049D590 "T"
 *   insn=0x000000000049D59C string=0x000000000049D5A0 "h"
 *   insn=0x000000000049D5B8 string=0x000000000049D5BC "bfA"
 *   insn=0x000000000049D5BC string=0x000000000049D5C0 "c"
 *   insn=0x000000000049D5C0 string=0x000000000049D5C4 "d"
 *   insn=0x000000000049D5C4 string=0x000000000049D5C8 "`6A"
 *   insn=0x000000000049D5C8 string=0x000000000049D5CC ""8""
 *   insn=0x000000000049D5CC string=0x000000000049D5D0 "a:A"
 *   insn=0x000000000049D5D0 string=0x000000000049D5D4 "d($"
 *   insn=0x000000000049D5D4 string=0x000000000049D5D8 "B8#"
 *   insn=0x000000000049D5DC string=0x000000000049D5E0 "B"
 *   insn=0x000000000049D5E0 string=0x000000000049D5E4 "#8 "
 *   insn=0x000000000049D5E4 string=0x000000000049D5E8 "B#"
 *   insn=0x000000000049D5EC string=0x000000000049D5F0 "h"
 *   insn=0x000000000049D5F0 string=0x000000000049D5F4 "@  "
 *   insn=0x000000000049D5F8 string=0x000000000049D5FC "@ !"
 *   insn=0x000000000049D5FC string=0x000000000049D600 """
 *   insn=0x000000000049D600 string=0x000000000049D604 "H"
 *   insn=0x000000000049D604 string=0x000000000049D608 "B@&"
 *   insn=0x000000000049D604 string=0x000000000049D60C "  ""
 *   insn=0x000000000049D60C string=0x000000000049D610 "!L""
 *   insn=0x000000000049D618 string=0x000000000049D61C " L "
 *   insn=0x000000000049D62C string=0x000000000049D630 "`&"
 *   insn=0x000000000049D630 string=0x000000000049D634 "`*"
 *   insn=0x000000000049D634 string=0x000000000049D638 "h"
 *   insn=0x000000000049D660 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::GUISlider::TouchMoved(float *this, const Caver::FWTouch *a2)
{
  float *v2; // x19
  float v3; // s0
  float v4; // s1
  float v5; // s2
  __int64 v6[2]; // [xsp+0h] [xbp-20h] BYREF

  v2 = this;
  v6[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 353) )
  {
    Caver::FWTouch::LocationInView(v6, a2, (const Caver::GUIView *)this);
    v3 = v2[77];
    v4 = v2[78];
    v5 = v3
       + (float)((float)((float)((float)(*(float *)v6 - v2[89]) - v2[33]) / (float)((float)(v2[33] + v2[35]) - v2[33]))
               * (float)(v4 - v3));
    if ( v5 < v3 )
      v5 = v2[77];
    if ( v5 > v4 )
      v5 = v2[78];
    if ( *((_BYTE *)v2 + 364) )
      v5 = roundf(v5);
    if ( v4 >= v5 )
      v4 = v5;
    if ( v3 < v4 )
      v3 = v4;
    v2[75] = 0.0;
    v2[73] = v3;
    v2[74] = v3;
    *((_BYTE *)v2 + 352) = 1;
    return (float *)Caver::GUIControl::SendActionsForControlEvent();
  }
  return this;
}

