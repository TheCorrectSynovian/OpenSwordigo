/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4A50
 * Mangled: .strtod
 * Demangled: .strtod
 *
 * Callers: 2
 *   0x00000000004EEEFC  sub_4EEEFC
 *   0x0000000000570468  std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *
 * Callees: 1
 *   0x00000000006FE620  strtod
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4A58 string=0x00000000001F4A5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
double strtod(const char *a1, char **a2)
{
  return strtod(a1, a2);
}

