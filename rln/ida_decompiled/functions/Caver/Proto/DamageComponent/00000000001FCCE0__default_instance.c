/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCCE0
 * Mangled: ._ZN5Caver5Proto15DamageComponent16default_instanceEv
 * Demangled: Caver::Proto::DamageComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000263F90  Caver::DamageComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9C84  Caver::Proto::DamageComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCCE8 string=0x00000000001FCCEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::DamageComponent::default_instance(Caver::Proto::DamageComponent *this)
{
  return _ZN5Caver5Proto15DamageComponent16default_instanceEv(this);
}

