/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203240
 * Mangled: .sprintf
 * Demangled: .sprintf
 *
 * Callers: 6
 *   0x00000000004EEFD8  sub_4EEFD8
 *   0x00000000004F5F80  sub_4F5F80
 *   0x00000000004F67EC  sub_4F67EC
 *   0x00000000004FBC90  sub_4FBC90
 *   0x0000000000572A48  sub_572A48
 *   0x000000000057A6E8  sub_57A6E8
 *
 * Callees: 1
 *   0x00000000006FECA8  sprintf
 *
 * Referenced strings: 1
 *   insn=0x0000000000203248 string=0x000000000020324C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int sprintf(char *s, const char *format, ...)
{
  return sprintf(s, format);
}

