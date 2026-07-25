/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6918
 * Mangled: _ZN5boost9gregorian16bad_day_of_monthC2Ev
 * Demangled: boost::gregorian::bad_day_of_month::bad_day_of_month(void)
 *
 * Callers: 1
 *   0x00000000001FBF50  boost::gregorian::bad_day_of_month::bad_day_of_month(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000054AADC  sub_54AADC
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 45
 *   insn=0x00000000004B6924 string=0x00000000004B6928 "T"
 *   insn=0x00000000004B6938 string=0x0000000000597433 "Day of month value is out of range 1..31"
 *   insn=0x00000000004B6950 string=0x00000000004B6954 "bP"
 *   insn=0x00000000004B6958 string=0x00000000004B695C "i"
 *   insn=0x00000000004B695C string=0x00000000004B6960 ")"
 *   insn=0x00000000004B696C string=0x00000000004B6970 "h"
 *   insn=0x00000000004B696C string=0x00000000004B69A0 "i"
 *   insn=0x00000000004B6970 string=0x00000000004B6974 "mC"
 *   insn=0x00000000004B6974 string=0x00000000004B6978 "A"
 *   insn=0x00000000004B6978 string=0x00000000004B697C "h"
 *   insn=0x00000000004B698C string=0x00000000004B69E4 ";"
 *   insn=0x00000000004B69A0 string=0x00000000004B69A4 ")=G"
 *   insn=0x00000000004B69A4 string=0x00000000004B69A8 "!"
 *   insn=0x00000000004B69AC string=0x00000000004B69B0 "\t"
 *   insn=0x00000000004B69AC string=0x00000000004B69C4 "\t"
 *   insn=0x00000000004B69B0 string=0x00000000004B69B4 "*"
 *   insn=0x00000000004B69B4 string=0x00000000004B69B8 "\n"
 *   insn=0x00000000004B69C0 string=0x00000000004B69D0 "?"
 *   insn=0x00000000004B69C4 string=0x00000000004B69C8 "*"
 *   insn=0x00000000004B69C8 string=0x00000000004B69CC "\n"
 *   insn=0x00000000004B69D8 string=0x00000000004B69DC "r"
 *   insn=0x00000000004B69E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B69E8 string=0x00000000004B69EC "j"
 *   insn=0x00000000004B69EC string=0x00000000004B69F0 "J"
 *   insn=0x00000000004B69F4 string=0x00000000004B69F8 "(a"
 *   insn=0x00000000004B6A00 string=0x00000000004B6A04 "j"
 *   insn=0x00000000004B6A04 string=0x00000000004B6A08 "J=G"
 *   insn=0x00000000004B6A08 string=0x00000000004B6A0C ")!"
 *   insn=0x00000000004B6A10 string=0x00000000004B6A14 "*"
 *   insn=0x00000000004B6A10 string=0x00000000004B6A40 "*"
 *   insn=0x00000000004B6A14 string=0x00000000004B6A18 "K"
 *   insn=0x00000000004B6A18 string=0x00000000004B6A1C "+"
 *   insn=0x00000000004B6A20 string=0x00000000004B6A24 "_"
 *   insn=0x00000000004B6A30 string=0x00000000004B6A34 "\"
 *   insn=0x00000000004B6A40 string=0x00000000004B6A44 "K"
 *   insn=0x00000000004B6A44 string=0x00000000004B6A48 "+"
 *   insn=0x00000000004B6A48 string=0x00000000004B6A4C "_"
 *   insn=0x00000000004B6A68 string=0x00000000004B6A6C "h"
 *   insn=0x00000000004B6A6C string=0x00000000004B6A70 "`"
 *   insn=0x00000000004B6A70 string=0x00000000004B6A74 ""
 *   insn=0x00000000004B6A74 string=0x00000000004B6A78 "A"
 *   insn=0x00000000004B6A78 string=0x00000000004B6A7C "h\n"
 *   insn=0x00000000004B6A80 string=0x00000000004B6A84 ""
 *   insn=0x00000000004B6A84 string=0x00000000004B6A88 ""
 *   insn=0x00000000004B6A98 string=0x00000000004B6A9C "WN"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::gregorian::bad_day_of_month::bad_day_of_month(boost::gregorian::bad_day_of_month *this)
{
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+28h] [xbp-28h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v5, "Day of month value is out of range 1..31");
  sub_54AADC(this, v5);
  v2 = (void *)(v5[0] - 24LL);
  if ( (__int64 *)(v5[0] - 24LL) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(v5[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = (*v3)--;
    }
    if ( v4 <= 0 )
      operator delete(v2);
  }
  *(_QWORD *)this = &off_6D72A8;
}

