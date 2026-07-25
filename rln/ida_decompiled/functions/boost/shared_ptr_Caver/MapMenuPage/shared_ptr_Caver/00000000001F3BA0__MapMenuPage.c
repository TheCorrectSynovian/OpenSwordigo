/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3BA0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver11MapMenuPageEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::MapMenuPage>::shared_ptr<Caver::MapMenuPage>(Caver::MapMenuPage *)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3BA8 string=0x00000000001F3BAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::MapMenuPage>::shared_ptr<Caver::MapMenuPage>()
{
  JUMPOUT(0x344BA8);
}

