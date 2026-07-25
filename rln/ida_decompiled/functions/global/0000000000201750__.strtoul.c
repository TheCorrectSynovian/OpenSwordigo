/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201750
 * Mangled: .strtoul
 * Demangled: .strtoul
 *
 * Callers: 2
 *   0x00000000004EEEFC  sub_4EEEFC
 *   0x00000000004FAE4C  sub_4FAE4C
 *
 * Callees: 1
 *   0x00000000006FEBD8  strtoul
 *
 * Referenced strings: 1
 *   insn=0x0000000000201758 string=0x000000000020175C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
unsigned __int64 strtoul(const char *a1, char **a2, int a3)
{
  return strtoul(a1, a2, a3);
}

