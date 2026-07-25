/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7420
 * Mangled: ._ZN5Caver19GroundMeshGenerator19GenerateSurfaceMeshEiPKNS_7Vector2EPKfS5_PKNS_14TextureMappingE
 * Demangled: Caver::GroundMeshGenerator::GenerateSurfaceMesh(int,Caver::Vector2 const*,float const*,float const*,Caver::TextureMapping const*)
 *
 * Callers: 1
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callees: 1
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7428 string=0x00000000001F742C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GroundMeshGenerator::GenerateSurfaceMesh()
{
  JUMPOUT(0x2B9A48);
}

