/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9100
 * Mangled: ._ZN5Caver19GroundMeshComponent14AddSurfaceMeshERKN5boost10shared_ptrINS_4MeshEEE
 * Demangled: Caver::GroundMeshComponent::AddSurfaceMesh(boost::shared_ptr<Caver::Mesh> const&)
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
 *   insn=0x00000000001F9108 string=0x00000000001F910C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GroundMeshComponent::AddSurfaceMesh()
{
  JUMPOUT(0x2B73D4);
}

