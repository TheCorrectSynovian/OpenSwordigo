/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7ED0
 * Mangled: .wcsftime
 * Demangled: .wcsftime
 *
 * Callers: 1
 *   0x000000000054C178  sub_54C178
 *
 * Callees: 1
 *   0x00000000006FE7C8  wcsftime
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7ED8 string=0x00000000001F7EDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
size_t wcsftime(wchar_t *s, size_t maxsize, const wchar_t *format, const struct tm *tp)
{
  return wcsftime(s, maxsize, format, tp);
}

