/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3A30
 * Mangled: ._ZN5Caver5Proto5Quest9MergeFromERKS1_
 * Demangled: Caver::Proto::Quest::MergeFrom(Caver::Proto::Quest const&)
 *
 * Callers: 4
 *   0x00000000002E18FC  Caver::Proto::Quest::Quest(Caver::Proto::Quest const&)
 *   0x00000000002E2490  Caver::Proto::Quest::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002E2494  Caver::Proto::Quest::CopyFrom(Caver::Proto::Quest const&)
 *   0x00000000002E7D20  google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Quest> const&)
 *
 * Callees: 1
 *   0x00000000002E18FC  Caver::Proto::Quest::Quest(Caver::Proto::Quest const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3A38 string=0x00000000001F3A3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::Quest::MergeFrom()
{
  JUMPOUT(0x2E1980);
}

