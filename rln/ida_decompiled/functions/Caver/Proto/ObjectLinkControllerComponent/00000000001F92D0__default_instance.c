/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F92D0
 * Mangled: ._ZN5Caver5Proto29ObjectLinkControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000228C7C  Caver::ObjectLinkControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9D70  Caver::Proto::ObjectLinkControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F92D8 string=0x00000000001F92DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ObjectLinkControllerComponent::default_instance(
        Caver::Proto::ObjectLinkControllerComponent *this)
{
  return _ZN5Caver5Proto29ObjectLinkControllerComponent16default_instanceEv(this);
}

