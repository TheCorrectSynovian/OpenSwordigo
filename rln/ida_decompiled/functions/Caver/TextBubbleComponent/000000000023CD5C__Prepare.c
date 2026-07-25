/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CD5C
 * Mangled: _ZN5Caver19TextBubbleComponent7PrepareEv
 * Demangled: Caver::TextBubbleComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB330  Caver::TextBubbleComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000023CD5C string=0x00000000001FB330 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextBubbleComponent::Prepare(Caver::TextBubbleComponent *this)
{
  return Caver::TextBubbleComponent::RegisterLibrary(this);
}

