/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9D80
 * Mangled: ._ZNK5Caver7Matrix419InverseTranspose3x3Ev
 * Demangled: Caver::Matrix4::InverseTranspose3x3(void)
 *
 * Callers: 2
 *   0x0000000000445C10  Caver::Mesh::TransformVertices(Caver::Matrix4 const&)
 *   0x0000000000446FEC  Caver::MeshBuilder::TransformVertices(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004AEEF8  Caver::Matrix4::InverseTranspose3x3(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9D88 string=0x00000000001F9D8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::InverseTranspose3x3(Caver::Matrix4 *this)
{
  return _ZNK5Caver7Matrix419InverseTranspose3x3Ev(this);
}

