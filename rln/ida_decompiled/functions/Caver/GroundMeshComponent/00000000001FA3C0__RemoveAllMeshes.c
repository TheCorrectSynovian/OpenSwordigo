/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA3C0
 * Mangled: ._ZN5Caver19GroundMeshComponent15RemoveAllMeshesEv
 * Demangled: Caver::GroundMeshComponent::RemoveAllMeshes(void)
 *
 * Callers: 2
 *   0x00000000002B78CC  Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callees: 1
 *   0x00000000002B7FC0  Caver::GroundMeshComponent::RemoveAllMeshes(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA3C8 string=0x00000000001FA3CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshComponent::RemoveAllMeshes(Caver::GroundMeshComponent *this)
{
  return _ZN5Caver19GroundMeshComponent15RemoveAllMeshesEv(this);
}

