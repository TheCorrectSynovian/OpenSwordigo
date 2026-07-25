/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBEB0
 * Mangled: ._ZN5Caver5Proto19PropertiesComponent16default_instanceEv
 * Demangled: Caver::Proto::PropertiesComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000233298  Caver::PropertiesComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA340  Caver::Proto::PropertiesComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBEB8 string=0x00000000001FBEBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::PropertiesComponent::default_instance(Caver::Proto::PropertiesComponent *this)
{
  return _ZN5Caver5Proto19PropertiesComponent16default_instanceEv(this);
}

