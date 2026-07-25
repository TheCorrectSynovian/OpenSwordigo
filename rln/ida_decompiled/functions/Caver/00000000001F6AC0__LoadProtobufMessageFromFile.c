/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6AC0
 * Mangled: ._ZN5Caver27LoadProtobufMessageFromFileEPN6google8protobuf11MessageLiteERKSs
 * Demangled: Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *
 * Callers: 8
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x000000000048933C  Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6AC8 string=0x00000000001F6ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::LoadProtobufMessageFromFile()
{
  return _ZN5Caver27LoadProtobufMessageFromFileEPN6google8protobuf11MessageLiteERKSs();
}

