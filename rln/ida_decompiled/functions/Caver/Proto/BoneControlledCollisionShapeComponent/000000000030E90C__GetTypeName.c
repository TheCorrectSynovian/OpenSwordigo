/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E90C
 * Mangled: _ZNK5Caver5Proto37BoneControlledCollisionShapeComponent11GetTypeNameEv
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000030E918 string=0x000000000030E91C "S"
 *   insn=0x000000000030E91C string=0x000000000030E920 "i"
 *   insn=0x000000000030E928 string=0x000000000058BD3D "Caver.Proto.BoneControlledCollisionShapeComponent"
 *   insn=0x000000000030E938 string=0x000000000030E93C "h"
 *   insn=0x000000000030E948 string=0x000000000030E95C "]"
 *   insn=0x000000000030E95C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030E964 string=0x000000000030E968 "M@"
 *   insn=0x000000000030E970 string=0x000000000030E974 ")"
 *   insn=0x000000000030E978 string=0x000000000030E97C "J"
 *   insn=0x000000000030E97C string=0x000000000030E980 "A"
 *   insn=0x000000000030E980 string=0x000000000030E984 " "
 *   insn=0x000000000030E988 string=0x000000000030E98C "@"
 *   insn=0x000000000030E990 string=0x000000000030E994 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::BoneControlledCollisionShapeComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.BoneControlledCollisionShapeComponent");
}

