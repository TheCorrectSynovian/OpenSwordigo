/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A199C
 * Mangled: _ZNK5Caver33WalkingMonsterControllerComponent9classNameEv
 * Demangled: Caver::WalkingMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002A19A8 string=0x00000000002A19AC "S"
 *   insn=0x00000000002A19AC string=0x00000000002A19B0 "i"
 *   insn=0x00000000002A19B4 string=0x00000000002A19B8 "!"
 *   insn=0x00000000002A19B8 string=0x0000000000585566 "WalkingMonsterController"
 *   insn=0x00000000002A19C4 string=0x00000000002A19C8 "|"
 *   insn=0x00000000002A19C8 string=0x00000000002A19CC "h"
 *   insn=0x00000000002A19D8 string=0x00000000002A19EC "9R"
 *   insn=0x00000000002A19EC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A19F0 string=0x00000000002A19F4 " ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::WalkingMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "WalkingMonsterController");
}

