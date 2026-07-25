/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECA0C
 * Mangled: _ZNK5Caver5Proto10QuestState13SetCachedSizeEi
 * Demangled: Caver::Proto::QuestState::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002EC910  Caver::Proto::QuestState::~QuestState()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestState::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

