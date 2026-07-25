/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256084
 * Mangled: _ZNK5Caver24BreakableObjectComponent9classNameEv
 * Demangled: Caver::BreakableObjectComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000256090 string=0x0000000000256094 "S"
 *   insn=0x0000000000256094 string=0x0000000000256098 "i"
 *   insn=0x000000000025609C string=0x00000000002560A0 "a"
 *   insn=0x00000000002560A0 string=0x0000000000585537 "BreakableObject"
 *   insn=0x00000000002560B0 string=0x00000000002560B4 "h"
 *   insn=0x00000000002560D4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::BreakableObjectComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "BreakableObject");
}

