/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203890
 * Mangled: ._ZN5Caver5Proto15PortalComponent16default_instanceEv
 * Demangled: Caver::Proto::PortalComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000022F984  Caver::PortalComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA9E4  Caver::Proto::PortalComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203898 string=0x000000000020389C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::PortalComponent::default_instance(Caver::Proto::PortalComponent *this)
{
  return _ZN5Caver5Proto15PortalComponent16default_instanceEv(this);
}

