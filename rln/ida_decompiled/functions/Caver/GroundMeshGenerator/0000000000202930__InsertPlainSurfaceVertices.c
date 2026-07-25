/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202930
 * Mangled: ._ZN5Caver19GroundMeshGenerator26InsertPlainSurfaceVerticesERKNS_7Vector2EffS1_f
 * Demangled: Caver::GroundMeshGenerator::InsertPlainSurfaceVertices(Caver::Vector2 const&,float,float,Caver::Vector2,float)
 *
 * Callers: 1
 *   0x00000000002BAC60  Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *
 * Callees: 1
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *
 * Referenced strings: 1
 *   insn=0x0000000000202938 string=0x000000000020293C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GroundMeshGenerator::InsertPlainSurfaceVertices()
{
  JUMPOUT(0x2BA260);
}

