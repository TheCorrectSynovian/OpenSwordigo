/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBCB0
 * Mangled: ._ZN5Caver5Proto23CharControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::CharControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000025A740  Caver::CharControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9EF0  Caver::Proto::CharControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBCB8 string=0x00000000001FBCBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::CharControllerComponent::default_instance(Caver::Proto::CharControllerComponent *this)
{
  return _ZN5Caver5Proto23CharControllerComponent16default_instanceEv(this);
}

