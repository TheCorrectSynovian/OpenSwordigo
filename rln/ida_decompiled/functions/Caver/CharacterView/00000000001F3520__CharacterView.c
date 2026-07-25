/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3520
 * Mangled: ._ZN5Caver13CharacterViewC2Ev
 * Demangled: Caver::CharacterView::CharacterView(void)
 *
 * Callers: 2
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x000000000036A7A4  Caver::LevelUpViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3528 string=0x00000000001F352C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharacterView::CharacterView(Caver::CharacterView *this)
{
  return _ZN5Caver13CharacterViewC2Ev(this);
}

