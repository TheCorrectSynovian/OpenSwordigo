/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302DB4
 * Mangled: _ZN5Caver5Proto15SpriteComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SpriteComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE560  Caver::Proto::SpriteComponent::MergeFrom(Caver::Proto::SpriteComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SpriteComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SpriteComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::SpriteComponent::MergeFrom();
}

