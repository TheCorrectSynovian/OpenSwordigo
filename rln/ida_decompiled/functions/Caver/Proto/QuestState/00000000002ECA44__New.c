/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECA44
 * Mangled: _ZNK5Caver5Proto10QuestState3NewEv
 * Demangled: Caver::Proto::QuestState::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x00000000002ECA50 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002ECA54 string=0x00000000002ECA58 ""
 *   insn=0x00000000002ECA60 string=0x00000000002ECA64 ")"
 *   insn=0x00000000002ECA64 string=0x00000000002ECA68 "A"
 *   insn=0x00000000002ECA6C string=0x00000000002ECA70 ""
 *   insn=0x00000000002ECA70 string=0x00000000002ECA74 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestState::New(Caver::Proto::QuestState *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 24) = 0;
  *(_QWORD *)result = off_6C6E98;
  *(_QWORD *)(result + 16) = &Caver::Proto::QuestState::_default_quest_name_;
  *(_DWORD *)(result + 28) = 0;
  return result;
}

