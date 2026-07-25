/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5620
 * Mangled: ._ZN5Caver5Proto22MagicHookshotComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::MagicHookshotComponent::MergeFrom(Caver::Proto::MagicHookshotComponent const&)
 *
 * Callers: 3
 *   0x00000000003362FC  Caver::Proto::MagicHookshotComponent::MagicHookshotComponent(Caver::Proto::MagicHookshotComponent const&)
 *   0x0000000000336CC8  Caver::Proto::MagicHookshotComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000336CCC  Caver::Proto::MagicHookshotComponent::CopyFrom(Caver::Proto::MagicHookshotComponent const&)
 *
 * Callees: 1
 *   0x00000000003362FC  Caver::Proto::MagicHookshotComponent::MagicHookshotComponent(Caver::Proto::MagicHookshotComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5628 string=0x00000000001F562C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MagicHookshotComponent::MergeFrom()
{
  JUMPOUT(0x336354);
}

