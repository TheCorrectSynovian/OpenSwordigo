/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002009E0
 * Mangled: .localtime
 * Demangled: .localtime
 *
 * Callers: 1
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *
 * Callees: 1
 *   0x00000000006FEB88  localtime
 *
 * Referenced strings: 1
 *   insn=0x00000000002009E8 string=0x00000000002009EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
struct tm *localtime(const time_t *timer)
{
  return localtime(timer);
}

