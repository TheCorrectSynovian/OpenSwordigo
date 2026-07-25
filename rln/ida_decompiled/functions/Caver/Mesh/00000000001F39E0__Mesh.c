/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F39E0
 * Mangled: ._ZN5Caver4MeshC2Ev
 * Demangled: Caver::Mesh::Mesh(void)
 *
 * Callers: 5
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B80BC  Caver::MeshBuilder::MeshBuilder(void)
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x000000000044A508  Caver::MeshPrimitives::Cube(bool)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *
 * Callees: 1
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F39E8 string=0x00000000001F39EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Mesh::Mesh(Caver::Mesh *this)
{
  JUMPOUT(0x2B7234);
}

