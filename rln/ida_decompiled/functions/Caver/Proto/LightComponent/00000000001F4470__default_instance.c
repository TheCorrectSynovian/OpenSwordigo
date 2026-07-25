/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4470
 * Mangled: ._ZN5Caver5Proto14LightComponent16default_instanceEv
 * Demangled: Caver::Proto::LightComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000221DE0  Caver::LightComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9DCC  Caver::Proto::LightComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4478 string=0x00000000001F447C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::LightComponent::default_instance(Caver::Proto::LightComponent *this)
{
  return _ZN5Caver5Proto14LightComponent16default_instanceEv(this);
}

