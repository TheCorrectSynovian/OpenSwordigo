/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000263D6C
 * Mangled: _ZNK5Caver24CollectableItemComponent9classNameEv
 * Demangled: Caver::CollectableItemComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000263D78 string=0x0000000000263D7C "S"
 *   insn=0x0000000000263D7C string=0x0000000000263D80 "i"
 *   insn=0x0000000000263D88 string=0x0000000000585732 "CollectableItem"
 *   insn=0x0000000000263D98 string=0x0000000000263D9C "h"
 *   insn=0x0000000000263DA8 string=0x0000000000263DBC "EI"
 *   insn=0x0000000000263DBC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::CollectableItemComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "CollectableItem");
}

