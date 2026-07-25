/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D24D4
 * Mangled: _ZNK5Caver5Proto22Texture_ConversionInfo11GetTypeNameEv
 * Demangled: Caver::Proto::Texture_ConversionInfo::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x00000000002D24E0 string=0x00000000002D24E4 "S"
 *   insn=0x00000000002D24E4 string=0x00000000002D24E8 "i"
 *   insn=0x00000000002D24F0 string=0x000000000058A4D4 "Caver.Proto.Texture.ConversionInfo"
 *   insn=0x00000000002D2500 string=0x00000000002D2504 "h"
 *   insn=0x00000000002D2510 string=0x00000000002D2524 "k"
 *   insn=0x00000000002D2524 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D2528 string=0x00000000002D252C ""
 *   insn=0x00000000002D252C string=0x00000000002D2530 ""
 *   insn=0x00000000002D2534 string=0x00000000002D2538 "0"
 *   insn=0x00000000002D253C string=0x00000000002D2540 ""
 *   insn=0x00000000002D2540 string=0x00000000002D2544 ""
 *   insn=0x00000000002D2548 string=0x00000000002D254C ""
 *   insn=0x00000000002D2550 string=0x00000000002D2554 "mD"
 *   insn=0x00000000002D2560 string=0x00000000002D2564 "A"
 *   insn=0x00000000002D2568 string=0x00000000002D256C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Texture_ConversionInfo::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Texture.ConversionInfo");
}

