/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337998
 * Mangled: _ZN5Caver5Proto23DimensionSpellComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::DimensionSpellComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201EF0  Caver::Proto::DimensionSpellComponent::MergeFrom(Caver::Proto::DimensionSpellComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::DimensionSpellComponent::CheckTypeAndMergeFrom(
        Caver::Proto::DimensionSpellComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::DimensionSpellComponent::MergeFrom();
}

