/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB3F0
 * Mangled: .strftime
 * Demangled: .strftime
 *
 * Callers: 1
 *   0x000000000054BD8C  sub_54BD8C
 *
 * Callees: 1
 *   0x00000000006FE8F0  strftime
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB3F8 string=0x00000000001FB3FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
size_t strftime(char *s, size_t maxsize, const char *format, const struct tm *tp)
{
  return strftime(s, maxsize, format, tp);
}

