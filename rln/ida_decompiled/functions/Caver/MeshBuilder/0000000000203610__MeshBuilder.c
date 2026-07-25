/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203610
 * Mangled: ._ZN5Caver11MeshBuilderC2Ev
 * Demangled: Caver::MeshBuilder::MeshBuilder(void)
 *
 * Callers: 4
 *   0x00000000002B78CC  Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *   0x0000000000447FAC  Caver::MeshClipper::MeshClipper(void)
 *   0x00000000004482A4  Caver::MeshClipper::ClippedMesh(int)
 *
 * Callees: 1
 *   0x00000000002B80BC  Caver::MeshBuilder::MeshBuilder(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203618 string=0x000000000020361C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshBuilder::MeshBuilder(Caver::MeshBuilder *this)
{
  return _ZN5Caver11MeshBuilderC2Ev(this);
}

