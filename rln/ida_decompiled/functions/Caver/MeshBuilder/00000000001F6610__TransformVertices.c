/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6610
 * Mangled: ._ZN5Caver11MeshBuilder17TransformVerticesERKNS_7Matrix4E
 * Demangled: Caver::MeshBuilder::TransformVertices(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x0000000000447FD8  Caver::MeshClipper::InitWithMeshInstance(Caver::MeshInstance *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000446FEC  Caver::MeshBuilder::TransformVertices(Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6618 string=0x00000000001F661C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshBuilder::TransformVertices(Caver::MeshBuilder *this, const Caver::Matrix4 *a2)
{
  return _ZN5Caver11MeshBuilder17TransformVerticesERKNS_7Matrix4E(this, a2);
}

