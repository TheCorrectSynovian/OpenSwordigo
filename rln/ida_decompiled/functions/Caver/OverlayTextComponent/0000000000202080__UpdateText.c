/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202080
 * Mangled: ._ZN5Caver20OverlayTextComponent10UpdateTextEv
 * Demangled: Caver::OverlayTextComponent::UpdateText(void)
 *
 * Callers: 1
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *
 * Callees: 1
 *   0x000000000022E30C  Caver::OverlayTextComponent::UpdateText(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202088 string=0x000000000020208C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTextComponent::UpdateText(Caver::OverlayTextComponent *this)
{
  return _ZN5Caver20OverlayTextComponent10UpdateTextEv(this);
}

