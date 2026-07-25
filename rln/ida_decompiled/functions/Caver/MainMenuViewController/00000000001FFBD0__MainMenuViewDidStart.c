/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFBD0
 * Mangled: ._ZN5Caver22MainMenuViewController20MainMenuViewDidStartEPNS_12MainMenuViewE
 * Demangled: Caver::MainMenuViewController::MainMenuViewDidStart(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x000000000036F1D0  Caver::MainMenuViewController::MainMenuViewDidStart(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x000000000036F1D0  Caver::MainMenuViewController::MainMenuViewDidStart(Caver::MainMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFBD8 string=0x00000000001FFBDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MainMenuViewController::MainMenuViewDidStart(
        Caver::MainMenuViewController *this,
        Caver::MainMenuView *a2)
{
  return _ZN5Caver22MainMenuViewController20MainMenuViewDidStartEPNS_12MainMenuViewE(this, a2);
}

