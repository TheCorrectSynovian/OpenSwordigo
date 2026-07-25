/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023963C
 * Mangled: _ZNK5Caver14ShapeComponent9classNameEv
 * Demangled: Caver::ShapeComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000239648 string=0x000000000023964C "S"
 *   insn=0x000000000023964C string=0x0000000000239650 "i"
 *   insn=0x0000000000239654 string=0x0000000000239658 "A"
 *   insn=0x0000000000239658 string=0x000000000058384C "Shape"
 *   insn=0x0000000000239664 string=0x0000000000239668 "T"
 *   insn=0x0000000000239668 string=0x000000000023966C "h"
 *   insn=0x000000000023968C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000239690 string=0x0000000000239694 "\t"
 *   insn=0x0000000000239694 string=0x0000000000239698 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ShapeComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Shape");
}

