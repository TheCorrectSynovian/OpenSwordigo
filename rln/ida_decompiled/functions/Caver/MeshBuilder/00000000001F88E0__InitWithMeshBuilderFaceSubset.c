/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F88E0
 * Mangled: ._ZN5Caver11MeshBuilder29InitWithMeshBuilderFaceSubsetERKS0_Pii
 * Demangled: Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *
 * Callers: 2
 *   0x00000000002B78CC  Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *   0x00000000004482A4  Caver::MeshClipper::ClippedMesh(int)
 *
 * Callees: 1
 *   0x0000000000447498  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F88E8 string=0x00000000001F88EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(
        Caver::MeshBuilder *this,
        const Caver::MeshBuilder *a2,
        int *a3,
        int a4)
{
  return _ZN5Caver11MeshBuilder29InitWithMeshBuilderFaceSubsetERKS0_Pii(this, a2, a3, a4);
}

