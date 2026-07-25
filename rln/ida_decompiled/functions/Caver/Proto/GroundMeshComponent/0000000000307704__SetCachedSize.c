/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000307704
 * Mangled: _ZNK5Caver5Proto19GroundMeshComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::GroundMeshComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000003076CC  Caver::Proto::GroundMeshComponent::~GroundMeshComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

