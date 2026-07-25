/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6620
 * Mangled: ._ZN5Caver5Proto24PhysicsPlatformComponent16default_instanceEv
 * Demangled: Caver::Proto::PhysicsPlatformComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000280A84  Caver::PhysicsPlatformComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA230  Caver::Proto::PhysicsPlatformComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6628 string=0x00000000001F662C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::PhysicsPlatformComponent::default_instance(
        Caver::Proto::PhysicsPlatformComponent *this)
{
  return _ZN5Caver5Proto24PhysicsPlatformComponent16default_instanceEv(this);
}

