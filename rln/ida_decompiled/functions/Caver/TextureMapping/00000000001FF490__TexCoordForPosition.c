/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF490
 * Mangled: ._ZNK5Caver14TextureMapping19TexCoordForPositionERKNS_7Vector3E
 * Demangled: Caver::TextureMapping::TexCoordForPosition(Caver::Vector3 const&)
 *
 * Callers: 5
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x00000000002BA45C  Caver::GroundMeshGenerator::InsertRoundHatVertices(Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000002BA724  Caver::GroundMeshGenerator::InsertCapForRoundHat(bool,Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000002BB564  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *   0x00000000002C2838  Caver::WaterMeshComponent::CreateMesh(void)
 *
 * Callees: 1
 *   0x00000000004CF834  Caver::TextureMapping::TexCoordForPosition(Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF498 string=0x00000000001FF49C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureMapping::TexCoordForPosition(Caver::TextureMapping *this, const Caver::Vector3 *a2)
{
  return _ZNK5Caver14TextureMapping19TexCoordForPositionERKNS_7Vector3E(this, a2);
}

