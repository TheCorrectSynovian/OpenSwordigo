/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F90F0
 * Mangled: ._ZN5boost15throw_exceptionINS_9gregorian8bad_yearEEEvRKT_
 * Demangled: boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&)
 *
 * Callers: 1
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callees: 1
 *   0x00000000004B5EE0  boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F90F8 string=0x00000000001F90FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn boost::throw_exception<boost::gregorian::bad_year>()
{
  _ZN5boost15throw_exceptionINS_9gregorian8bad_yearEEEvRKT_();
}

