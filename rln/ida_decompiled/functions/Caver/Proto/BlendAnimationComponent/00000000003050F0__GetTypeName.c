/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003050F0
 * Mangled: _ZNK5Caver5Proto23BlendAnimationComponent11GetTypeNameEv
 * Demangled: Caver::Proto::BlendAnimationComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000003050FC string=0x0000000000305100 "S"
 *   insn=0x0000000000305100 string=0x0000000000305104 "i"
 *   insn=0x0000000000305108 string=0x000000000030510C "!"
 *   insn=0x000000000030510C string=0x000000000058BBC5 "Caver.Proto.BlendAnimationComponent"
 *   insn=0x000000000030511C string=0x0000000000305120 "h"
 *   insn=0x000000000030512C string=0x0000000000305140 "d"
 *   insn=0x0000000000305140 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000305144 string=0x0000000000305148 ""
 *   insn=0x0000000000305148 string=0x000000000030514C "\tF"
 *   insn=0x0000000000305158 string=0x000000000030515C "A"
 *   insn=0x000000000030515C string=0x0000000000305160 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::BlendAnimationComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.BlendAnimationComponent");
}

