/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000258B24
 * Mangled: _ZNK5Caver27CharAnimControllerComponent9classNameEv
 * Demangled: Caver::CharAnimControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000221A40  Caver::KeyframeAnimationComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000258B30 string=0x0000000000258B34 "S"
 *   insn=0x0000000000258B34 string=0x0000000000258B38 "i"
 *   insn=0x0000000000258B3C string=0x0000000000258B40 "a"
 *   insn=0x0000000000258B40 string=0x00000000005854B8 "CharAnimController"
 *   insn=0x0000000000258B50 string=0x0000000000258B54 "h"
 *   insn=0x0000000000258B74 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000258B78 string=0x0000000000258B7C "`$"
 *   insn=0x0000000000258B80 string=0x0000000000221A40 " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::CharAnimControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "CharAnimController");
}

