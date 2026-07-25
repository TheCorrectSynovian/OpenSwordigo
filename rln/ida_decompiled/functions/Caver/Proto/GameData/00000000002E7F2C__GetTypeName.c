/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E7F2C
 * Mangled: _ZNK5Caver5Proto8GameData11GetTypeNameEv
 * Demangled: Caver::Proto::GameData::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002E7F38 string=0x00000000002E7F3C "S"
 *   insn=0x00000000002E7F3C string=0x00000000002E7F40 "i"
 *   insn=0x00000000002E7F48 string=0x000000000058ACA8 "Caver.Proto.GameData"
 *   insn=0x00000000002E7F58 string=0x00000000002E7F5C "h"
 *   insn=0x00000000002E7F7C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GameData::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GameData");
}

