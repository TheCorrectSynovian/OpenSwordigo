/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002014D0
 * Mangled: .vsprintf
 * Demangled: .vsprintf
 *
 * Callers: 1
 *   0x000000000052BA00  sub_52BA00
 *
 * Callees: 1
 *   0x00000000006FEBC0  vsprintf
 *
 * Referenced strings: 1
 *   insn=0x00000000002014D8 string=0x00000000002014DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int vsprintf(char *s, const char *format, __gnuc_va_list arg)
{
  return vsprintf(s, format, arg);
}

