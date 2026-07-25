/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC5D4
 * Mangled: _ZN5Caver5Proto10QuestState10SharedCtorEv
 * Demangled: Caver::Proto::QuestState::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000002EC5D8 string=0x00000000002EC5DC ""
 *   insn=0x00000000002EC5E4 string=0x00000000002EC5E8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestState::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_BYTE *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::QuestState::_default_quest_name_;
  return this;
}

