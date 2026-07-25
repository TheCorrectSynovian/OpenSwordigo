/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA9A0
 * Mangled: ._ZN5Caver5Proto22PhysicsObjectComponent16default_instanceEv
 * Demangled: Caver::Proto::PhysicsObjectComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000027E034  Caver::PhysicsObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA120  Caver::Proto::PhysicsObjectComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA9A8 string=0x00000000001FA9AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::PhysicsObjectComponent::default_instance(Caver::Proto::PhysicsObjectComponent *this)
{
  return _ZN5Caver5Proto22PhysicsObjectComponent16default_instanceEv(this);
}

