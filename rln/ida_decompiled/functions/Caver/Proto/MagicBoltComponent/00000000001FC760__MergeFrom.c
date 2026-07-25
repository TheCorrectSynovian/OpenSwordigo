/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC760
 * Mangled: ._ZN5Caver5Proto18MagicBoltComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::MagicBoltComponent::MergeFrom(Caver::Proto::MagicBoltComponent const&)
 *
 * Callers: 3
 *   0x00000000003328D8  Caver::Proto::MagicBoltComponent::MagicBoltComponent(Caver::Proto::MagicBoltComponent const&)
 *   0x0000000000333230  Caver::Proto::MagicBoltComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000333234  Caver::Proto::MagicBoltComponent::CopyFrom(Caver::Proto::MagicBoltComponent const&)
 *
 * Callees: 1
 *   0x00000000003328D8  Caver::Proto::MagicBoltComponent::MagicBoltComponent(Caver::Proto::MagicBoltComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC768 string=0x00000000001FC76C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MagicBoltComponent::MergeFrom()
{
  JUMPOUT(0x332928);
}

