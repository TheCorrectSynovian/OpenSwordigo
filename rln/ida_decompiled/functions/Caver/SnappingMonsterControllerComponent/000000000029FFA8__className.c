/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029FFA8
 * Mangled: _ZNK5Caver34SnappingMonsterControllerComponent9classNameEv
 * Demangled: Caver::SnappingMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000021F9CC  Caver::BlendAnimationComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000029FFB4 string=0x000000000029FFB8 "S"
 *   insn=0x000000000029FFB8 string=0x000000000029FFBC "i"
 *   insn=0x000000000029FFC0 string=0x000000000029FFC4 "!"
 *   insn=0x000000000029FFC4 string=0x0000000000585599 "SnappingMonsterController"
 *   insn=0x000000000029FFD4 string=0x000000000029FFD8 "h"
 *   insn=0x000000000029FFF8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029FFFC string=0x00000000002A0000 " ""
 *   insn=0x00000000002A0004 string=0x000000000021F9CC " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SnappingMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "SnappingMonsterController");
}

