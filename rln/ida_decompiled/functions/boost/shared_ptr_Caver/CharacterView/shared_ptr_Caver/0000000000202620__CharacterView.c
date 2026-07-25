/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202620
 * Mangled: ._ZN5boost10shared_ptrIN5Caver13CharacterViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::CharacterView>::shared_ptr<Caver::CharacterView>(Caver::CharacterView *)
 *
 * Callers: 2
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x000000000036A7A4  Caver::LevelUpViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202628 string=0x000000000020262C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::CharacterView>::shared_ptr<Caver::CharacterView>()
{
  JUMPOUT(0x344E60);
}

