/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000308A7C
 * Mangled: _ZNK5Caver5Proto28GroundMeshGeneratorComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000308A34  Caver::Proto::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshGeneratorComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

