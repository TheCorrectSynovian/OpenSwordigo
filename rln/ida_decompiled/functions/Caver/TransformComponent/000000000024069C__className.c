/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024069C
 * Mangled: _ZNK5Caver18TransformComponent9classNameEv
 * Demangled: Caver::TransformComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x00000000002406A8 string=0x00000000002406AC "S"
 *   insn=0x00000000002406AC string=0x00000000002406B0 "i"
 *   insn=0x00000000002406B4 string=0x00000000002406B8 "!"
 *   insn=0x00000000002406B8 string=0x0000000000584AFD "Transform"
 *   insn=0x00000000002406C4 string=0x00000000002406C8 "<"
 *   insn=0x00000000002406C8 string=0x00000000002406CC "h"
 *   insn=0x00000000002406EC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002406FC string=0x0000000000240700 "(%"
 *   insn=0x0000000000240700 string=0x0000000000240704 ")%"
 *   insn=0x0000000000240704 string=0x0000000000240708 ""
 *   insn=0x0000000000240708 string=0x000000000024070C ")MD"
 *   insn=0x000000000024070C string=0x0000000000240710 "a"
 *   insn=0x0000000000240710 string=0x0000000000240714 "*"
 *   insn=0x0000000000240714 string=0x0000000000240718 "@"
 *   insn=0x0000000000240718 string=0x000000000024071C "*"
 *   insn=0x000000000024071C string=0x0000000000240720 ""
 *   insn=0x0000000000240724 string=0x0000000000240728 "@"
 *   insn=0x0000000000240728 string=0x000000000024072C "\n"
 *   insn=0x0000000000240734 string=0x0000000000240738 "@"
 *   insn=0x0000000000240738 string=0x000000000024073C ")A"
 *   insn=0x0000000000240744 string=0x0000000000240748 "\t"
 *   insn=0x0000000000240760 string=0x0000000000240764 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::TransformComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Transform");
}

