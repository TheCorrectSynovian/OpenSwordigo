/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002038A0
 * Mangled: ._ZN5Caver9GUIWindowC2Ev
 * Demangled: Caver::GUIWindow::GUIWindow(void)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004A1C00  Caver::GUIWindow::GUIWindow(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002038A8 string=0x00000000002038AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::GUIWindow(Caver::GUIWindow *this)
{
  return _ZN5Caver9GUIWindowC2Ev(this);
}

