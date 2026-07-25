/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8E28
 * Mangled: _ZN5boost9date_time14microsec_clockINS_10posix_time5ptimeEE11create_timeEPFP2tmPKlS6_E
 * Demangled: boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callers: 1
 *   0x00000000001F76A0  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callees: 12
 *   0x00000000001F4C50  boost::gregorian::bad_year::bad_year(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F90F0  boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&)
 *   0x00000000001FBA20  boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *   0x00000000001FBF50  boost::gregorian::bad_day_of_month::bad_day_of_month(void)
 *   0x00000000001FD240  boost::gregorian::bad_month::bad_month(void)
 *   0x00000000001FD350  .gettimeofday
 *   0x00000000001FE160  boost::throw_exception<boost::gregorian::bad_month>(boost::gregorian::bad_month const&)
 *   0x0000000000203C20  boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 79
 *   insn=0x00000000004B8E38 string=0x00000000004B8E3C "T"
 *   insn=0x00000000004B8E50 string=0x00000000004B8E54 "?"
 *   insn=0x00000000004B8E54 string=0x00000000001FD350 "0'"
 *   insn=0x00000000004B8E68 string=0x00000000004B8E6C "`"
 *   insn=0x00000000004B8E70 string=0x00000000004B8E74 "h"
 *   insn=0x00000000004B8E74 string=0x00000000004B8E78 ""
 *   insn=0x00000000004B8E78 string=0x00000000004B8E7C "\t="
 *   insn=0x00000000004B8E7C string=0x00000000004B8E80 "?"
 *   insn=0x00000000004B8E80 string=0x00000000004B8E84 "\t"
 *   insn=0x00000000004B8E84 string=0x00000000004B8E88 "*"
 *   insn=0x00000000004B8E88 string=0x00000000004B8E8C "?"
 *   insn=0x00000000004B8E8C string=0x00000000004B8E90 """
 *   insn=0x00000000004B8E90 string=0x00000000004B8E94 "i"
 *   insn=0x00000000004B8E94 string=0x00000000004B8E98 ")"
 *   insn=0x00000000004B8E98 string=0x00000000004B8E9C "?="
 *   insn=0x00000000004B8E9C string=0x00000000004B8EA0 " "
 *   insn=0x00000000004B8EA0 string=0x00000000004B8EA4 "*="
 *   insn=0x00000000004B8EA4 string=0x00000000004B8EA8 "_5"
 *   insn=0x00000000004B8EA8 string=0x00000000004B8EAC "B"
 *   insn=0x00000000004B8EAC string=0x00000000004B8EB0 "c"
 *   insn=0x00000000004B8EC4 string=0x00000000004B8EC8 ""="
 *   insn=0x00000000004B8ED4 string=0x00000000004B8ED8 "i"
 *   insn=0x00000000004B8ED4 string=0x00000000001FBA20 "0'"
 *   insn=0x00000000004B8ED8 string=0x00000000004B8EDC "j"
 *   insn=0x00000000004B8EDC string=0x00000000004B8EE0 "+"
 *   insn=0x00000000004B8EE0 string=0x00000000004B8EE4 "k"
 *   insn=0x00000000004B8EE4 string=0x00000000004B8EE8 ""
 *   insn=0x00000000004B8EE8 string=0x00000000004B8EEC ""
 *   insn=0x00000000004B8EE8 string=0x00000000004B8F08 "_"
 *   insn=0x00000000004B8EEC string=0x00000000004B8EF0 "}"
 *   insn=0x00000000004B8EF4 string=0x00000000004B8EF8 "(!"
 *   insn=0x00000000004B8EF8 string=0x00000000004B8EFC ""
 *   insn=0x00000000004B8EFC string=0x00000000004B8F00 "U"
 *   insn=0x00000000004B8F08 string=0x00000000004B8F0C "JU"
 *   insn=0x00000000004B8F0C string=0x00000000004B8F10 "?"
 *   insn=0x00000000004B8F10 string=0x00000000004B8F14 ")U"
 *   insn=0x00000000004B8F18 string=0x00000000004B8F1C ""
 *   insn=0x00000000004B8F1C string=0x00000000004B8F20 "U"
 *   insn=0x00000000004B8F20 string=0x00000000004B8F24 "}+"
 *   insn=0x00000000004B8F28 string=0x00000000004B8F2C "(!+"
 *   insn=0x00000000004B8F2C string=0x00000000004B8F30 ""
 *   insn=0x00000000004B8F30 string=0x00000000004B8F34 "U"
 *   insn=0x00000000004B8F3C string=0x00000000004B8F40 "*\t"
 *   insn=0x00000000004B8F40 string=0x00000000004B8F44 "_"
 *   insn=0x00000000004B8F48 string=0x00000000004B8F80 "J"
 *   insn=0x00000000004B8F54 string=0x00000000004B8F70 "?\t"
 *   insn=0x00000000004B8F6C string=0x00000000004B8FA8 "*"
 *   insn=0x00000000004B8F78 string=0x00000000004B8F7C "1"
 *   insn=0x00000000004B8F80 string=0x00000000004B8F88 "\n"
 *   insn=0x00000000004B8F88 string=0x00000000004B8F8C "_\t"
 *   insn=0x00000000004B8F90 string=0x00000000004B8F94 "\n"
 *   insn=0x00000000004B8F94 string=0x00000000004B8FA0 " !\n"
 *   insn=0x00000000004B8FA0 string=0x00000000004B8FA4 "'"
 *   insn=0x00000000004B8FA8 string=0x00000000004B8FAC "_\t"
 *   insn=0x00000000004B8FB0 string=0x00000000004B9004 "?\t"
 *   insn=0x00000000004B8FBC string=0x00000000004B8FC0 "\n"
 *   insn=0x00000000004B8FC0 string=0x00000000004B8FC4 "`"
 *   insn=0x00000000004B8FC4 string=0x00000000004B8FF0 "?"
 *   insn=0x00000000004B8FD0 string=0x00000000004B8FD4 "?"
 *   insn=0x00000000004B8FD0 string=0x00000000004B9010 "_\t"
 *   insn=0x00000000004B8FD8 string=0x00000000004B8FDC "`"
 *   insn=0x00000000004B8FDC string=0x00000000004B8FE0 "\t"
 *   insn=0x00000000004B8FE0 string=0x00000000004B8FE4 "_\t"
 *   insn=0x00000000004B8FE8 string=0x00000000004B9020 "?"
 *   insn=0x00000000004B8FF8 string=0x00000000004B8FFC "A"
 *   insn=0x00000000004B9004 string=0x00000000004B9008 "a"
 *   insn=0x00000000004B9010 string=0x00000000004B9014 "b"
 *   insn=0x00000000004B9018 string=0x00000000004B901C "\t"
 *   insn=0x00000000004B9024 string=0x00000000004B9028 "i"
 *   insn=0x00000000004B9068 string=0x00000000001F4C50 "P'"
 *   insn=0x00000000004B906C string=0x00000000004B9070 " "
 *   insn=0x00000000004B9070 string=0x00000000001F90F0 "0'"
 *   insn=0x00000000004B9084 string=0x00000000004B9088 "n"
 *   insn=0x00000000004B9088 string=0x00000000001FD240 "0'"
 *   insn=0x00000000004B908C string=0x00000000004B9090 "4"
 *   insn=0x00000000004B9094 string=0x00000000004B9098 "j"
 *   insn=0x00000000004B909C string=0x00000000004B90A0 "0"
 *   insn=0x00000000004B90A8 string=0x00000000001FBF50 "0'"
 *   insn=0x00000000004B90C4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(
        __int64 (__fastcall *a1)(__time_t *, _BYTE *))
{
  __int64 tv_usec_low; // x21
  int *v3; // x0
  int *v4; // x19
  unsigned int v5; // w9
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10
  __int64 v9; // x8
  unsigned __int64 result; // x0
  unsigned __int64 v11; // x10
  _BYTE v12[56]; // [xsp+8h] [xbp-88h] BYREF
  __time_t tv_sec; // [xsp+40h] [xbp-50h] BYREF
  timeval tv; // [xsp+48h] [xbp-48h] BYREF
  _DWORD v15[4]; // [xsp+58h] [xbp-38h] BYREF
  __int64 v16; // [xsp+68h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  gettimeofday(&tv, 0);
  tv_usec_low = LODWORD(tv.tv_usec);
  tv_sec = tv.tv_sec;
  v3 = (int *)a1(&tv_sec, v12);
  v4 = v3;
  v5 = (unsigned __int16)(*((_WORD *)v3 + 10) + 1900);
  if ( v5 <= 0x577 )
  {
    boost::gregorian::bad_year::bad_year((boost::gregorian::bad_year *)v15);
    boost::throw_exception<boost::gregorian::bad_year>();
  }
  if ( v5 >= 0x2711 )
  {
    boost::gregorian::bad_year::bad_year((boost::gregorian::bad_year *)v15);
    boost::throw_exception<boost::gregorian::bad_year>();
  }
  if ( *((_WORD *)v3 + 8) == 0xFFFF )
  {
    boost::gregorian::bad_month::bad_month((boost::gregorian::bad_month *)v15);
    boost::throw_exception<boost::gregorian::bad_month>();
    goto LABEL_51;
  }
  if ( (unsigned __int16)(*((_WORD *)v3 + 8) + 1) >= 0xDu )
  {
LABEL_51:
    boost::gregorian::bad_month::bad_month((boost::gregorian::bad_month *)v15);
    boost::throw_exception<boost::gregorian::bad_month>();
LABEL_52:
    boost::gregorian::bad_day_of_month::bad_day_of_month((boost::gregorian::bad_day_of_month *)v15);
    boost::throw_exception<boost::gregorian::bad_day_of_month>();
  }
  if ( !*((_WORD *)v3 + 6) )
    goto LABEL_52;
  if ( *((unsigned __int16 *)v3 + 6) >= 0x20u )
  {
    boost::gregorian::bad_day_of_month::bad_day_of_month((boost::gregorian::bad_day_of_month *)v15);
    boost::throw_exception<boost::gregorian::bad_day_of_month>();
  }
  boost::gregorian::date::date();
  v7 = v4[1];
  v6 = v4[2];
  v8 = *v4;
  if ( (((unsigned int)v7 | (unsigned int)v6 | (unsigned int)v8) & 0x80000000) != 0 )
  {
    if ( (int)v8 < 0 )
      LODWORD(v8) = -(int)v8;
    if ( (int)v7 < 0 )
      LODWORD(v7) = -(int)v7;
    if ( (int)v6 < 0 )
      LODWORD(v6) = -(int)v6;
    v9 = -(tv_usec_low + 1000000 * (3600LL * (int)v6 + 60LL * (int)v7 + (int)v8));
  }
  else
  {
    v9 = tv_usec_low + 1000000 * (3600 * v6 + 60 * v7 + v8);
  }
  if ( (unsigned int)(v15[0] + 2) >= 3 && (unsigned __int64)(v9 - 0x7FFFFFFFFFFFFFFELL) > 2 )
    return v9 + 86400000000LL * v15[0];
  if ( v9 == 0x8000000000000000LL )
    goto LABEL_20;
  result = 0x7FFFFFFFFFFFFFFELL;
  if ( v9 == 0x7FFFFFFFFFFFFFFELL )
    return result;
  if ( v9 == 0x7FFFFFFFFFFFFFFFLL )
  {
LABEL_20:
    if ( v15[0] == -2 )
      return 0x7FFFFFFFFFFFFFFELL;
  }
  else if ( (unsigned int)(v15[0] + 1) >= 2 )
  {
    if ( v15[0] == -2 )
      return 0x7FFFFFFFFFFFFFFELL;
    return v9 + v15[0];
  }
  v11 = v9 - 0x7FFFFFFFFFFFFFFFLL;
  if ( v9 == 0x8000000000000000LL )
  {
    if ( v15[0] == -1 )
      result = 0x7FFFFFFFFFFFFFFELL;
    else
      result = 0x8000000000000000LL;
    if ( v15[0] == -1 )
      return result;
    goto LABEL_31;
  }
  if ( v9 == 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v15[0] )
      result = 0x7FFFFFFFFFFFFFFFLL;
    else
      result = 0x7FFFFFFFFFFFFFFELL;
    if ( !v15[0] )
      return result;
LABEL_31:
    if ( v11 < 2 )
      return result;
    goto LABEL_42;
  }
  if ( v11 < 2 )
    return v9;
LABEL_42:
  if ( v15[0] != -1 )
  {
    if ( !v15[0] )
      return 0x8000000000000000LL;
    return v9 + v15[0];
  }
  return 0x7FFFFFFFFFFFFFFFLL;
}

