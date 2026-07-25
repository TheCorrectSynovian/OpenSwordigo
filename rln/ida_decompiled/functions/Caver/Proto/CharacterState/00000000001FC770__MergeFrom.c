/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC770
 * Mangled: ._ZN5Caver5Proto14CharacterState9MergeFromERKS1_
 * Demangled: Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *
 * Callers: 4
 *   0x00000000002EB780  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *   0x00000000002F30A8  Caver::Proto::CharacterState::CharacterState(Caver::Proto::CharacterState const&)
 *   0x00000000002F49F0  Caver::Proto::CharacterState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002F4B00  Caver::Proto::CharacterState::CopyFrom(Caver::Proto::CharacterState const&)
 *
 * Callees: 1
 *   0x00000000002F12C8  Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC778 string=0x00000000001FC77C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::CharacterState::MergeFrom(
        Caver::Proto::CharacterState *this,
        const Caver::Proto::CharacterState *a2)
{
  return _ZN5Caver5Proto14CharacterState9MergeFromERKS1_(this, a2);
}

