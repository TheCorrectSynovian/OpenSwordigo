/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C500
 * Mangled: _ZNK5Caver23ObjectModifierComponent9classNameEv
 * Demangled: Caver::ObjectModifierComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000028C50C string=0x000000000028C510 "S"
 *   insn=0x000000000028C510 string=0x000000000028C514 "i"
 *   insn=0x000000000028C51C string=0x0000000000588D52 "ObjectModifierComponent"
 *   insn=0x000000000028C52C string=0x000000000028C530 "h"
 *   insn=0x000000000028C53C string=0x000000000028C550 "`"
 *   insn=0x000000000028C550 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028C564 string=0x000000000028C568 ""
 *   insn=0x000000000028C56C string=0x000000000028C570 "JYD"
 *   insn=0x000000000028C574 string=0x000000000028C578 "a"
 *   insn=0x000000000028C578 string=0x000000000028C57C ""
 *   insn=0x000000000028C57C string=0x000000000028C580 "H"
 *   insn=0x000000000028C584 string=0x000000000028C588 "( "
 *   insn=0x000000000028C588 string=0x000000000028C58C "?"
 *   insn=0x000000000028C58C string=0x000000000028C590 ""
 *   insn=0x000000000028C590 string=0x000000000028C594 "H"
 *   insn=0x000000000028C594 string=0x000000000028C598 "KA"
 *   insn=0x000000000028C59C string=0x000000000028C5A0 ""
 *   insn=0x000000000028C5A4 string=0x000000000028C5A8 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ObjectModifierComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ObjectModifierComponent");
}

