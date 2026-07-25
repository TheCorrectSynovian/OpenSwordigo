/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F57D0
 * Mangled: ._ZN5Caver5Proto15EntityComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::EntityComponent::MergeFrom(Caver::Proto::EntityComponent const&)
 *
 * Callers: 3
 *   0x000000000031460C  Caver::Proto::EntityComponent::EntityComponent(Caver::Proto::EntityComponent const&)
 *   0x0000000000314AAC  Caver::Proto::EntityComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000314AB0  Caver::Proto::EntityComponent::CopyFrom(Caver::Proto::EntityComponent const&)
 *
 * Callees: 1
 *   0x000000000031460C  Caver::Proto::EntityComponent::EntityComponent(Caver::Proto::EntityComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F57D8 string=0x00000000001F57DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::EntityComponent::MergeFrom()
{
  JUMPOUT(0x31466C);
}

