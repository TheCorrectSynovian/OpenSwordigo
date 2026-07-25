/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9960
 * Mangled: ._ZN5Caver5Proto14SpellComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SpellComponent::MergeFrom(Caver::Proto::SpellComponent const&)
 *
 * Callers: 3
 *   0x0000000000336E24  Caver::Proto::SpellComponent::SpellComponent(Caver::Proto::SpellComponent const&)
 *   0x0000000000337390  Caver::Proto::SpellComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000337394  Caver::Proto::SpellComponent::CopyFrom(Caver::Proto::SpellComponent const&)
 *
 * Callees: 1
 *   0x0000000000336E24  Caver::Proto::SpellComponent::SpellComponent(Caver::Proto::SpellComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9968 string=0x00000000001F996C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::SpellComponent::MergeFrom()
{
  JUMPOUT(0x336E78);
}

