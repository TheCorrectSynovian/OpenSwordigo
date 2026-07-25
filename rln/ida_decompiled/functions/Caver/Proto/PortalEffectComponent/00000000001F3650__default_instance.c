/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3650
 * Mangled: ._ZN5Caver5Proto21PortalEffectComponent16default_instanceEv
 * Demangled: Caver::Proto::PortalEffectComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002AD7D8  Caver::PortalEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FABD0  Caver::Proto::PortalEffectComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3658 string=0x00000000001F365C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::PortalEffectComponent::default_instance(Caver::Proto::PortalEffectComponent *this)
{
  return _ZN5Caver5Proto21PortalEffectComponent16default_instanceEv(this);
}

