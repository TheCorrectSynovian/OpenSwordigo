/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200A90
 * Mangled: .strcoll
 * Demangled: .strcoll
 *
 * Callers: 3
 *   0x00000000004F63FC  sub_4F63FC
 *   0x00000000004F6B64  sub_4F6B64
 *   0x0000000000570E14  sub_570E14
 *
 * Callees: 1
 *   0x00000000006FEB90  strcoll
 *
 * Referenced strings: 1
 *   insn=0x0000000000200A98 string=0x0000000000200A9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int strcoll(const char *a1, const char *a2)
{
  return strcoll(a1, a2);
}

