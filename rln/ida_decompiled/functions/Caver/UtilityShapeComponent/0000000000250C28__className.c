/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250C28
 * Mangled: _ZNK5Caver21UtilityShapeComponent9classNameEv
 * Demangled: Caver::UtilityShapeComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000250C34 string=0x0000000000250C38 "S"
 *   insn=0x0000000000250C38 string=0x0000000000250C3C "i"
 *   insn=0x0000000000250C44 string=0x00000000005854CB "UtilityShape"
 *   insn=0x0000000000250C54 string=0x0000000000250C58 "h"
 *   insn=0x0000000000250C78 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000250C80 string=0x0000000000250C88 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::UtilityShapeComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "UtilityShape");
}

