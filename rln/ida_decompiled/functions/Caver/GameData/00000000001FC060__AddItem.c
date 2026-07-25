/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC060
 * Mangled: ._ZN5Caver8GameData7AddItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::GameData::AddItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC068 string=0x00000000001FC06C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameData::AddItem()
{
  JUMPOUT(0x3AFEA0);
}

