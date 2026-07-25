/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027FE80
 * Mangled: _ZNK5Caver22PhysicsObjectComponent9classNameEv
 * Demangled: Caver::PhysicsObjectComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000027FE8C string=0x000000000027FE90 "S"
 *   insn=0x000000000027FE90 string=0x000000000027FE94 "i"
 *   insn=0x000000000027FE98 string=0x000000000027FE9C "!"
 *   insn=0x000000000027FE9C string=0x0000000000585519 "PhysicsObject"
 *   insn=0x000000000027FEA8 string=0x000000000027FEAC "C"
 *   insn=0x000000000027FEAC string=0x000000000027FEB0 "h"
 *   insn=0x000000000027FED0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000027FED4 string=0x000000000027FED8 "H"
 *   insn=0x000000000027FEE4 string=0x000000000027FEE8 "H"
 *   insn=0x000000000027FEF8 string=0x000000000027FEFC "H"
 *   insn=0x000000000027FF2C string=0x000000000027FF30 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::PhysicsObjectComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "PhysicsObject");
}

