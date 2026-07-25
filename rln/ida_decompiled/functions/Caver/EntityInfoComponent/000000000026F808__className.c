/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F808
 * Mangled: _ZNK5Caver19EntityInfoComponent9classNameEv
 * Demangled: Caver::EntityInfoComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000026F814 string=0x000000000026F818 "S"
 *   insn=0x000000000026F818 string=0x000000000026F81C "i"
 *   insn=0x000000000026F824 string=0x0000000000585453 "EntityInfo"
 *   insn=0x000000000026F834 string=0x000000000026F838 "h"
 *   insn=0x000000000026F858 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::EntityInfoComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "EntityInfo");
}

