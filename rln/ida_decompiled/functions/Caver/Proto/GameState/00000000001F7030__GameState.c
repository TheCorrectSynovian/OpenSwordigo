/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7030
 * Mangled: ._ZN5Caver5Proto9GameStateC2Ev
 * Demangled: Caver::Proto::GameState::GameState(void)
 *
 * Callers: 2
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callees: 1
 *   0x00000000002ED7DC  Caver::Proto::QuestText::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7038 string=0x00000000001F703C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameState::GameState(Caver::Proto::GameState *this)
{
  JUMPOUT(0x2ED834);
}

