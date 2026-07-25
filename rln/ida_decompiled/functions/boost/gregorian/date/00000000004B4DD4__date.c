/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B4DD4
 * Mangled: _ZN5boost9gregorian4dateC2ENS0_9greg_yearENS0_10greg_monthENS0_8greg_dayE
 * Demangled: boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *
 * Callers: 1
 *   0x00000000001FBA20  boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203C20  boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000054AADC  sub_54AADC
 *   0x0000000000566784  sub_566784
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000568098  sub_568098
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 67
 *   insn=0x00000000004B4DE0 string=0x00000000004B4DE4 "I<"
 *   insn=0x00000000004B4DE8 string=0x00000000004B4DEC "kU"
 *   insn=0x00000000004B4DEC string=0x00000000004B4DF4 "J"
 *   insn=0x00000000004B4DF4 string=0x00000000004B4DF8 "J}+"
 *   insn=0x00000000004B4DF8 string=0x00000000004B4DFC "K"
 *   insn=0x00000000004B4DFC string=0x00000000004B4E00 "J"
 *   insn=0x00000000004B4E04 string=0x00000000004B4E08 "J"
 *   insn=0x00000000004B4E0C string=0x00000000004B4E10 "L\t"
 *   insn=0x00000000004B4E10 string=0x00000000004B4E14 "H"
 *   insn=0x00000000004B4E18 string=0x00000000004B4E1C "+"
 *   insn=0x00000000004B4E20 string=0x00000000004B4E24 ""
 *   insn=0x00000000004B4E30 string=0x00000000004B4E34 ","
 *   insn=0x00000000004B4E40 string=0x00000000004B4E44 "J="
 *   insn=0x00000000004B4E4C string=0x00000000004B4E50 "M}"
 *   insn=0x00000000004B4E54 string=0x00000000004B4E58 "l="
 *   insn=0x00000000004B4E5C string=0x00000000004B4E60 "k}"
 *   insn=0x00000000004B4E64 string=0x00000000004B4E68 "L}"
 *   insn=0x00000000004B4E70 string=0x00000000004B4E74 "J"
 *   insn=0x00000000004B4E78 string=0x00000000004B4E7C "J"
 *   insn=0x00000000004B4E7C string=0x00000000004B4E80 "k"
 *   insn=0x00000000004B4E80 string=0x00000000004B4E84 "J"
 *   insn=0x00000000004B4E84 string=0x00000000004B4E88 "J"
 *   insn=0x00000000004B4E88 string=0x00000000004B4E8C "?-"
 *   insn=0x00000000004B4E8C string=0x00000000004B4E90 "\n"
 *   insn=0x00000000004B4E98 string=0x00000000004B4E9C "J!"
 *   insn=0x00000000004B4E9C string=0x00000000004B4EA0 "J"
 *   insn=0x00000000004B4EA0 string=0x00000000004B4EA4 "_"
 *   insn=0x00000000004B4EA8 string=0x00000000004B4EDC "?\t"
 *   insn=0x00000000004B4EAC string=0x00000000004B4EB0 ")="
 *   insn=0x00000000004B4EB0 string=0x00000000004B4EB4 "?!#k"
 *   insn=0x00000000004B4EB8 string=0x00000000004B4EBC ""
 *   insn=0x00000000004B4EDC string=0x00000000004B4EE0 "A"
 *   insn=0x00000000004B4EE0 string=0x00000000004B4EE4 "?"
 *   insn=0x00000000004B4EE8 string=0x00000000004B4EEC "!"
 *   insn=0x00000000004B4EF0 string=0x00000000004B4EF4 "*<"
 *   insn=0x00000000004B4EF4 string=0x00000000004B4EF8 "k="
 *   insn=0x00000000004B4EF8 string=0x00000000004B4EFC "K}"
 *   insn=0x00000000004B4F00 string=0x00000000004B4F04 "2"
 *   insn=0x00000000004B4F04 string=0x00000000004B4F08 "n"
 *   insn=0x00000000004B4F08 string=0x00000000004B4F0C "k"
 *   insn=0x00000000004B4F10 string=0x00000000004B4F14 "j"
 *   insn=0x00000000004B4F14 string=0x00000000004B4F18 "_"
 *   insn=0x00000000004B4F1C string=0x00000000004B4F20 ")"
 *   insn=0x00000000004B4F30 string=0x000000000059745C "Day of month is not valid for year"
 *   insn=0x00000000004B4F50 string=0x00000000004B4F54 "mC"
 *   insn=0x00000000004B4F54 string=0x00000000004B4F58 "A"
 *   insn=0x00000000004B4F60 string=0x00000000004B4F64 "/;"
 *   insn=0x00000000004B4F68 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B4F70 string=0x00000000004B4F74 "!U"
 *   insn=0x00000000004B4F84 string=0x00000000004B4F88 ")"
 *   insn=0x00000000004B4F98 string=0x00000000004B4F9C ")=G"
 *   insn=0x00000000004B4F9C string=0x00000000004B4FA0 "!"
 *   insn=0x00000000004B4FA0 string=0x00000000004B4FA4 "i"
 *   insn=0x00000000004B4FA4 string=0x00000000004B4FA8 "\t"
 *   insn=0x00000000004B4FA4 string=0x00000000004B4FD0 "\t"
 *   insn=0x00000000004B4FA8 string=0x00000000004B4FAC "*"
 *   insn=0x00000000004B4FAC string=0x00000000004B4FB0 "\n"
 *   insn=0x00000000004B4FB4 string=0x00000000004B4FB8 "?"
 *   insn=0x00000000004B4FB8 string=0x00000000004B4FBC "l"
 *   insn=0x00000000004B4FC8 string=0x00000000004B4FCC ">2"
 *   insn=0x00000000004B4FD0 string=0x00000000004B4FD4 "*"
 *   insn=0x00000000004B4FD4 string=0x00000000004B4FD8 "\n"
 *   insn=0x00000000004B4FD8 string=0x00000000004B4FDC "?"
 *   insn=0x00000000004B4FDC string=0x00000000004B4FE0 ""
 *   insn=0x00000000004B5004 string=0x00000000004B5008 "$"
 *   insn=0x00000000004B5008 string=0x00000000004B500C "|`"
 *   insn=0x00000000004B5028 string=0x00000000004B502C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall boost::gregorian::date::date(
        _DWORD *result,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4)
{
  __int16 v4; // w10
  unsigned __int16 v5; // w9
  bool v6; // zf
  __int64 v7; // [xsp+28h] [xbp-38h] BYREF
  _QWORD v8[4]; // [xsp+30h] [xbp-30h] BYREF

  v4 = ((715827883LL * (14 - a3)) >> 33) + ((unsigned __int64)(715827883LL * (14 - a3)) >> 63);
  v8[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *result = 365 * (unsigned __int16)(a2 + 4800 - v4)
          + a4
          + ((unsigned __int16)(a2 + 4800 - v4) >> 2)
          - 32045
          - (unsigned __int16)(a2 + 4800 - v4) / 0x64u
          + (unsigned __int16)(a2 + 4800 - v4) / 0x190u
          + (153 * (unsigned int)(unsigned __int16)(a3 + 12 * v4 - 3) + 2) / 5;
  if ( a3 > 0xBu )
    goto LABEL_14;
  if ( ((1 << a3) & 0xA50) != 0 )
  {
    v5 = 30;
    goto LABEL_4;
  }
  if ( a3 == 2 )
  {
    v5 = 28;
    if ( (a2 & 3) == 0 )
    {
      if ( a2 % 0x190u )
        v6 = a2 % 0x64u == 0;
      else
        v6 = 0;
      if ( v6 )
        v5 = 28;
      else
        v5 = 29;
    }
  }
  else
  {
LABEL_14:
    v5 = 31;
  }
LABEL_4:
  if ( v5 < (unsigned int)a4 )
  {
    sub_566BB8((int)&v7, "Day of month is not valid for year");
    sub_54AADC(v8, &v7);
    v8[0] = &off_6D72A8;
    boost::throw_exception<boost::gregorian::bad_day_of_month>();
  }
  return result;
}

