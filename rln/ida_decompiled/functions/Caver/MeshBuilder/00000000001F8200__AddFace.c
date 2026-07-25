/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8200
 * Mangled: ._ZN5Caver11MeshBuilder7AddFaceEiii
 * Demangled: Caver::MeshBuilder::AddFace(int,int,int)
 *
 * Callers: 4
 *   0x00000000002BA724  Caver::GroundMeshGenerator::InsertCapForRoundHat(bool,Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000002BAC60  Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *   0x00000000002BB010  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *   0x0000000000447498  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *
 * Callees: 1
 *   0x00000000002BAADC  Caver::MeshBuilder::AddFace(int,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8208 string=0x00000000001F820C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshBuilder::AddFace(Caver::MeshBuilder *this, int a2, int a3, int a4)
{
  return _ZN5Caver11MeshBuilder7AddFaceEiii(this, a2, a3, a4);
}

