/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AADC
 * Mangled: sub_54AADC
 * Demangled: sub_54AADC
 *
 * Callers: 7
 *   0x00000000004B4DD4  boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *   0x00000000004B5698  boost::gregorian::bad_month::bad_month(void)
 *   0x00000000004B5FD8  boost::gregorian::bad_year::bad_year(void)
 *   0x00000000004B6918  boost::gregorian::bad_day_of_month::bad_day_of_month(void)
 *   0x000000000054AA90  sub_54AA90
 *   0x0000000000565600  sub_565600
 *   0x00000000005656B4  sub_5656B4
 *
 * Callees: 4
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000054AB28  sub_54AB28
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000054AADC string=0x000000000054AAE0 "b"
 *   insn=0x000000000054AAE8 string=0x000000000054AAEC "B"
 *   insn=0x000000000054AAF8 string=0x000000000054AAFC "`"
 *   insn=0x000000000054AAFC string=0x000000000054AB04 "`"
 *   insn=0x000000000054AB18 string=0x000000000054AB1C "U"
 *   insn=0x000000000054AB20 string=0x000000000054AB24 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_54AADC(_QWORD *a1, __int64 a2))(std::exception *this)
{
  __int64 (__fastcall **result)(std::exception *); // x0

  *a1 = off_6B7560;
  sub_56A528(a1 + 1, a2);
  result = off_6B7620;
  *a1 = off_6B7620;
  return result;
}

