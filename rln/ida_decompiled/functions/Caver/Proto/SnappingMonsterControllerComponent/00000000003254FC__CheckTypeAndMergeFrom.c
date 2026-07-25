/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003254FC
 * Mangled: _ZN5Caver5Proto34SnappingMonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F53E0  Caver::Proto::SnappingMonsterControllerComponent::MergeFrom(Caver::Proto::SnappingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000003254FC string=0x00000000001F53E0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SnappingMonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SnappingMonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::SnappingMonsterControllerComponent::MergeFrom();
}

