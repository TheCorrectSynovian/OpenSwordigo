/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DE48
 * Mangled: _ZN5Caver5Proto19SpawnPointComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SpawnPointComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6E80  Caver::Proto::SpawnPointComponent::MergeFrom(Caver::Proto::SpawnPointComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000032DE48 string=0x00000000001F6E80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SpawnPointComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SpawnPointComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::SpawnPointComponent::MergeFrom();
}

