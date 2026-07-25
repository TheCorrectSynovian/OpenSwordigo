/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB530
 * Mangled: ._ZN5Caver19GroundMeshComponentC2Ev
 * Demangled: Caver::GroundMeshComponent::GroundMeshComponent(void)
 *
 * Callers: 1
 *   0x000000000024F604  Caver::GroundMeshComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002B6BD0  Caver::GroundMeshComponent::GroundMeshComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB538 string=0x00000000001FB53C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshComponent::GroundMeshComponent(Caver::GroundMeshComponent *this)
{
  return _ZN5Caver19GroundMeshComponentC2Ev(this);
}

