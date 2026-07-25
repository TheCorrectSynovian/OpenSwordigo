/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B50F8
 * Mangled: _ZNK5Caver27ElevatorControllerComponent9classNameEv
 * Demangled: Caver::ElevatorControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002B5104 string=0x00000000002B5108 "S"
 *   insn=0x00000000002B5108 string=0x00000000002B510C "i"
 *   insn=0x00000000002B5114 string=0x00000000005854A5 "ElevatorController"
 *   insn=0x00000000002B5124 string=0x00000000002B5128 "h"
 *   insn=0x00000000002B5134 string=0x00000000002B5148 "b"
 *   insn=0x00000000002B5148 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ElevatorControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ElevatorController");
}

