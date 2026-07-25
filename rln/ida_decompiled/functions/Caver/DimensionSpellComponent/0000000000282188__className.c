/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282188
 * Mangled: _ZNK5Caver23DimensionSpellComponent9classNameEv
 * Demangled: Caver::DimensionSpellComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000282194 string=0x0000000000282198 "S"
 *   insn=0x0000000000282198 string=0x000000000028219C "i"
 *   insn=0x00000000002821A4 string=0x000000000058576D "DimensionSpell"
 *   insn=0x00000000002821B4 string=0x00000000002821B8 "h"
 *   insn=0x00000000002821C4 string=0x00000000002821D8 ">"
 *   insn=0x00000000002821D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::DimensionSpellComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "DimensionSpell");
}

