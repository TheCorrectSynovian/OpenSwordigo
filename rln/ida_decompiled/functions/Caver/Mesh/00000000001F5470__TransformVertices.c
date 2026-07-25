/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5470
 * Mangled: ._ZN5Caver4Mesh17TransformVerticesERKNS_7Matrix4E
 * Demangled: Caver::Mesh::TransformVertices(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *
 * Callees: 1
 *   0x0000000000445C10  Caver::Mesh::TransformVertices(Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5478 string=0x00000000001F547C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::TransformVertices(Caver::Mesh *this, const Caver::Matrix4 *a2)
{
  return _ZN5Caver4Mesh17TransformVerticesERKNS_7Matrix4E(this, a2);
}

