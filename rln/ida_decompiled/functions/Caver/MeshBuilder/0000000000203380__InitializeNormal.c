/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203380
 * Mangled: ._ZN5Caver11MeshBuilder16InitializeNormalENS_8DataTypeEi
 * Demangled: Caver::MeshBuilder::InitializeNormal(Caver::DataType,int)
 *
 * Callers: 1
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *
 * Callees: 1
 *   0x0000000000446848  Caver::MeshBuilder::InitializeNormal(Caver::DataType,int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203384 string=0x0000000000446848 ""
 *   insn=0x0000000000203388 string=0x000000000020338C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MeshBuilder::InitializeNormal()
{
  return _ZN5Caver11MeshBuilder16InitializeNormalENS_8DataTypeEi();
}

