/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF350
 * Mangled: .strtold
 * Demangled: .strtold
 *
 * Callers: 1
 *   0x0000000000570590  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *
 * Callees: 1
 *   0x00000000006FEAE8  strtold
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF358 string=0x00000000001FF35C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
long double strtold(const char *a1, char **a2)
{
  return strtold(a1, a2);
}

