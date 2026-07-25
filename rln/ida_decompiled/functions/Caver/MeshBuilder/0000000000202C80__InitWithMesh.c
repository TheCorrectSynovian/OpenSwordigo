/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202C80
 * Mangled: ._ZN5Caver11MeshBuilder12InitWithMeshERKNS_4MeshEb
 * Demangled: Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *
 * Callers: 3
 *   0x00000000002B78CC  Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *   0x0000000000446A58  Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshInstance *,bool)
 *   0x0000000000447498  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *
 * Callees: 1
 *   0x000000000044604C  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202C88 string=0x0000000000202C8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshBuilder::InitWithMesh(Caver::MeshBuilder *this, const Caver::Mesh *a2, bool a3)
{
  return _ZN5Caver11MeshBuilder12InitWithMeshERKNS_4MeshEb(this, a2, a3);
}

