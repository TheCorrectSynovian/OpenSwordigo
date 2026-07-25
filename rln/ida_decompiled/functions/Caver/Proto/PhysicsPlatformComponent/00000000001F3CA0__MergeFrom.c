/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3CA0
 * Mangled: ._ZN5Caver5Proto24PhysicsPlatformComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::PhysicsPlatformComponent::MergeFrom(Caver::Proto::PhysicsPlatformComponent const&)
 *
 * Callers: 3
 *   0x000000000031A964  Caver::Proto::PhysicsPlatformComponent::PhysicsPlatformComponent(Caver::Proto::PhysicsPlatformComponent const&)
 *   0x000000000031AE8C  Caver::Proto::PhysicsPlatformComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031AE90  Caver::Proto::PhysicsPlatformComponent::CopyFrom(Caver::Proto::PhysicsPlatformComponent const&)
 *
 * Callees: 1
 *   0x000000000031A964  Caver::Proto::PhysicsPlatformComponent::PhysicsPlatformComponent(Caver::Proto::PhysicsPlatformComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3CA8 string=0x00000000001F3CAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::PhysicsPlatformComponent::MergeFrom()
{
  JUMPOUT(0x31A9B0);
}

