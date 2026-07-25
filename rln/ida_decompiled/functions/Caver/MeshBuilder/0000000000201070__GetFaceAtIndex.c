/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201070
 * Mangled: ._ZNK5Caver11MeshBuilder14GetFaceAtIndexEiPNS0_6VertexES2_S2_
 * Demangled: Caver::MeshBuilder::GetFaceAtIndex(int,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *)
 *
 * Callers: 1
 *   0x0000000000447498  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *
 * Callees: 1
 *   0x00000000004476EC  Caver::MeshBuilder::GetFaceAtIndex(int,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *,Caver::MeshBuilder::Vertex *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201074 string=0x00000000004476EC ""
 *   insn=0x0000000000201078 string=0x000000000020107C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MeshBuilder::GetFaceAtIndex()
{
  return _ZNK5Caver11MeshBuilder14GetFaceAtIndexEiPNS0_6VertexES2_S2_();
}

