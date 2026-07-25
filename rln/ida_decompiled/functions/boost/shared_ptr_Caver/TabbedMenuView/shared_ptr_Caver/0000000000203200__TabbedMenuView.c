/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203200
 * Mangled: ._ZN5boost10shared_ptrIN5Caver14TabbedMenuViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>(Caver::TabbedMenuView *)
 *
 * Callers: 1
 *   0x0000000000342F7C  Caver::GameMenuViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000346C64  boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>(Caver::TabbedMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203208 string=0x000000000020320C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>()
{
  return _ZN5boost10shared_ptrIN5Caver14TabbedMenuViewEEC2IS2_EEPT_();
}

