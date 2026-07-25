/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032ED5C
 * Mangled: _ZNK5Caver5Proto24CollectableItemComponent11GetTypeNameEv
 * Demangled: Caver::Proto::CollectableItemComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000032ED68 string=0x000000000032ED6C "S"
 *   insn=0x000000000032ED6C string=0x000000000032ED70 "i"
 *   insn=0x000000000032ED78 string=0x000000000058C4BD "Caver.Proto.CollectableItemComponent"
 *   insn=0x000000000032ED88 string=0x000000000032ED8C "h"
 *   insn=0x000000000032ED98 string=0x000000000032EDAC "I"
 *   insn=0x000000000032EDAC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032EDB4 string=0x000000000032EDB8 ""
 *   insn=0x000000000032EDC0 string=0x000000000032EDC4 "A"
 *   insn=0x000000000032EDC4 string=0x000000000032EDC8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::CollectableItemComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.CollectableItemComponent");
}

