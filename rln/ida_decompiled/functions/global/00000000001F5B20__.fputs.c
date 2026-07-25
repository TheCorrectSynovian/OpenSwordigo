/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5B20
 * Mangled: .fputs
 * Demangled: .fputs
 *
 * Callers: 2
 *   0x00000000004FAA1C  sub_4FAA1C
 *   0x00000000005701B8  __gnu_cxx::__verbose_terminate_handler(void)
 *
 * Callees: 1
 *   0x00000000006FE690  fputs
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5B28 string=0x00000000001F5B2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int fputs(const char *s, FILE *stream)
{
  return fputs(s, stream);
}

