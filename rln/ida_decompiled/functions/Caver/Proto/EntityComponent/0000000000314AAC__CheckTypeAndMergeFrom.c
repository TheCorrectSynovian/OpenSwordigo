/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314AAC
 * Mangled: _ZN5Caver5Proto15EntityComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::EntityComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F57D0  Caver::Proto::EntityComponent::MergeFrom(Caver::Proto::EntityComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000314AAC string=0x00000000001F57D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EntityComponent::CheckTypeAndMergeFrom(
        Caver::Proto::EntityComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::EntityComponent::MergeFrom();
}

