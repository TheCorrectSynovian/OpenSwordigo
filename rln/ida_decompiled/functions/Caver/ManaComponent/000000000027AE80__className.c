/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AE80
 * Mangled: _ZNK5Caver13ManaComponent9classNameEv
 * Demangled: Caver::ManaComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4850  Caver::EntityComponent::EntityComponent(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x000000000027AE8C string=0x000000000027AE90 "S"
 *   insn=0x000000000027AE90 string=0x000000000027AE94 "i"
 *   insn=0x000000000027AE98 string=0x000000000027AE9C "a"
 *   insn=0x000000000027AE9C string=0x00000000005885F8 "ManaComponent"
 *   insn=0x000000000027AEA8 string=0x000000000027AEAC "C"
 *   insn=0x000000000027AEAC string=0x000000000027AEB0 "h"
 *   insn=0x000000000027AED0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000027AEE4 string=0x000000000027AEE8 "Z"
 *   insn=0x000000000027AEE8 string=0x000000000027AEEC "H#"
 *   insn=0x000000000027AEE8 string=0x00000000001F4850 "P'"
 *   insn=0x000000000027AEEC string=0x000000000027AEF0 ""
 *   insn=0x000000000027AEF0 string=0x000000000027AEF4 "I#"
 *   insn=0x000000000027AEF4 string=0x000000000027AEF8 ")"
 *   insn=0x000000000027AEF8 string=0x000000000027AEFC "+ "
 *   insn=0x000000000027AEFC string=0x000000000027AF00 "k2"
 *   insn=0x000000000027AF00 string=0x000000000027AF04 "A"
 *   insn=0x000000000027AF04 string=0x000000000027AF08 "k"
 *   insn=0x000000000027AF08 string=0x000000000027AF0C ""
 *   insn=0x000000000027AF10 string=0x000000000027AF14 "`"
 *   insn=0x000000000027AF14 string=0x000000000027AF18 ""
 *   insn=0x000000000027AF20 string=0x000000000027AF24 ")a"
 *   insn=0x000000000027AF38 string=0x000000000027AF3C "j"
 *   insn=0x000000000027AF40 string=0x000000000027AF44 "i~"
 *   insn=0x000000000027AF44 string=0x000000000027AF48 "`"
 *   insn=0x000000000027AF48 string=0x000000000027AF4C "kj"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ManaComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ManaComponent");
}

