/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033907C
 * Mangled: _ZNK5Caver5Proto12MeshMaterial11GetTypeNameEv
 * Demangled: Caver::Proto::MeshMaterial::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x0000000000339088 string=0x000000000033908C "S"
 *   insn=0x000000000033908C string=0x0000000000339090 "i"
 *   insn=0x0000000000339098 string=0x000000000058C715 "Caver.Proto.MeshMaterial"
 *   insn=0x00000000003390A8 string=0x00000000003390AC "h"
 *   insn=0x00000000003390CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003390D0 string=0x00000000003390D4 " "
 *   insn=0x00000000003390DC string=0x00000000003390E0 "@"
 *   insn=0x00000000003390E0 string=0x00000000003390E4 "h"
 *   insn=0x00000000003390E4 string=0x00000000003390E8 "qE"
 *   insn=0x00000000003390F8 string=0x00000000003390FC "h"
 *   insn=0x00000000003390FC string=0x0000000000339100 ""
 *   insn=0x000000000033910C string=0x0000000000339110 "A"
 *   insn=0x0000000000339118 string=0x000000000033911C ""
 *   insn=0x000000000033911C string=0x0000000000339120 "h"
 *   insn=0x0000000000339120 string=0x0000000000339124 "%F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MeshMaterial::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MeshMaterial");
}

