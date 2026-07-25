/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F94D0
 * Mangled: ._ZN5Caver8GameData23LoadFromProtobufMessageERKNS_5Proto8GameDataE
 * Demangled: Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F94D8 string=0x00000000001F94DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameData::LoadFromProtobufMessage(Caver::GameData *this, const Caver::Proto::GameData *a2)
{
  return _ZN5Caver8GameData23LoadFromProtobufMessageERKNS_5Proto8GameDataE(this, a2);
}

