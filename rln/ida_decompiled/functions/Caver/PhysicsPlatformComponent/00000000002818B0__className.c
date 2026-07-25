/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002818B0
 * Mangled: _ZNK5Caver24PhysicsPlatformComponent9classNameEv
 * Demangled: Caver::PhysicsPlatformComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002818BC string=0x00000000002818C0 "S"
 *   insn=0x00000000002818C0 string=0x00000000002818C4 "i"
 *   insn=0x00000000002818C8 string=0x00000000002818CC "!"
 *   insn=0x00000000002818CC string=0x0000000000585527 "PhysicsPlatform"
 *   insn=0x00000000002818DC string=0x00000000002818E0 "h"
 *   insn=0x00000000002818EC string=0x0000000000281900 "t"
 *   insn=0x0000000000281900 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::PhysicsPlatformComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "PhysicsPlatform");
}

