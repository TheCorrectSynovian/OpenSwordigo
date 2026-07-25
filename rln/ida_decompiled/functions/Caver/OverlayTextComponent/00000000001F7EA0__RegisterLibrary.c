/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7EA0
 * Mangled: ._ZN5Caver20OverlayTextComponent15RegisterLibraryEv
 * Demangled: Caver::OverlayTextComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000022E0DC  Caver::OverlayTextComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000022E0E0  Caver::OverlayTextComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7EA8 string=0x00000000001F7EAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTextComponent::RegisterLibrary(Caver::OverlayTextComponent *this)
{
  return _ZN5Caver20OverlayTextComponent15RegisterLibraryEv(this);
}

