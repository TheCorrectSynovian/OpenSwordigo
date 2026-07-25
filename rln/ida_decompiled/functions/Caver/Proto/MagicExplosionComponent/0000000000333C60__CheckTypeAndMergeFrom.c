/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333C60
 * Mangled: _ZN5Caver5Proto23MagicExplosionComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MagicExplosionComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA070  Caver::Proto::MagicExplosionComponent::MergeFrom(Caver::Proto::MagicExplosionComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000333C60 string=0x00000000001FA070 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MagicExplosionComponent::CheckTypeAndMergeFrom(
        Caver::Proto::MagicExplosionComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MagicExplosionComponent::MergeFrom();
}

