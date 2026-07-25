/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201DF0
 * Mangled: ._ZN5Caver4Mesh23GetVertexIndicesForFaceEiPi
 * Demangled: Caver::Mesh::GetVertexIndicesForFace(int,int *)
 *
 * Callers: 1
 *   0x0000000000448F50  Caver::MeshInstance::UpdateFaceNormals(void)
 *
 * Callees: 1
 *   0x0000000000445E94  Caver::Mesh::GetVertexIndicesForFace(int,int *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201DF4 string=0x0000000000445E94 "(|@"
 *   insn=0x0000000000201DF8 string=0x0000000000201DFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::GetVertexIndicesForFace(Caver::Mesh *this, int a2, int *a3)
{
  return _ZN5Caver4Mesh23GetVertexIndicesForFaceEiPi(this, a2, a3);
}

