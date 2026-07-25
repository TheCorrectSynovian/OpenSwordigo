/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD3B0
 * Mangled: ._ZN5Caver5Proto19FireBreathComponent16default_instanceEv
 * Demangled: Caver::Proto::FireBreathComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000282714  Caver::FireBreathComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAD54  Caver::Proto::FireBreathComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD3B8 string=0x00000000001FD3BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::FireBreathComponent::default_instance(Caver::Proto::FireBreathComponent *this)
{
  return _ZN5Caver5Proto19FireBreathComponent16default_instanceEv(this);
}

