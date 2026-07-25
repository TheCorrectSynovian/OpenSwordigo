/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3A50
 * Mangled: ._ZN5boost10scoped_ptrIN5Caver11MeshClipperEED2Ev
 * Demangled: boost::scoped_ptr<Caver::MeshClipper>::~scoped_ptr()
 *
 * Callers: 1
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3A58 string=0x00000000001F3A5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::scoped_ptr<Caver::MeshClipper>::~scoped_ptr()
{
  JUMPOUT(0x29B0F4);
}

