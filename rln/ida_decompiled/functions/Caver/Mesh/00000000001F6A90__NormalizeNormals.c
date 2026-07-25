/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6A90
 * Mangled: ._ZN5Caver4Mesh16NormalizeNormalsEv
 * Demangled: Caver::Mesh::NormalizeNormals(void)
 *
 * Callers: 1
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *
 * Callees: 1
 *   0x0000000000445CB8  Caver::Mesh::NormalizeNormals(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6A98 string=0x00000000001F6A9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::NormalizeNormals(Caver::Mesh *this)
{
  return _ZN5Caver4Mesh16NormalizeNormalsEv(this);
}

