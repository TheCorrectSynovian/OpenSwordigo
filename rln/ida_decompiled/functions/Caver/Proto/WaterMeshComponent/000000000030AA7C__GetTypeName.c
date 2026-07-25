/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030AA7C
 * Mangled: _ZNK5Caver5Proto18WaterMeshComponent11GetTypeNameEv
 * Demangled: Caver::Proto::WaterMeshComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000030AA88 string=0x000000000030AA8C "S"
 *   insn=0x000000000030AA8C string=0x000000000030AA90 "i"
 *   insn=0x000000000030AA98 string=0x000000000058BCA7 "Caver.Proto.WaterMeshComponent"
 *   insn=0x000000000030AAA4 string=0x000000000030AAA8 "Dp\t"
 *   insn=0x000000000030AAA8 string=0x000000000030AAAC "h"
 *   insn=0x000000000030AACC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030AAD4 string=0x000000000030AAD8 ""
 *   insn=0x000000000030AAE4 string=0x000000000030AAE8 "A"
 *   insn=0x000000000030AAE8 string=0x000000000030AAEC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::WaterMeshComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.WaterMeshComponent");
}

