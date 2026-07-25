/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002025D0
 * Mangled: ._ZN5Caver22GameMenuViewController34TabbedMenuViewSelectedTabDidChangeEPNS_14TabbedMenuViewE
 * Demangled: Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callers: 1
 *   0x0000000000345118  `non-virtual thunk to'Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002025D8 string=0x00000000002025DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(
        Caver::GameMenuViewController *this,
        Caver::TabbedMenuView *a2)
{
  return _ZN5Caver22GameMenuViewController34TabbedMenuViewSelectedTabDidChangeEPNS_14TabbedMenuViewE(this, a2);
}

