/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD350
 * Mangled: .gettimeofday
 * Demangled: .gettimeofday
 *
 * Callers: 1
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callees: 1
 *   0x00000000006FE9E8  gettimeofday
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD358 string=0x00000000001FD35C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int gettimeofday(struct timeval *tv, __timezone_ptr_t tz)
{
  return gettimeofday(tv, tz);
}

