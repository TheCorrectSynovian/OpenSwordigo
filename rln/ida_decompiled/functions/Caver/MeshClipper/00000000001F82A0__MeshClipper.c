/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F82A0
 * Mangled: ._ZN5Caver11MeshClipperC2Ev
 * Demangled: Caver::MeshClipper::MeshClipper(void)
 *
 * Callers: 1
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x0000000000447FAC  Caver::MeshClipper::MeshClipper(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F82A8 string=0x00000000001F82AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshClipper::MeshClipper(Caver::MeshClipper *this)
{
  return _ZN5Caver11MeshClipperC2Ev(this);
}

