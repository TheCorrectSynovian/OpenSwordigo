/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049D434
 * Mangled: _ZN5Caver9GUISlider10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::GUISlider::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 39
 *   insn=0x000000000049D440 string=0x000000000049D444 "T"
 *   insn=0x000000000049D45C string=0x000000000049D460 "8"
 *   insn=0x000000000049D460 string=0x000000000049D464 "a"
 *   insn=0x000000000049D464 string=0x000000000049D468 "f"
 *   insn=0x000000000049D468 string=0x000000000049D46C "d*A"
 *   insn=0x000000000049D46C string=0x000000000049D470 "`6A"
 *   insn=0x000000000049D470 string=0x000000000049D474 "b:A"
 *   insn=0x000000000049D474 string=0x000000000049D478 ""
 *   insn=0x000000000049D47C string=0x000000000049D480 "2(&"
 *   insn=0x000000000049D48C string=0x000000000049D490 "F8 "
 *   insn=0x000000000049D490 string=0x000000000049D494 "E:!"
 *   insn=0x000000000049D498 string=0x000000000049D49C "h"
 *   insn=0x000000000049D4A0 string=0x000000000049D4A4 "$:0"
 *   insn=0x000000000049D4A4 string=0x000000000049D4A8 "0(2"
 *   insn=0x000000000049D4A8 string=0x000000000049D4AC "p80"
 *   insn=0x000000000049D4AC string=0x000000000049D4B0 "pf"
 *   insn=0x000000000049D4B4 string=0x000000000049D4B8 "dj"
 *   insn=0x000000000049D4BC string=0x000000000049D4CC ""
 *   insn=0x000000000049D4C0 string=0x000000000049D4C4 "'\n'"
 *   insn=0x000000000049D4D4 string=0x000000000049D4D8 "h"
 *   insn=0x000000000049D4DC string=0x000000000049D4E0 "g8!"
 *   insn=0x000000000049D4E8 string=0x000000000049D4EC "('"
 *   insn=0x000000000049D4EC string=0x000000000049D4F0 "h"
 *   insn=0x000000000049D4F4 string=0x000000000049D4F8 "L'"
 *   insn=0x000000000049D4FC string=0x000000000049D500 "G"
 *   insn=0x000000000049D500 string=0x000000000049D504 "H"
 *   insn=0x000000000049D504 string=0x000000000049D50C "@ '"
 *   insn=0x000000000049D50C string=0x000000000049D510 "BL'"
 *   insn=0x000000000049D514 string=0x000000000049D518 "BL "
 *   insn=0x000000000049D518 string=0x000000000049D51C "@8 "
 *   insn=0x000000000049D524 string=0x000000000049D528 " ( "
 *   insn=0x000000000049D52C string=0x000000000049D530 "`8 "
 *   insn=0x000000000049D540 string=0x000000000049D544 "h"
 *   insn=0x000000000049D544 string=0x000000000049D548 "b&"
 *   insn=0x000000000049D548 string=0x000000000049D54C "b*"
 *   insn=0x000000000049D54C string=0x000000000049D550 "`f"
 *   insn=0x000000000049D550 string=0x000000000049D554 "dj"
 *   insn=0x000000000049D568 string=0x000000000049D57C "Uc"
 *   insn=0x000000000049D57C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::GUISlider::TouchBegan(Caver::GUISlider *this, const Caver::FWTouch *a2)
{
  __int64 *result; // x0
  float v4; // s1
  float v5; // s0
  float v6; // s2
  float v7; // s3
  float v8; // s6
  float v9; // s5
  __int64 v10; // x8
  float v11; // s4
  float v12; // s16
  float v13; // s16
  float v14; // s7
  float v15; // s7
  __int64 v16[2]; // [xsp+0h] [xbp-20h] BYREF

  v16[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = Caver::FWTouch::LocationInView(v16, a2, this);
  v4 = *((float *)this + 33);
  v5 = *((float *)this + 77);
  v6 = *((float *)this + 78);
  v7 = *(float *)v16;
  v8 = v6 - v5;
  v9 = (float)(v4 + *((float *)this + 35)) - v4;
  v10 = *((_QWORD *)this + 42);
  v11 = *((float *)v16 + 1) - (float)(*((float *)this + 34) + (float)(*((float *)this + 36) * 0.5));
  v12 = *(float *)v16 - (float)(v4 + (float)(v9 * (float)((float)(*((float *)this + 74) - v5) / (float)(v6 - v5))));
  *((float *)this + 89) = v12;
  v13 = fabsf(v12);
  *((float *)this + 90) = v11;
  if ( v10 )
    v14 = *(float *)(v10 + 84) * 0.5;
  else
    v14 = 5.0;
  *((_BYTE *)this + 353) = 1;
  if ( v13 >= v14 )
  {
    v15 = v5 + (float)(v8 * (float)((float)(v7 - v4) / v9));
    if ( v15 < v5 )
      v15 = v5;
    if ( v15 > v6 )
      v15 = v6;
    if ( *((_BYTE *)this + 364) )
      v15 = roundf(v15);
    if ( v6 >= v15 )
      v6 = v15;
    if ( v5 >= v6 )
      v6 = v5;
    *((_DWORD *)this + 75) = 0;
    *((_BYTE *)this + 352) = 1;
    *((float *)this + 73) = v6;
    *((float *)this + 74) = v6;
    *((float *)this + 89) = v7 - (float)(v4 + (float)(v9 * (float)((float)(v6 - v5) / v8)));
    *((float *)this + 90) = v11;
    return (__int64 *)Caver::GUIControl::SendActionsForControlEvent();
  }
  return result;
}

