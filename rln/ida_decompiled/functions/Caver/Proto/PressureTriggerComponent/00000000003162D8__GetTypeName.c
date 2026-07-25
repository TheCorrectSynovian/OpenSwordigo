/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003162D8
 * Mangled: _ZNK5Caver5Proto24PressureTriggerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::PressureTriggerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000003162E4 string=0x00000000003162E8 "S"
 *   insn=0x00000000003162E8 string=0x00000000003162EC "i"
 *   insn=0x00000000003162F4 string=0x000000000058BECE "Caver.Proto.PressureTriggerComponent"
 *   insn=0x0000000000316300 string=0x0000000000316304 "-B\t"
 *   insn=0x0000000000316304 string=0x0000000000316308 "h"
 *   insn=0x0000000000316328 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000316330 string=0x0000000000316334 ""
 *   insn=0x0000000000316340 string=0x0000000000316344 "A"
 *   insn=0x0000000000316344 string=0x0000000000316348 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::PressureTriggerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.PressureTriggerComponent");
}

