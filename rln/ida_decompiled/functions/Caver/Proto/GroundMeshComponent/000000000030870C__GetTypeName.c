/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030870C
 * Mangled: _ZNK5Caver5Proto19GroundMeshComponent11GetTypeNameEv
 * Demangled: Caver::Proto::GroundMeshComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000308718 string=0x000000000030871C "S"
 *   insn=0x000000000030871C string=0x0000000000308720 "i"
 *   insn=0x0000000000308728 string=0x000000000058BC3A "Caver.Proto.GroundMeshComponent"
 *   insn=0x0000000000308734 string=0x0000000000308738 " y\t"
 *   insn=0x0000000000308738 string=0x000000000030873C "h"
 *   insn=0x000000000030875C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GroundMeshComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GroundMeshComponent");
}

