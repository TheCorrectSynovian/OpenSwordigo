/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA6E0
 * Mangled: ._ZN5Caver5Proto25EntityControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::EntityControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000026A4E0  Caver::EntityControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA1A8  Caver::Proto::EntityControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA6E8 string=0x00000000001FA6EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::EntityControllerComponent::default_instance(
        Caver::Proto::EntityControllerComponent *this)
{
  return _ZN5Caver5Proto25EntityControllerComponent16default_instanceEv(this);
}

