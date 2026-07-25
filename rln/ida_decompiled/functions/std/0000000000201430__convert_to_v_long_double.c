/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201430
 * Mangled: ._ZSt14__convert_to_vIeEvPKcRT_RSt12_Ios_IostateRKPi
 * Demangled: std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *
 * Callers: 4
 *   0x0000000000536300  sub_536300
 *   0x0000000000537734  sub_537734
 *   0x000000000055857C  sub_55857C
 *   0x00000000005598EC  sub_5598EC
 *
 * Callees: 1
 *   0x0000000000570590  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201438 string=0x000000000020143C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__convert_to_v<long double>()
{
  return _ZSt14__convert_to_vIeEvPKcRT_RSt12_Ios_IostateRKPi();
}

