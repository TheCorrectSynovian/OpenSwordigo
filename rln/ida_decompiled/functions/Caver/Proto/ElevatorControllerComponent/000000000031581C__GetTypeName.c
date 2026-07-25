/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031581C
 * Mangled: _ZNK5Caver5Proto27ElevatorControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ElevatorControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000315828 string=0x000000000031582C "S"
 *   insn=0x000000000031582C string=0x0000000000315830 "i"
 *   insn=0x0000000000315838 string=0x000000000058BEA6 "Caver.Proto.ElevatorControllerComponent"
 *   insn=0x0000000000315848 string=0x000000000031584C "h"
 *   insn=0x000000000031586C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000315874 string=0x0000000000315878 ""
 *   insn=0x0000000000315884 string=0x0000000000315888 "A"
 *   insn=0x0000000000315888 string=0x000000000031588C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ElevatorControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ElevatorControllerComponent");
}

