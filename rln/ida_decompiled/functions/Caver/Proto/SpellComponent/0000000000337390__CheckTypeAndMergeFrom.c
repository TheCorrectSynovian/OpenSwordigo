/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337390
 * Mangled: _ZN5Caver5Proto14SpellComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SpellComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9960  Caver::Proto::SpellComponent::MergeFrom(Caver::Proto::SpellComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000337390 string=0x00000000001F9960 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SpellComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SpellComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::SpellComponent::MergeFrom();
}

