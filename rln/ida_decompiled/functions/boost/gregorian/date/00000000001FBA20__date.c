/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBA20
 * Mangled: ._ZN5boost9gregorian4dateC2ENS0_9greg_yearENS0_10greg_monthENS0_8greg_dayE
 * Demangled: boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *
 * Callers: 2
 *   0x00000000004B4D4C  Caver::TimerSecondsSinceReferenceDate(void)
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callees: 1
 *   0x00000000004B4DD4  boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBA28 string=0x00000000001FBA2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::gregorian::date::date()
{
  return _ZN5boost9gregorian4dateC2ENS0_9greg_yearENS0_10greg_monthENS0_8greg_dayE();
}

