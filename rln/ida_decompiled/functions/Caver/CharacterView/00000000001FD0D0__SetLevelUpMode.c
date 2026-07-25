/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD0D0
 * Mangled: ._ZN5Caver13CharacterView14SetLevelUpModeEv
 * Demangled: Caver::CharacterView::SetLevelUpMode(void)
 *
 * Callers: 1
 *   0x000000000036A7A4  Caver::LevelUpViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD0D8 string=0x00000000001FD0DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharacterView::SetLevelUpMode(Caver::CharacterView *this)
{
  return _ZN5Caver13CharacterView14SetLevelUpModeEv(this);
}

