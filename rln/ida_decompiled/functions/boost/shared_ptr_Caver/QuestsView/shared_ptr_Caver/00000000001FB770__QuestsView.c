/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB770
 * Mangled: ._ZN5boost10shared_ptrIN5Caver10QuestsViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::QuestsView>::shared_ptr<Caver::QuestsView>(Caver::QuestsView *)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB778 string=0x00000000001FB77C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::QuestsView>::shared_ptr<Caver::QuestsView>()
{
  JUMPOUT(0x344C90);
}

