/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200E80
 * Mangled: ._ZN5Caver5Proto21EntityActionComponent16default_instanceEv
 * Demangled: Caver::Proto::EntityActionComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000267090  Caver::EntityActionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA1FC  Caver::Proto::EntityActionComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200E88 string=0x0000000000200E8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::EntityActionComponent::default_instance(Caver::Proto::EntityActionComponent *this)
{
  return _ZN5Caver5Proto21EntityActionComponent16default_instanceEv(this);
}

