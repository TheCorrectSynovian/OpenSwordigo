/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8DD0
 * Mangled: .fputc
 * Demangled: .fputc
 *
 * Callers: 2
 *   0x00000000004FAA1C  sub_4FAA1C
 *   0x00000000005701B8  __gnu_cxx::__verbose_terminate_handler(void)
 *
 * Callees: 1
 *   0x00000000006FE818  fputc
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8DD8 string=0x00000000001F8DDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int fputc(int c, FILE *stream)
{
  return fputc(c, stream);
}

