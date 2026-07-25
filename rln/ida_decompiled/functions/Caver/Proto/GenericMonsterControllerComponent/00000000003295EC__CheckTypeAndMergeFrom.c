/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003295EC
 * Mangled: _ZN5Caver5Proto33GenericMonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD610  Caver::Proto::GenericMonsterControllerComponent::MergeFrom(Caver::Proto::GenericMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000003295EC string=0x00000000001FD610 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GenericMonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::GenericMonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::GenericMonsterControllerComponent::MergeFrom();
}

