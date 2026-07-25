/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A5D34
 * Mangled: _ZN5Caver12GUIAnimationC2Ev
 * Demangled: Caver::GUIAnimation::GUIAnimation(void)
 *
 * Callers: 2
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001FA7B0  Caver::GUIAnimation::GUIAnimation(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB0E0  Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x00000000004A5D40 string=0x00000000004A5D44 "T"
 *   insn=0x00000000004A5D54 string=0x00000000004A5D58 "A"
 *   insn=0x00000000004A5D5C string=0x00000000004A5D60 "`"
 *   insn=0x00000000004A5D80 string=0x00000000001FB0E0 "0'"
 *   insn=0x00000000004A5D88 string=0x00000000004A5D8C "`6"
 *   insn=0x00000000004A5DBC string=0x00000000004A5DC0 "hr"
 *   insn=0x00000000004A5DC0 string=0x00000000004A5DC4 "`."
 *   insn=0x00000000004A5DD4 string=0x00000000004A5DE8 ":A"
 *   insn=0x00000000004A5DE8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A5DF0 string=0x00000000004A5DF4 "H"
 *   insn=0x00000000004A5DF4 string=0x00000000004A5DF8 ""
 *   insn=0x00000000004A5DF4 string=0x00000000004A5E1C "`"
 *   insn=0x00000000004A5DF8 string=0x00000000004A5DFC ""
 *   insn=0x00000000004A5DFC string=0x00000000004A5E00 ""
 *   insn=0x00000000004A5E04 string=0x00000000004A5E08 "`b"
 *   insn=0x00000000004A5E20 string=0x00000000004A5E24 "@"
 *   insn=0x00000000004A5E24 string=0x00000000004A5E28 ""
 *   insn=0x00000000004A5E28 string=0x00000000004A5E2C ""
 *   insn=0x00000000004A5E30 string=0x00000000004A5E34 ""
 *   insn=0x00000000004A5E34 string=0x00000000004A5E38 "@"
 *   insn=0x00000000004A5E44 string=0x00000000004A5E48 "h"
 *   insn=0x00000000004A5E50 string=0x00000000004A5E54 "\t\t@"
 *   insn=0x00000000004A5E54 string=0x00000000004A5E58 ")"
 *   insn=0x00000000004A5E58 string=0x00000000004A5E5C "\t\t"
 *   insn=0x00000000004A5E60 string=0x00000000004A5E64 "\t"
 *   insn=0x00000000004A5E64 string=0x00000000004A5E68 ")@"
 *   insn=0x00000000004A5E6C string=0x00000000004A5E70 " "
 *   insn=0x00000000004A5E80 string=0x00000000004A5E84 "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::GUIAnimation::GUIAnimation(Caver::GUIAnimation *this)
{
  double result; // d0
  __int64 v3; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v4[2]; // [xsp+10h] [xbp-20h] BYREF

  v4[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 12) = 0;
  v3 = 0x3F8000003F000000LL;
  v4[0] = 1056964608;
  Caver::GUIAnimationCurve::GUIAnimationCurve(
    (Caver::GUIAnimation *)((char *)this + 52),
    (const Caver::Vector2 *)v4,
    (const Caver::Vector2 *)&v3);
  *((_QWORD *)this + 13) = 0x3F0000003F000000LL;
  result = 0.000000381469818;
  *((_BYTE *)this + 84) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_BYTE *)this + 100) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_BYTE *)this + 186) = 0;
  *((_WORD *)this + 92) = 1;
  *((_QWORD *)this + 11) = 0x3E99999A00000000LL;
  return result;
}

