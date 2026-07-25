/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5670
 * Mangled: ._ZN5Caver11MeshBuilder18InitializePositionENS_8DataTypeEi
 * Demangled: Caver::MeshBuilder::InitializePosition(Caver::DataType,int)
 *
 * Callers: 1
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *
 * Callees: 1
 *   0x000000000044604C  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5674 string=0x0000000000446834 ""
 *   insn=0x00000000001F5678 string=0x00000000001F567C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::MeshBuilder::InitializePosition()
{
  JUMPOUT(0x446834);
}

