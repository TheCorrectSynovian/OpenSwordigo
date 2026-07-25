/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B4C08
 * Mangled: sub_4B4C08
 * Demangled: sub_4B4C08
 *
 * Callers: 2
 *   0x00000000004B4B84  Caver::TimerCurrentSeconds(void)
 *   0x00000000004B4D4C  Caver::TimerSecondsSinceReferenceDate(void)
 *
 * Callees: 2
 *   0x00000000001F76A0  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *
 * Referenced strings: 34
 *   insn=0x00000000004B4C20 string=0x00000000004B4C24 "h"
 *   insn=0x00000000004B4C20 string=0x00000000001F76A0 "0'"
 *   insn=0x00000000004B4C24 string=0x00000000004B4C28 "I"
 *   insn=0x00000000004B4C28 string=0x00000000004B4C30 "\n"
 *   insn=0x00000000004B4C30 string=0x00000000004B4C34 "_"
 *   insn=0x00000000004B4C34 string=0x00000000004B4C38 "\n"
 *   insn=0x00000000004B4C3C string=0x00000000004B4C40 "_\t"
 *   insn=0x00000000004B4C40 string=0x00000000004B4C44 "i"
 *   insn=0x00000000004B4C44 string=0x00000000004B4C48 "\t"
 *   insn=0x00000000004B4C48 string=0x00000000004B4C4C "7"
 *   insn=0x00000000004B4C4C string=0x00000000004B4D28 ""
 *   insn=0x00000000004B4C60 string=0x00000000004B4C64 " "
 *   insn=0x00000000004B4C6C string=0x00000000004B4C70 "`"
 *   insn=0x00000000004B4C70 string=0x00000000004B4C74 "_\t"
 *   insn=0x00000000004B4C78 string=0x00000000004B4D08 "\t"
 *   insn=0x00000000004B4C7C string=0x00000000004B4C80 "@"
 *   insn=0x00000000004B4C8C string=0x00000000004B4C90 "\n"
 *   insn=0x00000000004B4C90 string=0x00000000004B4C94 "`"
 *   insn=0x00000000004B4C9C string=0x00000000004B4CA0 "!"
 *   insn=0x00000000004B4CA0 string=0x00000000004B4CE4 "_\t"
 *   insn=0x00000000004B4CA8 string=0x00000000004B4CAC ")"
 *   insn=0x00000000004B4CAC string=0x00000000004B4CB0 "_\t"
 *   insn=0x00000000004B4CB8 string=0x00000000004B4CBC ""
 *   insn=0x00000000004B4CC4 string=0x00000000004B4CC8 "i"
 *   insn=0x00000000004B4CC8 string=0x00000000004B4CCC "_\t"
 *   insn=0x00000000004B4CDC string=0x00000000004B4CE0 ""
 *   insn=0x00000000004B4CF4 string=0x00000000004B4CF8 "`"
 *   insn=0x00000000004B4D00 string=0x00000000004B4D04 " "
 *   insn=0x00000000004B4D14 string=0x00000000004B4D18 "?"
 *   insn=0x00000000004B4D18 string=0x00000000004B4D1C "("
 *   insn=0x00000000004B4D1C string=0x00000000004B4D20 "?"
 *   insn=0x00000000004B4D20 string=0x00000000004B4D24 ")"
 *   insn=0x00000000004B4D30 string=0x00000000004B4D34 "!"
 *   insn=0x00000000004B4D34 string=0x00000000004B4D38 " `"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall sub_4B4C08(__int64 *a1)
{
  __int64 time; // x0
  __int64 v3; // x8
  unsigned __int64 v4; // x10
  __int64 v5; // x9
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x10
  unsigned __int64 v8; // x8

  time = boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time();
  v3 = *a1;
  v4 = *a1 - 0x7FFFFFFFFFFFFFFELL;
  if ( (unsigned __int64)(time - 0x7FFFFFFFFFFFFFFELL) >= 3 && v4 > 2 )
  {
    v5 = time - v3;
    return (double)v5 * 0.000001;
  }
  v5 = 0x7FFFFFFFFFFFFFFELL;
  if ( time != 0x8000000000000000LL )
  {
    if ( time == 0x7FFFFFFFFFFFFFFELL )
      return (double)v5 * 0.000001;
    if ( time != 0x7FFFFFFFFFFFFFFFLL && v4 > 2 )
      goto LABEL_24;
  }
  if ( v3 == 0x7FFFFFFFFFFFFFFELL )
    return (double)v5 * 0.000001;
  v5 = 0x8000000000000000LL;
  v6 = time - 0x7FFFFFFFFFFFFFFFLL;
  if ( time == 0x8000000000000000LL )
  {
    if ( v3 == 0x8000000000000000LL )
      v5 = 0x7FFFFFFFFFFFFFFELL;
    if ( v6 < 2 )
      goto LABEL_25;
    v7 = 0x8000000000000000LL;
    goto LABEL_19;
  }
  if ( time == 0x7FFFFFFFFFFFFFFFLL )
  {
    v5 = 0x7FFFFFFFFFFFFFFELL;
    if ( v3 != 0x7FFFFFFFFFFFFFFFLL )
      v5 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v6 < 2 )
      goto LABEL_25;
    v7 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_19:
    if ( v3 == v7 )
      goto LABEL_25;
    goto LABEL_22;
  }
  v5 = time;
  if ( v6 < 2 )
  {
LABEL_25:
    if ( v5 == 0x8000000000000000LL )
      v8 = 0x8000000000000000LL;
    else
      v8 = 0x7FFFFFFFFFFFFFFELL;
    if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
      v5 = v8;
    return (double)v5 * 0.000001;
  }
LABEL_22:
  v5 = 0x8000000000000000LL;
  if ( v3 == 0x8000000000000000LL )
  {
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    return (double)v5 * 0.000001;
  }
  if ( v3 != 0x7FFFFFFFFFFFFFFFLL )
  {
LABEL_24:
    v5 = time - v3;
    goto LABEL_25;
  }
  return (double)v5 * 0.000001;
}

