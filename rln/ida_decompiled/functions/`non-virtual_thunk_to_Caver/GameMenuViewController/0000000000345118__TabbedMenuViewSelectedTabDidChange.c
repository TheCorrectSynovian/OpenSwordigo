/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000345118
 * Mangled: _ZThn88_N5Caver22GameMenuViewController34TabbedMenuViewSelectedTabDidChangeEPNS_14TabbedMenuViewE
 * Demangled: `non-virtual thunk to'Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002025D0  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000345118 string=0x000000000034511C "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(
        Caver::GameMenuViewController *this,
        Caver::TabbedMenuView *a2)
{
  return Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(
           (Caver::GameMenuViewController *)((char *)this - 88),
           a2);
}

