/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F76A0
 * Mangled: ._ZN5boost9date_time14microsec_clockINS_10posix_time5ptimeEE11create_timeEPFP2tmPKlS6_E
 * Demangled: boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Callers: 2
 *   0x00000000004B4B84  Caver::TimerCurrentSeconds(void)
 *   0x00000000004B4C08  sub_4B4C08
 *
 * Callees: 1
 *   0x00000000004B8E28  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *
 * Referenced strings: 1
 *   insn=0x00000000001F76A8 string=0x00000000001F76AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time()
{
  return _ZN5boost9date_time14microsec_clockINS_10posix_time5ptimeEE11create_timeEPFP2tmPKlS6_E();
}

