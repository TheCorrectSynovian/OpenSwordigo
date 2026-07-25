/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5B90
 * Mangled: ._ZN5Caver5Proto11GameOptions9MergeFromERKS1_
 * Demangled: Caver::Proto::GameOptions::MergeFrom(Caver::Proto::GameOptions const&)
 *
 * Callers: 3
 *   0x00000000002E51E8  Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions const&)
 *   0x00000000002E6390  Caver::Proto::GameOptions::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002E6394  Caver::Proto::GameOptions::CopyFrom(Caver::Proto::GameOptions const&)
 *
 * Callees: 1
 *   0x00000000002E51E8  Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5B98 string=0x00000000001F5B9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::GameOptions::MergeFrom()
{
  JUMPOUT(0x2E52C0);
}

