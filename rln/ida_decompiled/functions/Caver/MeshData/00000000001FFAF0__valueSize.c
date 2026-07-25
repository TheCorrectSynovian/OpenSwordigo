/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFAF0
 * Mangled: ._ZNK5Caver8MeshData9valueSizeEv
 * Demangled: Caver::MeshData::valueSize(void)
 *
 * Callers: 5
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *   0x0000000000448C88  Caver::MeshInstance::CopyAllData(void)
 *   0x0000000000448EB0  Caver::MeshInstance::CopyData(Caver::MeshData const&,Caver::MeshData const&)
 *   0x000000000044A508  Caver::MeshPrimitives::Cube(bool)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *
 * Callees: 1
 *   0x0000000000443E38  Caver::MeshData::valueSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFAF8 string=0x00000000001FFAFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshData::valueSize(Caver::MeshData *this)
{
  return _ZNK5Caver8MeshData9valueSizeEv(this);
}

