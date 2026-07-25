/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7810
 * Mangled: ._ZN5Caver3Map23LoadFromProtobufMessageERKNS_5Proto3MapE
 * Demangled: Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7818 string=0x00000000001F781C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Map::LoadFromProtobufMessage(Caver::Map *this, const Caver::Proto::Map *a2)
{
  return _ZN5Caver3Map23LoadFromProtobufMessageERKNS_5Proto3MapE(this, a2);
}

