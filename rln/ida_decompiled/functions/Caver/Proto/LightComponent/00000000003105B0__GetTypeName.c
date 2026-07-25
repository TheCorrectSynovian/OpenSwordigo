/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003105B0
 * Mangled: _ZNK5Caver5Proto14LightComponent11GetTypeNameEv
 * Demangled: Caver::Proto::LightComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000003105BC string=0x00000000003105C0 "S"
 *   insn=0x00000000003105C0 string=0x00000000003105C4 "i"
 *   insn=0x00000000003105CC string=0x000000000058BD99 "Caver.Proto.LightComponent"
 *   insn=0x00000000003105D8 string=0x00000000003105DC "wY\t"
 *   insn=0x00000000003105DC string=0x00000000003105E0 "h"
 *   insn=0x00000000003105EC string=0x0000000000310600 "4"
 *   insn=0x0000000000310600 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000310608 string=0x000000000031060C "MG"
 *   insn=0x0000000000310618 string=0x000000000031061C "A"
 *   insn=0x000000000031061C string=0x0000000000310620 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::LightComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.LightComponent");
}

