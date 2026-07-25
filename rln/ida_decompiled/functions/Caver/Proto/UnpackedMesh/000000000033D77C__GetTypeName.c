/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033D77C
 * Mangled: _ZNK5Caver5Proto12UnpackedMesh11GetTypeNameEv
 * Demangled: Caver::Proto::UnpackedMesh::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000033D788 string=0x000000000033D78C "S"
 *   insn=0x000000000033D78C string=0x000000000033D790 "i"
 *   insn=0x000000000033D794 string=0x000000000033D798 "a"
 *   insn=0x000000000033D798 string=0x000000000058C756 "Caver.Proto.UnpackedMesh"
 *   insn=0x000000000033D7A8 string=0x000000000033D7AC "h"
 *   insn=0x000000000033D7CC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::UnpackedMesh::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.UnpackedMesh");
}

