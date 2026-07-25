/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB330
 * Mangled: ._ZN5Caver19TextBubbleComponent15RegisterLibraryEv
 * Demangled: Caver::TextBubbleComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000023CD5C  Caver::TextBubbleComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000023CD60  Caver::TextBubbleComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB338 string=0x00000000001FB33C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextBubbleComponent::RegisterLibrary(Caver::TextBubbleComponent *this)
{
  return _ZN5Caver19TextBubbleComponent15RegisterLibraryEv(this);
}

