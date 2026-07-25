/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8C20
 * Mangled: ._ZN5Caver5Proto23BlendAnimationComponent16default_instanceEv
 * Demangled: Caver::Proto::BlendAnimationComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000021E6EC  Caver::BlendAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9990  Caver::Proto::BlendAnimationComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8C28 string=0x00000000001F8C2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::BlendAnimationComponent::default_instance(Caver::Proto::BlendAnimationComponent *this)
{
  return _ZN5Caver5Proto23BlendAnimationComponent16default_instanceEv(this);
}

