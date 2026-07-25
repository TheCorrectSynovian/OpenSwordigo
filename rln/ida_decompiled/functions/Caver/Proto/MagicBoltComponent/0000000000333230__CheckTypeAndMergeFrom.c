/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333230
 * Mangled: _ZN5Caver5Proto18MagicBoltComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MagicBoltComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC760  Caver::Proto::MagicBoltComponent::MergeFrom(Caver::Proto::MagicBoltComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000333230 string=0x00000000001FC760 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MagicBoltComponent::CheckTypeAndMergeFrom(
        Caver::Proto::MagicBoltComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MagicBoltComponent::MergeFrom();
}

