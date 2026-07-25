/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318C2C
 * Mangled: _ZN5Caver5Proto22PhysicsObjectComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::PhysicsObjectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F36A0  Caver::Proto::PhysicsObjectComponent::MergeFrom(Caver::Proto::PhysicsObjectComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000318C2C string=0x00000000001F36A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PhysicsObjectComponent::CheckTypeAndMergeFrom(
        Caver::Proto::PhysicsObjectComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::PhysicsObjectComponent::MergeFrom();
}

