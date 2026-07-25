/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8870
 * Mangled: ._ZN5Caver5Proto20OverlayTextComponent16default_instanceEv
 * Demangled: Caver::Proto::OverlayTextComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000022D0C0  Caver::OverlayTextComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAB74  Caver::Proto::OverlayTextComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8878 string=0x00000000001F887C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::OverlayTextComponent::default_instance(Caver::Proto::OverlayTextComponent *this)
{
  return _ZN5Caver5Proto20OverlayTextComponent16default_instanceEv(this);
}

