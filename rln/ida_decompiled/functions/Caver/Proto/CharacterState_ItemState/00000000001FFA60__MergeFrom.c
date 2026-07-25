/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFA60
 * Mangled: ._ZN5Caver5Proto24CharacterState_ItemState9MergeFromERKS1_
 * Demangled: Caver::Proto::CharacterState_ItemState::MergeFrom(Caver::Proto::CharacterState_ItemState const&)
 *
 * Callers: 4
 *   0x00000000002F26F0  Caver::Proto::CharacterState_ItemState::CharacterState_ItemState(Caver::Proto::CharacterState_ItemState const&)
 *   0x00000000002F2EB8  Caver::Proto::CharacterState_ItemState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002F2EBC  Caver::Proto::CharacterState_ItemState::CopyFrom(Caver::Proto::CharacterState_ItemState const&)
 *   0x00000000002F49F4  google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState> const&)
 *
 * Callees: 1
 *   0x00000000002F26F0  Caver::Proto::CharacterState_ItemState::CharacterState_ItemState(Caver::Proto::CharacterState_ItemState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFA68 string=0x00000000001FFA6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CharacterState_ItemState::MergeFrom(
        Caver::Proto::CharacterState_ItemState *this,
        const Caver::Proto::CharacterState_ItemState *a2)
{
  JUMPOUT(0x2F2754);
}

