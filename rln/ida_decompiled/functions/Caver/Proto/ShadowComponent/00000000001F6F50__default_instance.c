/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6F50
 * Mangled: ._ZN5Caver5Proto15ShadowComponent16default_instanceEv
 * Demangled: Caver::Proto::ShadowComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000234C58  Caver::ShadowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9E20  Caver::Proto::ShadowComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6F58 string=0x00000000001F6F5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ShadowComponent::default_instance(Caver::Proto::ShadowComponent *this)
{
  return _ZN5Caver5Proto15ShadowComponent16default_instanceEv(this);
}

