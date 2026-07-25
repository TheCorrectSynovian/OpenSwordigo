/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC280
 * Mangled: .time
 * Demangled: .time
 *
 * Callers: 1
 *   0x00000000004B73A0  boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *
 * Callees: 1
 *   0x00000000006FE978  time
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC288 string=0x00000000001FC28C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
time_t time(time_t *timer)
{
  return time(timer);
}

