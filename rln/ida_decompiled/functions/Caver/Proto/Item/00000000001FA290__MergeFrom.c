/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA290
 * Mangled: ._ZN5Caver5Proto4Item9MergeFromERKS1_
 * Demangled: Caver::Proto::Item::MergeFrom(Caver::Proto::Item const&)
 *
 * Callers: 4
 *   0x00000000002DF7D4  Caver::Proto::Item::Item(Caver::Proto::Item const&)
 *   0x00000000002E0898  Caver::Proto::Item::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002E089C  Caver::Proto::Item::CopyFrom(Caver::Proto::Item const&)
 *   0x00000000002E7AA8  google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Item> const&)
 *
 * Callees: 1
 *   0x00000000002DF7D4  Caver::Proto::Item::Item(Caver::Proto::Item const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA298 string=0x00000000001FA29C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::Item::MergeFrom()
{
  JUMPOUT(0x2DF868);
}

