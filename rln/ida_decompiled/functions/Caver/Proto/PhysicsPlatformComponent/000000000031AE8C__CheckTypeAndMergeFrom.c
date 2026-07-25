/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AE8C
 * Mangled: _ZN5Caver5Proto24PhysicsPlatformComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::PhysicsPlatformComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3CA0  Caver::Proto::PhysicsPlatformComponent::MergeFrom(Caver::Proto::PhysicsPlatformComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000031AE8C string=0x00000000001F3CA0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PhysicsPlatformComponent::CheckTypeAndMergeFrom(
        Caver::Proto::PhysicsPlatformComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::PhysicsPlatformComponent::MergeFrom();
}

