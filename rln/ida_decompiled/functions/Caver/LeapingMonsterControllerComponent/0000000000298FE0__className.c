/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298FE0
 * Mangled: _ZNK5Caver33LeapingMonsterControllerComponent9classNameEv
 * Demangled: Caver::LeapingMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000292E8C  Caver::AttackComponent::className(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000298FEC string=0x0000000000298FF0 "S"
 *   insn=0x0000000000298FF0 string=0x0000000000298FF4 "i"
 *   insn=0x0000000000298FF8 string=0x0000000000298FFC "a"
 *   insn=0x0000000000298FFC string=0x00000000005855B3 "LeapingMonsterController"
 *   insn=0x000000000029900C string=0x0000000000299010 "h"
 *   insn=0x0000000000299030 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000299034 string=0x0000000000299038 "`""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::LeapingMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "LeapingMonsterController");
}

