/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298528
 * Mangled: _ZNK5Caver33GenericMonsterControllerComponent9classNameEv
 * Demangled: Caver::GenericMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000298534 string=0x0000000000298538 "S"
 *   insn=0x0000000000298538 string=0x000000000029853C "i"
 *   insn=0x0000000000298540 string=0x0000000000298544 "a"
 *   insn=0x0000000000298544 string=0x0000000000585678 "GenericMonsterController"
 *   insn=0x0000000000298554 string=0x0000000000298558 "h"
 *   insn=0x0000000000298564 string=0x0000000000298578 "Vw"
 *   insn=0x0000000000298578 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029857C string=0x0000000000298580 "`""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GenericMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "GenericMonsterController");
}

