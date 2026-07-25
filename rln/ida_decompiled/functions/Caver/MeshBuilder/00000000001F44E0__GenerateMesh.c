/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F44E0
 * Mangled: ._ZN5Caver11MeshBuilder12GenerateMeshEv
 * Demangled: Caver::MeshBuilder::GenerateMesh(void)
 *
 * Callers: 5
 *   0x00000000002B78CC  Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *   0x00000000002BAC60  Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *   0x00000000002BB010  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *   0x00000000002BB564  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *   0x00000000004482A4  Caver::MeshClipper::ClippedMesh(int)
 *
 * Callees: 1
 *   0x0000000000447094  Caver::MeshBuilder::GenerateMesh(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F44E8 string=0x00000000001F44EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshBuilder::GenerateMesh(Caver::MeshBuilder *this)
{
  return _ZN5Caver11MeshBuilder12GenerateMeshEv(this);
}

