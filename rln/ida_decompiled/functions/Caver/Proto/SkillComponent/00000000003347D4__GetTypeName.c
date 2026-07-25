/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003347D4
 * Mangled: _ZNK5Caver5Proto14SkillComponent11GetTypeNameEv
 * Demangled: Caver::Proto::SkillComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000003347E0 string=0x00000000003347E4 "S"
 *   insn=0x00000000003347E4 string=0x00000000003347E8 "i"
 *   insn=0x00000000003347F0 string=0x000000000058C5D1 "Caver.Proto.SkillComponent"
 *   insn=0x0000000000334800 string=0x0000000000334804 "h"
 *   insn=0x0000000000334824 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033482C string=0x0000000000334830 "YC"
 *   insn=0x0000000000334834 string=0x0000000000334838 "A"
 *   insn=0x0000000000334838 string=0x000000000033483C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SkillComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SkillComponent");
}

