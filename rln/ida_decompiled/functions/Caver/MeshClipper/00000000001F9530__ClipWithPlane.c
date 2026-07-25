/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9530
 * Mangled: ._ZN5Caver11MeshClipper13ClipWithPlaneERKNS_7Vector4E
 * Demangled: Caver::MeshClipper::ClipWithPlane(Caver::Vector4 const&)
 *
 * Callers: 1
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x0000000000448158  Caver::MeshClipper::ClipWithPlane(Caver::Vector4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9538 string=0x00000000001F953C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshClipper::ClipWithPlane(Caver::MeshClipper *this, const Caver::Vector4 *a2)
{
  return _ZN5Caver11MeshClipper13ClipWithPlaneERKNS_7Vector4E(this, a2);
}

