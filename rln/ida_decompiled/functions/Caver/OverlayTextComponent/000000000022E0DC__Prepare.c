/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E0DC
 * Mangled: _ZN5Caver20OverlayTextComponent7PrepareEv
 * Demangled: Caver::OverlayTextComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EA0  Caver::OverlayTextComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000022E0DC string=0x00000000001F7EA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTextComponent::Prepare(Caver::OverlayTextComponent *this)
{
  return Caver::OverlayTextComponent::RegisterLibrary(this);
}

