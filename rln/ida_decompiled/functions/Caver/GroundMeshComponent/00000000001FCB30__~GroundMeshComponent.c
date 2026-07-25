/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCB30
 * Mangled: ._ZN5Caver19GroundMeshComponentD2Ev
 * Demangled: Caver::GroundMeshComponent::~GroundMeshComponent()
 *
 * Callers: 1
 *   0x00000000002B6EF4  Caver::GroundMeshComponent::~GroundMeshComponent()
 *
 * Callees: 1
 *   0x00000000002B6C48  Caver::GroundMeshComponent::InitWithComponent(Caver::GroundMeshComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCB38 string=0x00000000001FCB3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GroundMeshComponent::~GroundMeshComponent(Caver::GroundMeshComponent *this)
{
  JUMPOUT(0x2B6CE8);
}

