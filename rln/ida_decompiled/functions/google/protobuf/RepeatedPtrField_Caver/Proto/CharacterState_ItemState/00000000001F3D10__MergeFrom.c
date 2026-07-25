/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3D10
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto24CharacterState_ItemStateEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState> const&)
 *
 * Callers: 1
 *   0x00000000002F12C8  Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *
 * Callees: 1
 *   0x00000000002F49F4  google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3D18 string=0x00000000001F3D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto24CharacterState_ItemStateEE9MergeFromERKS5_();
}

