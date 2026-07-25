/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033C688
 * Mangled: _ZNK5Caver5Proto10PackedMesh11GetTypeNameEv
 * Demangled: Caver::Proto::PackedMesh::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x000000000033C694 string=0x000000000033C698 "S"
 *   insn=0x000000000033C698 string=0x000000000033C69C "i"
 *   insn=0x000000000033C6A4 string=0x000000000058C73F "Caver.Proto.PackedMesh"
 *   insn=0x000000000033C6B0 string=0x000000000033C6B4 "A"
 *   insn=0x000000000033C6B4 string=0x000000000033C6B8 "h"
 *   insn=0x000000000033C6D8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033C6DC string=0x000000000033C6E0 ""
 *   insn=0x000000000033C6E0 string=0x000000000033C6E4 ""
 *   insn=0x000000000033C6E4 string=0x000000000033C6E8 "h"
 *   insn=0x000000000033C6EC string=0x000000000033C6F0 ""
 *   insn=0x000000000033C6F0 string=0x000000000033C6F4 ""
 *   insn=0x000000000033C6F4 string=0x000000000033C6F8 ""
 *   insn=0x000000000033C6F8 string=0x000000000033C6FC "("
 *   insn=0x000000000033C6FC string=0x000000000033C700 "H"
 *   insn=0x000000000033C700 string=0x000000000033C704 ""
 *   insn=0x000000000033C704 string=0x000000000033C708 "8"
 *   insn=0x000000000033C708 string=0x000000000033C70C "H"
 *   insn=0x000000000033C70C string=0x000000000033C710 "mB"
 *   insn=0x000000000033C71C string=0x000000000033C720 "A"
 *   insn=0x000000000033C720 string=0x000000000033C724 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::PackedMesh::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.PackedMesh");
}

