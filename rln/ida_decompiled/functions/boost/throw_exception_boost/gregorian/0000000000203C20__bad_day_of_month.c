/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203C20
 * Mangled: ._ZN5boost15throw_exceptionINS_9gregorian16bad_day_of_monthEEEvRKT_
 * Demangled: boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *
 * Callers: 2
 *   0x00000000004B4DD4  boost::gregorian::date::date(boost::gregorian::greg_year,boost::gregorian::greg_month,boost::gregorian::greg_day)
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callees: 1
 *   0x00000000004B6820  boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203C28 string=0x0000000000203C2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn boost::throw_exception<boost::gregorian::bad_day_of_month>()
{
  _ZN5boost15throw_exceptionINS_9gregorian16bad_day_of_monthEEEvRKT_();
}

