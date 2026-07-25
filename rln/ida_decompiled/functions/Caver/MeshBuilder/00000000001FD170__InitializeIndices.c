/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD170
 * Mangled: ._ZN5Caver11MeshBuilder17InitializeIndicesENS_8DataTypeE
 * Demangled: Caver::MeshBuilder::InitializeIndices(Caver::DataType)
 *
 * Callers: 1
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *
 * Callees: 1
 *   0x000000000044689C  Caver::MeshBuilder::InitializeIndices(Caver::DataType)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD174 string=0x000000000044689C "\t\n"
 *   insn=0x00000000001FD178 string=0x00000000001FD17C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MeshBuilder::InitializeIndices()
{
  return _ZN5Caver11MeshBuilder17InitializeIndicesENS_8DataTypeE();
}

