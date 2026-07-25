/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF650
 * Mangled: ._ZSt14__convert_to_vIdEvPKcRT_RSt12_Ios_IostateRKPi
 * Demangled: std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *
 * Callers: 2
 *   0x00000000005374EC  sub_5374EC
 *   0x0000000000559690  sub_559690
 *
 * Callees: 1
 *   0x0000000000570468  std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF658 string=0x00000000001FF65C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__convert_to_v<double>()
{
  return _ZSt14__convert_to_vIdEvPKcRT_RSt12_Ios_IostateRKPi();
}

