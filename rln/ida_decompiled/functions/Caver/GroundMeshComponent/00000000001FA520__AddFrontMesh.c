/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA520
 * Mangled: ._ZN5Caver19GroundMeshComponent12AddFrontMeshERKN5boost10shared_ptrINS_4MeshEEE
 * Demangled: Caver::GroundMeshComponent::AddFrontMesh(boost::shared_ptr<Caver::Mesh> const&)
 *
 * Callers: 3
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B78CC  Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callees: 1
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA528 string=0x00000000001FA52C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GroundMeshComponent::AddFrontMesh()
{
  JUMPOUT(0x2B7520);
}

