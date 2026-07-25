/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200730
 * Mangled: ._ZN5Caver9GameState23LoadFromProtobufMessageERKNS_5Proto9GameStateE
 * Demangled: Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200738 string=0x000000000020073C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameState::LoadFromProtobufMessage(Caver::GameState *this, const Caver::Proto::GameState *a2)
{
  return _ZN5Caver9GameState23LoadFromProtobufMessageERKNS_5Proto9GameStateE(this, a2);
}

