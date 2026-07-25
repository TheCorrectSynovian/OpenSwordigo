/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002951B8
 * Mangled: _ZNK5Caver34BouncingMonsterControllerComponent9classNameEv
 * Demangled: Caver::BouncingMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002951C4 string=0x00000000002951C8 "S"
 *   insn=0x00000000002951C8 string=0x00000000002951CC "i"
 *   insn=0x00000000002951D4 string=0x0000000000585647 "BouncingMonsterController"
 *   insn=0x00000000002951E0 string=0x00000000002951E4 "uF"
 *   insn=0x00000000002951E4 string=0x00000000002951E8 "h"
 *   insn=0x00000000002951F4 string=0x0000000000295208 "2"
 *   insn=0x0000000000295208 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::BouncingMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "BouncingMonsterController");
}

