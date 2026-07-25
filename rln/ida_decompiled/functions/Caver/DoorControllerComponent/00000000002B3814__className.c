/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B3814
 * Mangled: _ZNK5Caver23DoorControllerComponent9classNameEv
 * Demangled: Caver::DoorControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002B3820 string=0x00000000002B3824 "S"
 *   insn=0x00000000002B3824 string=0x00000000002B3828 "i"
 *   insn=0x00000000002B3830 string=0x0000000000585710 "DoorController"
 *   insn=0x00000000002B3840 string=0x00000000002B3844 "h"
 *   insn=0x00000000002B3864 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::DoorControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "DoorController");
}

