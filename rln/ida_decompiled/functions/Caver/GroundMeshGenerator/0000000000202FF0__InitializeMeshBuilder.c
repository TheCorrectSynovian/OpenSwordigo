/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202FF0
 * Mangled: ._ZN5Caver19GroundMeshGenerator21InitializeMeshBuilderEb
 * Demangled: Caver::GroundMeshGenerator::InitializeMeshBuilder(bool)
 *
 * Callers: 3
 *   0x00000000002BAC60  Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *   0x00000000002BB010  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *   0x00000000002BB564  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *
 * Callees: 1
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *
 * Referenced strings: 1
 *   insn=0x0000000000202FF8 string=0x0000000000202FFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GroundMeshGenerator::InitializeMeshBuilder(Caver::GroundMeshGenerator *this)
{
  JUMPOUT(0x2B9E5C);
}

