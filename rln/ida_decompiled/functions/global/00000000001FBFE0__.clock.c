/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBFE0
 * Mangled: .clock
 * Demangled: .clock
 *
 * Callers: 1
 *   0x00000000004B73A0  boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *
 * Callees: 1
 *   0x00000000006FE950  clock
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBFE8 string=0x00000000001FBFEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
clock_t clock(void)
{
  return clock();
}

