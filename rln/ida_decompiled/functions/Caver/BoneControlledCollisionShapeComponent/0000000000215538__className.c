/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215538
 * Mangled: _ZNK5Caver37BoneControlledCollisionShapeComponent9classNameEv
 * Demangled: Caver::BoneControlledCollisionShapeComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000215544 string=0x0000000000215548 "S"
 *   insn=0x0000000000215548 string=0x000000000021554C "i"
 *   insn=0x0000000000215550 string=0x0000000000215554 "a"
 *   insn=0x0000000000215554 string=0x0000000000583835 "BoneControlledCollisionShape"
 *   insn=0x0000000000215564 string=0x0000000000215568 "h"
 *   insn=0x0000000000215574 string=0x0000000000215588 "R"
 *   insn=0x0000000000215588 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021558C string=0x0000000000215590 "\t"
 *   insn=0x0000000000215590 string=0x0000000000215598 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::BoneControlledCollisionShapeComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "BoneControlledCollisionShape");
}

