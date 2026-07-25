/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201EF0
 * Mangled: ._ZN5Caver5Proto23DimensionSpellComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::DimensionSpellComponent::MergeFrom(Caver::Proto::DimensionSpellComponent const&)
 *
 * Callers: 3
 *   0x000000000033778C  Caver::Proto::DimensionSpellComponent::DimensionSpellComponent(Caver::Proto::DimensionSpellComponent const&)
 *   0x0000000000337998  Caver::Proto::DimensionSpellComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000033799C  Caver::Proto::DimensionSpellComponent::CopyFrom(Caver::Proto::DimensionSpellComponent const&)
 *
 * Callees: 1
 *   0x000000000033778C  Caver::Proto::DimensionSpellComponent::DimensionSpellComponent(Caver::Proto::DimensionSpellComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201EF8 string=0x0000000000201EFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::DimensionSpellComponent::MergeFrom()
{
  JUMPOUT(0x3377D4);
}

