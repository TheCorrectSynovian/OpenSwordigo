/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8D60
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto31ItemDropComponent_ItemDropEntryEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry> const&)
 *
 * Callers: 1
 *   0x0000000000330140  Caver::Proto::ItemDropComponent::ItemDropComponent(Caver::Proto::ItemDropComponent const&)
 *
 * Callees: 1
 *   0x0000000000330DDC  google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8D68 string=0x00000000001F8D6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto31ItemDropComponent_ItemDropEntryEE9MergeFromERKS5_();
}

