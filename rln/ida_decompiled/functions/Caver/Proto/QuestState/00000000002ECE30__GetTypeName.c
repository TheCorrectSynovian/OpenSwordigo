/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECE30
 * Mangled: _ZNK5Caver5Proto10QuestState11GetTypeNameEv
 * Demangled: Caver::Proto::QuestState::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000002ECE3C string=0x00000000002ECE40 "S"
 *   insn=0x00000000002ECE40 string=0x00000000002ECE44 "i"
 *   insn=0x00000000002ECE4C string=0x000000000058B18D "Caver.Proto.QuestState"
 *   insn=0x00000000002ECE58 string=0x00000000002ECE5C "W"
 *   insn=0x00000000002ECE5C string=0x00000000002ECE60 "h"
 *   insn=0x00000000002ECE80 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002ECE88 string=0x00000000002ECE8C ""
 *   insn=0x00000000002ECE98 string=0x00000000002ECE9C "k"
 *   insn=0x00000000002ECE9C string=0x00000000002ECEA0 "\t"
 *   insn=0x00000000002ECEA4 string=0x00000000002ECEA8 "A"
 *   insn=0x00000000002ECEA8 string=0x00000000002ECEAC "$"
 *   insn=0x00000000002ECEAC string=0x00000000002ECEB0 "\n("
 *   insn=0x00000000002ECEB0 string=0x00000000002ECEB4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::QuestState::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.QuestState");
}

