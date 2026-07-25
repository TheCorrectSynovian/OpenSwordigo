/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAB90
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver4MeshEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Mesh>(Caver::Mesh *)
 *
 * Callers: 5
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B80BC  Caver::MeshBuilder::MeshBuilder(void)
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x000000000044A508  Caver::MeshPrimitives::Cube(bool)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *
 * Callees: 1
 *   0x00000000002B8EAC  boost::detail::shared_count::shared_count<Caver::Mesh>(Caver::Mesh *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAB98 string=0x00000000001FAB9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::Mesh>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver4MeshEEEPT_();
}

