/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC5C0
 * Mangled: ._ZN5Caver5Proto18MagicBombComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::MagicBombComponent::MergeFrom(Caver::Proto::MagicBombComponent const&)
 *
 * Callers: 3
 *   0x0000000000335C6C  Caver::Proto::MagicBombComponent::MagicBombComponent(Caver::Proto::MagicBombComponent const&)
 *   0x00000000003361D8  Caver::Proto::MagicBombComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003361DC  Caver::Proto::MagicBombComponent::CopyFrom(Caver::Proto::MagicBombComponent const&)
 *
 * Callees: 1
 *   0x0000000000335C6C  Caver::Proto::MagicBombComponent::MagicBombComponent(Caver::Proto::MagicBombComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC5C8 string=0x00000000001FC5CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MagicBombComponent::MergeFrom()
{
  JUMPOUT(0x335CC0);
}

