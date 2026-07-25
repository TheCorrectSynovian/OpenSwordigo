/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF9D0
 * Mangled: ._ZNK5Caver18FWShellPreferences3GetENS_19FWShellIntPrefsEnumE
 * Demangled: Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *
 * Callers: 9
 *   0x000000000020E400  Caver::CaverShell::UpdateViewSize(void)
 *   0x0000000000210EFC  Caver::CaverShell::Update(float)
 *   0x0000000000211014  Caver::CaverShell::Render(Caver::RenderingContext *)
 *   0x00000000002111E0  Caver::CaverShell::ConvertTouchToWindow(Caver::FWTouch const&)
 *   0x000000000021127C  Caver::CaverShell::TouchBegan(Caver::FWTouch const&)
 *   0x0000000000211378  Caver::CaverShell::TouchMoved(Caver::FWTouch const&)
 *   0x0000000000211464  Caver::CaverShell::TouchEnded(Caver::FWTouch const&)
 *   0x0000000000211550  Caver::CaverShell::TouchCancelled(Caver::FWTouch const&)
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000047E2D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF9D8 string=0x00000000001FF9DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FWShellPreferences::Get()
{
  return _ZNK5Caver18FWShellPreferences3GetENS_19FWShellIntPrefsEnumE();
}

