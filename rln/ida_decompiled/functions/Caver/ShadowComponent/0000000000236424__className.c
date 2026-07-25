/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236424
 * Mangled: _ZNK5Caver15ShadowComponent9classNameEv
 * Demangled: Caver::ShadowComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000236430 string=0x0000000000236434 "S"
 *   insn=0x0000000000236434 string=0x0000000000236438 "i"
 *   insn=0x000000000023643C string=0x0000000000236440 "a"
 *   insn=0x0000000000236440 string=0x00000000005846EC "Shadow"
 *   insn=0x0000000000236450 string=0x0000000000236454 "h"
 *   insn=0x0000000000236474 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000236478 string=0x000000000023647C "`%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ShadowComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Shadow");
}

