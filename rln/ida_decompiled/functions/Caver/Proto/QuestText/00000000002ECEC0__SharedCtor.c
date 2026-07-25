/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECEC0
 * Mangled: _ZN5Caver5Proto9QuestText10SharedCtorEv
 * Demangled: Caver::Proto::QuestText::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000002ECEC4 string=0x00000000002ECEC8 ""
 *   insn=0x00000000002ECECC string=0x00000000002ECED0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestText::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::QuestText::_default_quest_name_;
  return this;
}

