/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5480
 * Mangled: ._ZN5Caver5Proto8DateTime9MergeFromERKS1_
 * Demangled: Caver::Proto::DateTime::MergeFrom(Caver::Proto::DateTime const&)
 *
 * Callers: 4
 *   0x00000000002CDCBC  Caver::Proto::DateTime::DateTime(Caver::Proto::DateTime const&)
 *   0x00000000002CE004  Caver::Proto::DateTime::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002CE008  Caver::Proto::DateTime::CopyFrom(Caver::Proto::DateTime const&)
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *
 * Callees: 1
 *   0x00000000002CDCBC  Caver::Proto::DateTime::DateTime(Caver::Proto::DateTime const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5488 string=0x00000000001F548C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::DateTime::MergeFrom()
{
  JUMPOUT(0x2CDD10);
}

