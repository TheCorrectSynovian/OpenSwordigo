/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002017D0
 * Mangled: ._ZN5Caver5Proto15HealthComponent16default_instanceEv
 * Demangled: Caver::Proto::HealthComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000026FB18  Caver::HealthComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9CD8  Caver::Proto::HealthComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002017D8 string=0x00000000002017DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::HealthComponent::default_instance(Caver::Proto::HealthComponent *this)
{
  return _ZN5Caver5Proto15HealthComponent16default_instanceEv(this);
}

