/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4C50
 * Mangled: ._ZN5boost9gregorian8bad_yearC2Ev
 * Demangled: boost::gregorian::bad_year::bad_year(void)
 *
 * Callers: 1
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callees: 1
 *   0x00000000004B5FD8  boost::gregorian::bad_year::bad_year(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4C58 string=0x00000000001F4C5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::gregorian::bad_year::bad_year(boost::gregorian::bad_year *this)
{
  return _ZN5boost9gregorian8bad_yearC2Ev(this);
}

