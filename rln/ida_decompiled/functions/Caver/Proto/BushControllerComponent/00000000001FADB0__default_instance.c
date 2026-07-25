/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FADB0
 * Mangled: ._ZN5Caver5Proto23BushControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::BushControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002B1858  Caver::BushControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9F58  Caver::Proto::BushControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FADB8 string=0x00000000001FADBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::BushControllerComponent::default_instance(Caver::Proto::BushControllerComponent *this)
{
  return _ZN5Caver5Proto23BushControllerComponent16default_instanceEv(this);
}

