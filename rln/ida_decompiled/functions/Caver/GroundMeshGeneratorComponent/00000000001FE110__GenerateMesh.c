/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE110
 * Mangled: ._ZN5Caver28GroundMeshGeneratorComponent12GenerateMeshEv
 * Demangled: Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callers: 4
 *   0x00000000002BC460  Caver::GroundMeshGeneratorComponent::ComponentValuesChanged(Caver::Component *)
 *   0x00000000002BE350  Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002BE428  Caver::GroundMeshGeneratorComponent::PerformBindedAction(int)
 *   0x00000000002BE46C  `non-virtual thunk to'Caver::GroundMeshGeneratorComponent::PerformBindedAction(int)
 *
 * Callees: 1
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE118 string=0x00000000001FE11C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshGeneratorComponent::GenerateMesh(Caver::GroundMeshGeneratorComponent *this)
{
  return _ZN5Caver28GroundMeshGeneratorComponent12GenerateMeshEv(this);
}

