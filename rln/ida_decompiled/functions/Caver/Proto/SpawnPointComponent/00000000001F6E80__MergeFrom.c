/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6E80
 * Mangled: ._ZN5Caver5Proto19SpawnPointComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SpawnPointComponent::MergeFrom(Caver::Proto::SpawnPointComponent const&)
 *
 * Callers: 3
 *   0x000000000032D79C  Caver::Proto::SpawnPointComponent::SpawnPointComponent(Caver::Proto::SpawnPointComponent const&)
 *   0x000000000032DE48  Caver::Proto::SpawnPointComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000032DE4C  Caver::Proto::SpawnPointComponent::CopyFrom(Caver::Proto::SpawnPointComponent const&)
 *
 * Callees: 1
 *   0x000000000032D79C  Caver::Proto::SpawnPointComponent::SpawnPointComponent(Caver::Proto::SpawnPointComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6E88 string=0x00000000001F6E8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::SpawnPointComponent::MergeFrom()
{
  JUMPOUT(0x32D7EC);
}

