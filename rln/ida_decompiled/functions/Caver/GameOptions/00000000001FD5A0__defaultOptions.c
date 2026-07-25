/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD5A0
 * Mangled: ._ZN5Caver11GameOptions14defaultOptionsEv
 * Demangled: Caver::GameOptions::defaultOptions(void)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000003C8610  Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callees: 1
 *   0x00000000003B4360  Caver::GameOptions::defaultOptions(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD5A8 string=0x00000000001FD5AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOptions::defaultOptions(Caver::GameOptions *this)
{
  return _ZN5Caver11GameOptions14defaultOptionsEv(this);
}

