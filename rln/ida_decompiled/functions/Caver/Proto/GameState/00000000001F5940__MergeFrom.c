/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5940
 * Mangled: ._ZN5Caver5Proto9GameState9MergeFromERKS1_
 * Demangled: Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *
 * Callers: 4
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *   0x00000000002ED9BC  Caver::Proto::GameState::GameState(Caver::Proto::GameState const&)
 *   0x00000000002F0FA4  Caver::Proto::GameState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002F12C8  Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *
 * Callees: 1
 *   0x00000000002EB780  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5948 string=0x00000000001F594C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState *this, const Caver::Proto::GameState *a2)
{
  return _ZN5Caver5Proto9GameState9MergeFromERKS1_(this, a2);
}

