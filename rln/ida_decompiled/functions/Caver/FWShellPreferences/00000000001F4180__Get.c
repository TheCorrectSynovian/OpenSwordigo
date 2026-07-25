/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4180
 * Mangled: ._ZN5Caver18FWShellPreferences3GetENS_21FWShellFloatPrefsEnumE
 * Demangled: Caver::FWShellPreferences::Get(Caver::FWShellFloatPrefsEnum)
 *
 * Callers: 3
 *   0x0000000000210EFC  Caver::CaverShell::Update(float)
 *   0x0000000000211014  Caver::CaverShell::Render(Caver::RenderingContext *)
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000047E2E4  Caver::FWShellPreferences::Get(Caver::FWShellFloatPrefsEnum)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4184 string=0x000000000047E2E4 "H!"
 *   insn=0x00000000001F4188 string=0x00000000001F418C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FWShellPreferences::Get()
{
  return _ZN5Caver18FWShellPreferences3GetENS_21FWShellFloatPrefsEnumE();
}

