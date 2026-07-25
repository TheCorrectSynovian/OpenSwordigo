/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200770
 * Mangled: .strtof
 * Demangled: .strtof
 *
 * Callers: 1
 *   0x0000000000570348  std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
 *
 * Callees: 1
 *   0x00000000006FEB58  strtof
 *
 * Referenced strings: 1
 *   insn=0x0000000000200778 string=0x000000000020077C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
float strtof(const char *a1, char **a2)
{
  return strtof(a1, a2);
}

