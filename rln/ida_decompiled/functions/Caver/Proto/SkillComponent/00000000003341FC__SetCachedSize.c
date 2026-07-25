/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003341FC
 * Mangled: _ZNK5Caver5Proto14SkillComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::SkillComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000003341C4  Caver::Proto::SkillComponent::~SkillComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkillComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

