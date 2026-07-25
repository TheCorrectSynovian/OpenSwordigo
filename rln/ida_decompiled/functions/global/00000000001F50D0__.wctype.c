/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F50D0
 * Mangled: .wctype
 * Demangled: .wctype
 *
 * Callers: 1
 *   0x0000000000520524  sub_520524
 *
 * Callees: 1
 *   0x00000000006FE658  wctype
 *
 * Referenced strings: 1
 *   insn=0x00000000001F50D8 string=0x00000000001F50DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
wctype_t wctype(const char *property)
{
  return wctype(property);
}

