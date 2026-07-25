/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002008C0
 * Mangled: ._ZN5Caver25SaveProtobufMessageToFileERKN6google8protobuf11MessageLiteERKSs
 * Demangled: Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *
 * Callers: 4
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004893DC  Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002008C8 string=0x00000000002008CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SaveProtobufMessageToFile()
{
  return _ZN5Caver25SaveProtobufMessageToFileERKN6google8protobuf11MessageLiteERKSs();
}

