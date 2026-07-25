/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A22B0
 * Mangled: _ZN5Caver9GUIWindow8SetTitleERKSs
 * Demangled: Caver::GUIWindow::SetTitle(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA5B0  Caver::SetWindowTitle(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000004A22B4 string=0x00000000001FA5B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::GUIWindow::SetTitle()
{
  return Caver::SetWindowTitle();
}

