/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E464
 * Mangled: _ZNK5Caver25EntityControllerComponent9classNameEv
 * Demangled: Caver::EntityControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000215A9C  Caver::ShapeComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000026E470 string=0x000000000026E474 "S"
 *   insn=0x000000000026E474 string=0x000000000026E478 "i"
 *   insn=0x000000000026E480 string=0x000000000058545E "EntityController"
 *   insn=0x000000000026E490 string=0x000000000026E494 "h"
 *   insn=0x000000000026E4B4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::EntityControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "EntityController");
}

