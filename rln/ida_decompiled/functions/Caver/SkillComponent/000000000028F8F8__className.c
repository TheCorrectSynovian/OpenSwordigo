/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F8F8
 * Mangled: _ZNK5Caver14SkillComponent9classNameEv
 * Demangled: Caver::SkillComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000028F904 string=0x000000000028F908 "S"
 *   insn=0x000000000028F908 string=0x000000000028F90C "i"
 *   insn=0x000000000028F914 string=0x000000000058AC24 "Skill"
 *   insn=0x000000000028F924 string=0x000000000028F928 "h"
 *   insn=0x000000000028F934 string=0x000000000028F948 "b"
 *   insn=0x000000000028F948 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SkillComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Skill");
}

