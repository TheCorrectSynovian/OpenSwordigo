/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFF70
 * Mangled: .getwc
 * Demangled: .getwc
 *
 * Callers: 3
 *   0x000000000053DF70  sub_53DF70
 *   0x000000000053DF98  sub_53DF98
 *   0x000000000053E00C  sub_53E00C
 *
 * Callees: 1
 *   0x00000000006FEB10  getwc
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFF78 string=0x00000000001FFF7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
wint_t getwc(__FILE *stream)
{
  return getwc(stream);
}

