/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201550
 * Mangled: ._ZN5Caver5Proto23MagicSpellCastComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::MagicSpellCastComponent::MergeFrom(Caver::Proto::MagicSpellCastComponent const&)
 *
 * Callers: 3
 *   0x000000000033484C  Caver::Proto::MagicSpellCastComponent::MagicSpellCastComponent(Caver::Proto::MagicSpellCastComponent const&)
 *   0x0000000000334CE4  Caver::Proto::MagicSpellCastComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000334CE8  Caver::Proto::MagicSpellCastComponent::CopyFrom(Caver::Proto::MagicSpellCastComponent const&)
 *
 * Callees: 1
 *   0x000000000033484C  Caver::Proto::MagicSpellCastComponent::MagicSpellCastComponent(Caver::Proto::MagicSpellCastComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201558 string=0x000000000020155C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MagicSpellCastComponent::MergeFrom()
{
  JUMPOUT(0x334898);
}

