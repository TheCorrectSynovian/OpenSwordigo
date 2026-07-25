/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4280
 * Mangled: ._ZN5Caver11MeshClipper11ClippedMeshEi
 * Demangled: Caver::MeshClipper::ClippedMesh(int)
 *
 * Callers: 1
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x00000000004482A4  Caver::MeshClipper::ClippedMesh(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4288 string=0x00000000001F428C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshClipper::ClippedMesh(Caver::MeshClipper *this, int a2)
{
  return _ZN5Caver11MeshClipper11ClippedMeshEi(this, a2);
}

