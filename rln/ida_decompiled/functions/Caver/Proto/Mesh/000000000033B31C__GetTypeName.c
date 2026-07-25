/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B31C
 * Mangled: _ZNK5Caver5Proto4Mesh11GetTypeNameEv
 * Demangled: Caver::Proto::Mesh::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000033B328 string=0x000000000033B32C "S"
 *   insn=0x000000000033B32C string=0x000000000033B330 "i"
 *   insn=0x000000000033B338 string=0x000000000058C72E "Caver.Proto.Mesh"
 *   insn=0x000000000033B348 string=0x000000000033B34C "h"
 *   insn=0x000000000033B36C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033B370 string=0x000000000033B374 ""
 *   insn=0x000000000033B374 string=0x000000000033B378 ""
 *   insn=0x000000000033B380 string=0x000000000033B384 " "
 *   insn=0x000000000033B384 string=0x000000000033B388 ""
 *   insn=0x000000000033B388 string=0x000000000033B38C ""
 *   insn=0x000000000033B38C string=0x000000000033B390 "0"
 *   insn=0x000000000033B390 string=0x000000000033B394 "h"
 *   insn=0x000000000033B394 string=0x000000000033B398 "uB"
 *   insn=0x000000000033B398 string=0x000000000033B39C "D"
 *   insn=0x000000000033B39C string=0x000000000033B3A0 "H"
 *   insn=0x000000000033B3A0 string=0x000000000033B3A4 ""
 *   insn=0x000000000033B3B0 string=0x000000000033B3B4 "A"
 *   insn=0x000000000033B3B4 string=0x000000000033B3B8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Mesh::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Mesh");
}

