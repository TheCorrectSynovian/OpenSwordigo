/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316BCC
 * Mangled: _ZNK5Caver5Proto23DoorControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::DoorControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000316BD8 string=0x0000000000316BDC "S"
 *   insn=0x0000000000316BDC string=0x0000000000316BE0 "i"
 *   insn=0x0000000000316BE8 string=0x000000000058BEF3 "Caver.Proto.DoorControllerComponent"
 *   insn=0x0000000000316BF8 string=0x0000000000316BFC "h"
 *   insn=0x0000000000316C1C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::DoorControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.DoorControllerComponent");
}

