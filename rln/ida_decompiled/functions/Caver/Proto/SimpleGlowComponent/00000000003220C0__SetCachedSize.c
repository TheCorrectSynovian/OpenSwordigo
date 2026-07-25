/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003220C0
 * Mangled: _ZNK5Caver5Proto19SimpleGlowComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::SimpleGlowComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000322024  Caver::Proto::SimpleGlowComponent::~SimpleGlowComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SimpleGlowComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

