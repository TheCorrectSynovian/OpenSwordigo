/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003190B4
 * Mangled: _ZNK5Caver5Proto24BreakableObjectComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::BreakableObjectComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031902C  Caver::Proto::BreakableObjectComponent::~BreakableObjectComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BreakableObjectComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

