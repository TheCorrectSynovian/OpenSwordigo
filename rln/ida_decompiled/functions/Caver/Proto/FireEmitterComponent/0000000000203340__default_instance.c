/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203340
 * Mangled: ._ZN5Caver5Proto20FireEmitterComponent16default_instanceEv
 * Demangled: Caver::Proto::FireEmitterComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002A1FD0  Caver::FireEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA468  Caver::Proto::FireEmitterComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203348 string=0x000000000020334C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::FireEmitterComponent::default_instance(Caver::Proto::FireEmitterComponent *this)
{
  return _ZN5Caver5Proto20FireEmitterComponent16default_instanceEv(this);
}

