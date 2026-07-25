/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034512C
 * Mangled: _ZThn88_N5Caver22GameMenuViewController34TabbedMenuViewDismissButtonPressedEPNS_14TabbedMenuViewE
 * Demangled: `non-virtual thunk to'Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed(Caver::TabbedMenuView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000345134 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed(
        Caver::GUIViewController **this,
        Caver::TabbedMenuView *a2)
{
  *((_QWORD *)a2 + 31) = 0;
  return Caver::GUIViewController::DismissModalViewController(*(this - 6));
}

