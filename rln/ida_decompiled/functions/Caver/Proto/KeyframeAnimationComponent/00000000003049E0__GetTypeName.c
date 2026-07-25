/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003049E0
 * Mangled: _ZNK5Caver5Proto26KeyframeAnimationComponent11GetTypeNameEv
 * Demangled: Caver::Proto::KeyframeAnimationComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000003049EC string=0x00000000003049F0 "S"
 *   insn=0x00000000003049F0 string=0x00000000003049F4 "i"
 *   insn=0x00000000003049F8 string=0x00000000003049FC "!"
 *   insn=0x00000000003049FC string=0x000000000058BB9E "Caver.Proto.KeyframeAnimationComponent"
 *   insn=0x0000000000304A08 string=0x0000000000304A0C "k"
 *   insn=0x0000000000304A0C string=0x0000000000304A10 "h"
 *   insn=0x0000000000304A1C string=0x0000000000304A30 "("
 *   insn=0x0000000000304A30 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000304A34 string=0x0000000000304A38 ""
 *   insn=0x0000000000304A38 string=0x0000000000304A3C ""
 *   insn=0x0000000000304A40 string=0x0000000000304A44 "A"
 *   insn=0x0000000000304A44 string=0x0000000000304A48 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::KeyframeAnimationComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.KeyframeAnimationComponent");
}

