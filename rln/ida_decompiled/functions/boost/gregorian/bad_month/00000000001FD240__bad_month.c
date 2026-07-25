/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD240
 * Mangled: ._ZN5boost9gregorian9bad_monthC2Ev
 * Demangled: boost::gregorian::bad_month::bad_month(void)
 *
 * Callers: 1
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callees: 1
 *   0x00000000004B5698  boost::gregorian::bad_month::bad_month(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD248 string=0x00000000001FD24C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::gregorian::bad_month::bad_month(boost::gregorian::bad_month *this)
{
  return _ZN5boost9gregorian9bad_monthC2Ev(this);
}

