/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F4C94
 * Mangled: _ZNK5Caver5Proto14CharacterState11GetTypeNameEv
 * Demangled: Caver::Proto::CharacterState::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002F4CA0 string=0x00000000002F4CA4 "S"
 *   insn=0x00000000002F4CA4 string=0x00000000002F4CA8 "i"
 *   insn=0x00000000002F4CB0 string=0x000000000058B20C "Caver.Proto.CharacterState"
 *   insn=0x00000000002F4CC0 string=0x00000000002F4CC4 "h"
 *   insn=0x00000000002F4CD0 string=0x00000000002F4CE4 "{"
 *   insn=0x00000000002F4CE4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::CharacterState::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.CharacterState");
}

