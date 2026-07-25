/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000345120
 * Mangled: _ZN5Caver22GameMenuViewController34TabbedMenuViewDismissButtonPressedEPNS_14TabbedMenuViewE
 * Demangled: Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed(Caver::TabbedMenuView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000345128 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed(
        Caver::GUIViewController **this,
        Caver::TabbedMenuView *a2)
{
  *((_QWORD *)a2 + 31) = 0;
  return Caver::GUIViewController::DismissModalViewController(this[5]);
}

