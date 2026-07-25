/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBCA0
 * Mangled: .setlocale
 * Demangled: .setlocale
 *
 * Callers: 7
 *   0x000000000052BA00  sub_52BA00
 *   0x000000000053D830  sub_53D830
 *   0x000000000054BD8C  sub_54BD8C
 *   0x000000000054C178  sub_54C178
 *   0x0000000000570348  std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
 *   0x0000000000570468  std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *   0x0000000000570590  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *
 * Callees: 1
 *   0x00000000006FE938  setlocale
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBCA8 string=0x00000000001FBCAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
char *setlocale(int category, const char *locale)
{
  return setlocale(category, locale);
}

