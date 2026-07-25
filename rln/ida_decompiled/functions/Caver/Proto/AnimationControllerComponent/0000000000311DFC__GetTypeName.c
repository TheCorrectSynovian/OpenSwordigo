/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311DFC
 * Mangled: _ZNK5Caver5Proto28AnimationControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::AnimationControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000311E08 string=0x0000000000311E0C "S"
 *   insn=0x0000000000311E0C string=0x0000000000311E10 "i"
 *   insn=0x0000000000311E18 string=0x000000000058BDF1 "Caver.Proto.AnimationControllerComponent"
 *   insn=0x0000000000311E24 string=0x0000000000311E28 "dS\t"
 *   insn=0x0000000000311E28 string=0x0000000000311E2C "h"
 *   insn=0x0000000000311E38 string=0x0000000000311E4C "!"
 *   insn=0x0000000000311E4C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000311E54 string=0x0000000000311E58 ""
 *   insn=0x0000000000311E60 string=0x0000000000311E64 "A"
 *   insn=0x0000000000311E64 string=0x0000000000311E68 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::AnimationControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.AnimationControllerComponent");
}

