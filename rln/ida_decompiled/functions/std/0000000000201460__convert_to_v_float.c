/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201460
 * Mangled: ._ZSt14__convert_to_vIfEvPKcRT_RSt12_Ios_IostateRKPi
 * Demangled: std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
 *
 * Callers: 2
 *   0x00000000005372A4  sub_5372A4
 *   0x0000000000559434  sub_559434
 *
 * Callees: 1
 *   0x0000000000570348  std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201468 string=0x000000000020146C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__convert_to_v<float>()
{
  return _ZSt14__convert_to_vIfEvPKcRT_RSt12_Ios_IostateRKPi();
}

