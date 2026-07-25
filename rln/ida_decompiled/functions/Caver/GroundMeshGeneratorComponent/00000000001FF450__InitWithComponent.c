/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF450
 * Mangled: ._ZN5Caver28GroundMeshGeneratorComponent17InitWithComponentEPKS0_
 * Demangled: Caver::GroundMeshGeneratorComponent::InitWithComponent(Caver::GroundMeshGeneratorComponent const*)
 *
 * Callers: 1
 *   0x00000000002BE6C0  Caver::GroundMeshGeneratorComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002BBB48  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF458 string=0x00000000001FF45C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GroundMeshGeneratorComponent::InitWithComponent()
{
  JUMPOUT(0x2BC058);
}

