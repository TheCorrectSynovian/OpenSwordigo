/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000338270
 * Mangled: _ZNK5Caver5Proto8MeshData11GetTypeNameEv
 * Demangled: Caver::Proto::MeshData::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000033827C string=0x0000000000338280 "S"
 *   insn=0x0000000000338280 string=0x0000000000338284 "i"
 *   insn=0x000000000033828C string=0x000000000058C700 "Caver.Proto.MeshData"
 *   insn=0x0000000000338298 string=0x000000000033829C "G"
 *   insn=0x000000000033829C string=0x00000000003382A0 "h"
 *   insn=0x00000000003382C0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003382C4 string=0x00000000003382C8 "h"
 *   insn=0x00000000003382C8 string=0x00000000003382CC "\tE"
 *   insn=0x00000000003382D8 string=0x00000000003382DC "A"
 *   insn=0x00000000003382E4 string=0x00000000003382E8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MeshData::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MeshData");
}

