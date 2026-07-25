/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002219E0
 * Mangled: _ZNK5Caver26KeyframeAnimationComponent9classNameEv
 * Demangled: Caver::KeyframeAnimationComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002219EC string=0x00000000002219F0 "S"
 *   insn=0x00000000002219F0 string=0x00000000002219F4 "i"
 *   insn=0x00000000002219FC string=0x0000000000583EAB "KeyframeAnimation"
 *   insn=0x0000000000221A08 string=0x0000000000221A0C "k"
 *   insn=0x0000000000221A0C string=0x0000000000221A10 "h"
 *   insn=0x0000000000221A1C string=0x0000000000221A30 "(R"
 *   insn=0x0000000000221A30 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::KeyframeAnimationComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "KeyframeAnimation");
}

