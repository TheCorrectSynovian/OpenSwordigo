/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4380
 * Mangled: ._ZN5Caver5Proto19GroundMeshComponentD2Ev
 * Demangled: Caver::Proto::GroundMeshComponent::~GroundMeshComponent()
 *
 * Callers: 1
 *   0x00000000003076CC  Caver::Proto::GroundMeshComponent::~GroundMeshComponent()
 *
 * Callees: 1
 *   0x0000000000306EB8  Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4388 string=0x00000000001F438C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GroundMeshComponent::~GroundMeshComponent(Caver::Proto::GroundMeshComponent *this)
{
  JUMPOUT(0x3072D4);
}

