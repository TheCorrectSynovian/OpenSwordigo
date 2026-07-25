/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD2C0
 * Mangled: ._ZN5Caver5Proto19EntityInfoComponent16default_instanceEv
 * Demangled: Caver::Proto::EntityInfoComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000026EA50  Caver::EntityInfoComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA264  Caver::Proto::EntityInfoComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD2C8 string=0x00000000001FD2CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::EntityInfoComponent::default_instance(Caver::Proto::EntityInfoComponent *this)
{
  return _ZN5Caver5Proto19EntityInfoComponent16default_instanceEv(this);
}

