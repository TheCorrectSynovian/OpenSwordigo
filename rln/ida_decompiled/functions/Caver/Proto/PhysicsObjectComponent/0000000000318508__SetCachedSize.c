/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318508
 * Mangled: _ZNK5Caver5Proto22PhysicsObjectComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::PhysicsObjectComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000318480  Caver::Proto::PhysicsObjectComponent::~PhysicsObjectComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsObjectComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

