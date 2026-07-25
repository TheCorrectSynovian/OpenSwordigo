/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201780
 * Mangled: ._ZN5Caver5Proto29ProjectileControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ProjectileControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000028C654  Caver::ProjectileControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAD88  Caver::Proto::ProjectileControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201788 string=0x000000000020178C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ProjectileControllerComponent::default_instance(
        Caver::Proto::ProjectileControllerComponent *this)
{
  return _ZN5Caver5Proto29ProjectileControllerComponent16default_instanceEv(this);
}

