/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F49F0
 * Mangled: _ZN5Caver5Proto14CharacterState21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::CharacterState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC770  Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002F49F0 string=0x00000000001FC770 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::CharacterState::CheckTypeAndMergeFrom(
        Caver::Proto::CharacterState *this,
        const google::protobuf::MessageLite *a2)
{
  return Caver::Proto::CharacterState::MergeFrom(this, a2);
}

