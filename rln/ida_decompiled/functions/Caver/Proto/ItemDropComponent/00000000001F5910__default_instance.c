/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5910
 * Mangled: ._ZN5Caver5Proto17ItemDropComponent16default_instanceEv
 * Demangled: Caver::Proto::ItemDropComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000276128  Caver::ItemDropComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAB14  Caver::Proto::ItemDropComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5918 string=0x00000000001F591C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ItemDropComponent::default_instance(Caver::Proto::ItemDropComponent *this)
{
  return _ZN5Caver5Proto17ItemDropComponent16default_instanceEv(this);
}

