/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203630
 * Mangled: ._ZN5Caver8GameData14AddEntityClassERKN5boost10shared_ptrINS_11EntityClassEEE
 * Demangled: Caver::GameData::AddEntityClass(boost::shared_ptr<Caver::EntityClass> const&)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003B0278  Caver::GameData::AddEntityClass(boost::shared_ptr<Caver::EntityClass> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203638 string=0x000000000020363C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameData::AddEntityClass()
{
  return _ZN5Caver8GameData14AddEntityClassERKN5boost10shared_ptrINS_11EntityClassEEE();
}

