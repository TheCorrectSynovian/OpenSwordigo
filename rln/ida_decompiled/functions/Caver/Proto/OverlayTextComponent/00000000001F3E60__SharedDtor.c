/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3E60
 * Mangled: ._ZN5Caver5Proto20OverlayTextComponent10SharedDtorEv
 * Demangled: Caver::Proto::OverlayTextComponent::SharedDtor(void)
 *
 * Callers: 2
 *   0x0000000000331088  Caver::Proto::OverlayTextComponent::OverlayTextComponent(Caver::Proto::OverlayTextComponent const&)
 *   0x00000000003314E0  Caver::Proto::OverlayTextComponent::~OverlayTextComponent()
 *
 * Callees: 1
 *   0x0000000000331088  Caver::Proto::OverlayTextComponent::OverlayTextComponent(Caver::Proto::OverlayTextComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3E68 string=0x00000000001F3E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::OverlayTextComponent::SharedDtor(Caver::Proto::OverlayTextComponent *this)
{
  JUMPOUT(0x331358);
}

