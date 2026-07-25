/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB2E0
 * Mangled: ._ZN5Caver9GUIButton12SetTextColorENS_5ColorE
 * Demangled: Caver::GUIButton::SetTextColor(Caver::Color)
 *
 * Callers: 1
 *   0x00000000003A8080  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *
 * Callees: 1
 *   0x0000000000495F58  Caver::GUIButton::SetTextColor(Caver::Color)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB2E8 string=0x00000000001FB2EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIButton::SetTextColor()
{
  return _ZN5Caver9GUIButton12SetTextColorENS_5ColorE();
}

