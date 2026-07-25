/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336CC8
 * Mangled: _ZN5Caver5Proto22MagicHookshotComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MagicHookshotComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5620  Caver::Proto::MagicHookshotComponent::MergeFrom(Caver::Proto::MagicHookshotComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000336CC8 string=0x00000000001F5620 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MagicHookshotComponent::CheckTypeAndMergeFrom(
        Caver::Proto::MagicHookshotComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MagicHookshotComponent::MergeFrom();
}

