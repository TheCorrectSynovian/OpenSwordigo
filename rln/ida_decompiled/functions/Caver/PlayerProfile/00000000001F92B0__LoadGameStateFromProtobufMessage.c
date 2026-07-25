/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F92B0
 * Mangled: ._ZN5Caver13PlayerProfile32LoadGameStateFromProtobufMessageERKNS_5Proto9GameStateE
 * Demangled: Caver::PlayerProfile::LoadGameStateFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Callers: 2
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x00000000003C173C  Caver::PlayerProfile::LoadFromProtobufMessage(Caver::Proto::PlayerProfile const&,bool)
 *
 * Callees: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F92B8 string=0x00000000001F92BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PlayerProfile::LoadGameStateFromProtobufMessage(
        Caver::PlayerProfile *this,
        const Caver::Proto::GameState *a2)
{
  JUMPOUT(0x3C0044);
}

