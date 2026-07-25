/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030CAAC
 * Mangled: _ZNK5Caver5Proto23CollisionShapeComponent11GetTypeNameEv
 * Demangled: Caver::Proto::CollisionShapeComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000030CAB8 string=0x000000000030CABC "S"
 *   insn=0x000000000030CABC string=0x000000000030CAC0 "i"
 *   insn=0x000000000030CAC8 string=0x000000000058BCE1 "Caver.Proto.CollisionShapeComponent"
 *   insn=0x000000000030CAD4 string=0x000000000030CAD8 "8h\t"
 *   insn=0x000000000030CAD8 string=0x000000000030CADC "h"
 *   insn=0x000000000030CAFC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030CB04 string=0x000000000030CB08 "E"
 *   insn=0x000000000030CB14 string=0x000000000030CB18 "A"
 *   insn=0x000000000030CB1C string=0x000000000030CB20 "\tP"
 *   insn=0x000000000030CB20 string=0x000000000030CB24 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::CollisionShapeComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.CollisionShapeComponent");
}

