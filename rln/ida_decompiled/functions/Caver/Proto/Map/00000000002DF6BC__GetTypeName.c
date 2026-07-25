/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF6BC
 * Mangled: _ZNK5Caver5Proto3Map11GetTypeNameEv
 * Demangled: Caver::Proto::Map::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000002DF6C8 string=0x00000000002DF6CC "S"
 *   insn=0x00000000002DF6CC string=0x00000000002DF6D0 "i"
 *   insn=0x00000000002DF6D4 string=0x00000000002DF6D8 "A"
 *   insn=0x00000000002DF6D8 string=0x000000000058ABF7 "Caver.Proto.Map"
 *   insn=0x00000000002DF6E4 string=0x00000000002DF6E8 "4"
 *   insn=0x00000000002DF6E8 string=0x00000000002DF6EC "h"
 *   insn=0x00000000002DF70C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002DF710 string=0x00000000002DF714 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Map::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Map");
}

