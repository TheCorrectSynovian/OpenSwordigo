/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3940
 * Mangled: ._ZN5boost10shared_ptrIN5Caver13InventoryViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::InventoryView>::shared_ptr<Caver::InventoryView>(Caver::InventoryView *)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3948 string=0x00000000001F394C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::InventoryView>::shared_ptr<Caver::InventoryView>()
{
  JUMPOUT(0x344F48);
}

