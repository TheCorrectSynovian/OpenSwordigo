/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED2DC
 * Mangled: _ZNK5Caver5Proto9QuestText13SetCachedSizeEi
 * Demangled: Caver::Proto::QuestText::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002ED2A4  Caver::Proto::QuestText::~QuestText()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestText::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

