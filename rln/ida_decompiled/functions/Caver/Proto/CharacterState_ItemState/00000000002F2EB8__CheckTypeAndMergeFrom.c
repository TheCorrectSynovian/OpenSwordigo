/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2EB8
 * Mangled: _ZN5Caver5Proto24CharacterState_ItemState21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::CharacterState_ItemState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFA60  Caver::Proto::CharacterState_ItemState::MergeFrom(Caver::Proto::CharacterState_ItemState const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CharacterState_ItemState::CheckTypeAndMergeFrom(
        Caver::Proto::CharacterState_ItemState *this,
        const Caver::Proto::CharacterState_ItemState *a2)
{
  Caver::Proto::CharacterState_ItemState::MergeFrom(this, a2);
}

