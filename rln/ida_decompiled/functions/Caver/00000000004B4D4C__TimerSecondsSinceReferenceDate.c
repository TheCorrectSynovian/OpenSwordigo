/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B4D4C
 * Mangled: _ZN5Caver30TimerSecondsSinceReferenceDateEv
 * Demangled: Caver::TimerSecondsSinceReferenceDate(void)
 *
 * Callers: 1
 *   0x00000000001FB250  Caver::TimerSecondsSinceReferenceDate(void)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBA20  boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *   0x00000000004B4C08  sub_4B4C08
 *
 * Referenced strings: 13
 *   insn=0x00000000004B4D58 string=0x00000000004B4D5C "S"
 *   insn=0x00000000004B4D5C string=0x00000000004B4D60 "h"
 *   insn=0x00000000004B4D64 string=0x00000000004B4D68 "!"
 *   insn=0x00000000004B4D74 string=0x00000000004B4D78 "*"
 *   insn=0x00000000004B4D78 string=0x00000000001FBA20 "0'"
 *   insn=0x00000000004B4D7C string=0x00000000004B4D80 "\t"
 *   insn=0x00000000004B4D8C string=0x00000000004B4D90 "\t"
 *   insn=0x00000000004B4D90 string=0x00000000004B4D94 "}\t"
 *   insn=0x00000000004B4D94 string=0x00000000004B4D98 "i"
 *   insn=0x00000000004B4D9C string=0x00000000004B4DA0 "(1"
 *   insn=0x00000000004B4DAC string=0x00000000004B4DB0 "h"
 *   insn=0x00000000004B4DBC string=0x00000000004B4DD0 "@"
 *   insn=0x00000000004B4DD0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::TimerSecondsSinceReferenceDate(Caver *this)
{
  __int64 v1; // x11
  __int64 v2; // x8
  unsigned int v4; // [xsp+8h] [xbp-28h]
  __int64 v5[2]; // [xsp+10h] [xbp-20h] BYREF

  v5[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  boost::gregorian::date::date();
  v1 = v4 + 2;
  v2 = 86400000000LL * v4;
  if ( (unsigned int)v1 < 3 )
    v2 = v1 + 0x7FFFFFFFFFFFFFFELL;
  v5[0] = v2;
  return sub_4B4C08(v5);
}

