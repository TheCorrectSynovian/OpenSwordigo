/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBF50
 * Mangled: ._ZN5boost9gregorian16bad_day_of_monthC2Ev
 * Demangled: boost::gregorian::bad_day_of_month::bad_day_of_month(void)
 *
 * Callers: 1
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callees: 1
 *   0x00000000004B6918  boost::gregorian::bad_day_of_month::bad_day_of_month(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBF58 string=0x00000000001FBF5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::gregorian::bad_day_of_month::bad_day_of_month(boost::gregorian::bad_day_of_month *this)
{
  return _ZN5boost9gregorian16bad_day_of_monthC2Ev(this);
}

