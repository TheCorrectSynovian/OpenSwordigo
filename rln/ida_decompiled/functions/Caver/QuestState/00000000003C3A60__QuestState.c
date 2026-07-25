/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3A60
 * Mangled: _ZN5Caver10QuestStateC2Ev
 * Demangled: Caver::QuestState::QuestState(void)
 *
 * Callers: 1
 *   0x0000000000200D50  Caver::QuestState::QuestState(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000003C3A60 string=0x00000000003C3A64 ""
 *   insn=0x00000000003C3A68 string=0x00000000003C3A6C "a"
 *   insn=0x00000000003C3A6C string=0x00000000003C3A70 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::QuestState::QuestState(__int64 this)
{
  *(_BYTE *)(this + 8) = 0;
  *(_QWORD *)this = &byte_6FD2F8;
  return this;
}

