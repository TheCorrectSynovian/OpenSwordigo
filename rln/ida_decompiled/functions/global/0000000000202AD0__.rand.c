/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202AD0
 * Mangled: .rand
 * Demangled: .rand
 *
 * Callers: 1
 *   0x00000000004B73A0  boost::uuids::detail::seed_rng::sha1_random_digest_(void)
 *
 * Callees: 1
 *   0x00000000006FEC58  rand
 *
 * Referenced strings: 1
 *   insn=0x0000000000202AD8 string=0x0000000000202ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int rand(void)
{
  return rand();
}

