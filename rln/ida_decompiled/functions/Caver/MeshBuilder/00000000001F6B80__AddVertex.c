/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6B80
 * Mangled: ._ZN5Caver11MeshBuilder9AddVertexERKNS0_6VertexE
 * Demangled: Caver::MeshBuilder::AddVertex(Caver::MeshBuilder::Vertex const&)
 *
 * Callers: 5
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x00000000002BA45C  Caver::GroundMeshGenerator::InsertRoundHatVertices(Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000002BA724  Caver::GroundMeshGenerator::InsertCapForRoundHat(bool,Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000002BB564  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *   0x0000000000447498  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *
 * Callees: 1
 *   0x00000000002BA388  Caver::MeshBuilder::AddVertex(Caver::MeshBuilder::Vertex const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6B88 string=0x00000000001F6B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MeshBuilder::AddVertex()
{
  return _ZN5Caver11MeshBuilder9AddVertexERKNS0_6VertexE();
}

