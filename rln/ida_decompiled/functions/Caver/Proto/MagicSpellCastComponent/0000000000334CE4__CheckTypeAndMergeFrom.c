/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334CE4
 * Mangled: _ZN5Caver5Proto23MagicSpellCastComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MagicSpellCastComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201550  Caver::Proto::MagicSpellCastComponent::MergeFrom(Caver::Proto::MagicSpellCastComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MagicSpellCastComponent::CheckTypeAndMergeFrom(
        Caver::Proto::MagicSpellCastComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MagicSpellCastComponent::MergeFrom();
}

