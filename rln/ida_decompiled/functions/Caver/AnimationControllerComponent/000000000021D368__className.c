/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021D368
 * Mangled: _ZNK5Caver28AnimationControllerComponent9classNameEv
 * Demangled: Caver::AnimationControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000021D490  Caver::AnimationComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000021D374 string=0x000000000021D378 "S"
 *   insn=0x000000000021D378 string=0x000000000021D37C "i"
 *   insn=0x000000000021D380 string=0x000000000021D384 "A"
 *   insn=0x000000000021D384 string=0x00000000005879FE "AnimationController"
 *   insn=0x000000000021D390 string=0x000000000021D394 "\t&"
 *   insn=0x000000000021D394 string=0x000000000021D398 "h"
 *   insn=0x000000000021D3B8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021D3BC string=0x000000000021D3C0 " &"
 *   insn=0x000000000021D3C4 string=0x000000000021D490 " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::AnimationControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "AnimationController");
}

