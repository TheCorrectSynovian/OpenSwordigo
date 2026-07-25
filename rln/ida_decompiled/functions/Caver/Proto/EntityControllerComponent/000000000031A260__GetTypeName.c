/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A260
 * Mangled: _ZNK5Caver5Proto25EntityControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::EntityControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000031A26C string=0x000000000031A270 "S"
 *   insn=0x000000000031A270 string=0x000000000031A274 "i"
 *   insn=0x000000000031A27C string=0x000000000058BF9F "Caver.Proto.EntityControllerComponent"
 *   insn=0x000000000031A288 string=0x000000000031A28C "K2\t"
 *   insn=0x000000000031A28C string=0x000000000031A290 "h"
 *   insn=0x000000000031A29C string=0x000000000031A2B0 "p"
 *   insn=0x000000000031A2B0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031A2B4 string=0x000000000031A2B8 "H"
 *   insn=0x000000000031A2B8 string=0x000000000031A2BC "\tE"
 *   insn=0x000000000031A2C8 string=0x000000000031A2CC "A"
 *   insn=0x000000000031A2CC string=0x000000000031A2D0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::EntityControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.EntityControllerComponent");
}

