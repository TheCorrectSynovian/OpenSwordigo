/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200D40
 * Mangled: ._ZN5Caver5Proto21PlayerProfile_Counter9MergeFromERKS1_
 * Demangled: Caver::Proto::PlayerProfile_Counter::MergeFrom(Caver::Proto::PlayerProfile_Counter const&)
 *
 * Callers: 4
 *   0x00000000002E8B24  Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(Caver::Proto::PlayerProfile_Counter const&)
 *   0x00000000002E92D0  Caver::Proto::PlayerProfile_Counter::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002E92D4  Caver::Proto::PlayerProfile_Counter::CopyFrom(Caver::Proto::PlayerProfile_Counter const&)
 *   0x00000000002EB688  google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter> const&)
 *
 * Callees: 1
 *   0x00000000002E8B24  Caver::Proto::PlayerProfile_Counter::PlayerProfile_Counter(Caver::Proto::PlayerProfile_Counter const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200D48 string=0x0000000000200D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::PlayerProfile_Counter::MergeFrom()
{
  JUMPOUT(0x2E8B7C);
}

