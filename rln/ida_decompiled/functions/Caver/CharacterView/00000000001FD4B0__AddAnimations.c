/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD4B0
 * Mangled: ._ZN5Caver13CharacterView13AddAnimationsEb
 * Demangled: Caver::CharacterView::AddAnimations(bool)
 *
 * Callers: 2
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x00000000003FF59C  Caver::CharacterView::Dismiss(void)
 *
 * Callees: 1
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD4B8 string=0x00000000001FD4BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharacterView::AddAnimations(Caver::CharacterView *this)
{
  JUMPOUT(0x3FDE3C);
}

