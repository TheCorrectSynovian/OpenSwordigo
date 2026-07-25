/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2F5C
 * Mangled: _ZNK5Caver5Proto24CharacterState_ItemState11GetTypeNameEv
 * Demangled: Caver::Proto::CharacterState_ItemState::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000002F2F68 string=0x00000000002F2F6C "S"
 *   insn=0x00000000002F2F6C string=0x00000000002F2F70 "i"
 *   insn=0x00000000002F2F78 string=0x000000000058B1E7 "Caver.Proto.CharacterState.ItemState"
 *   insn=0x00000000002F2F88 string=0x00000000002F2F8C "h"
 *   insn=0x00000000002F2FAC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002F2FB4 string=0x00000000002F2FB8 "\t"
 *   insn=0x00000000002F2FB8 string=0x00000000002F2FBC ""
 *   insn=0x00000000002F2FC0 string=0x00000000002F2FC4 "\t"
 *   insn=0x00000000002F2FC8 string=0x00000000002F2FCC "\t4"
 *   insn=0x00000000002F2FD0 string=0x00000000002F2FD4 ")yC"
 *   insn=0x00000000002F2FD8 string=0x00000000002F2FDC "\n0"
 *   insn=0x00000000002F2FDC string=0x00000000002F2FE0 "\nx"
 *   insn=0x00000000002F2FE4 string=0x00000000002F2FE8 "!"
 *   insn=0x00000000002F2FEC string=0x00000000002F2FF0 "J"
 *   insn=0x00000000002F2FF0 string=0x00000000002F2FF4 ")u@"
 *   insn=0x00000000002F3000 string=0x00000000002F3004 " "
 *   insn=0x00000000002F3008 string=0x00000000002F300C "A"
 *   insn=0x00000000002F3010 string=0x00000000002F3014 ")"
 *   insn=0x00000000002F3014 string=0x00000000002F3018 "J"
 *   insn=0x00000000002F301C string=0x00000000002F3020 "A"
 *   insn=0x00000000002F3020 string=0x00000000002F3024 " "
 *   insn=0x00000000002F3024 string=0x00000000002F3028 "A"
 *   insn=0x00000000002F302C string=0x00000000002F3030 "J"
 *   insn=0x00000000002F3030 string=0x00000000002F3034 "|"
 *   insn=0x00000000002F3038 string=0x00000000002F303C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::CharacterState_ItemState::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.CharacterState.ItemState");
}

