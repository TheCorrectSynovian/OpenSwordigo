/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA5B0
 * Mangled: ._ZN5Caver14SetWindowTitleERKSs
 * Demangled: Caver::SetWindowTitle(std::string const&)
 *
 * Callers: 1
 *   0x00000000004A22B0  Caver::GUIWindow::SetTitle(std::string const&)
 *
 * Callees: 1
 *   0x00000000004B2D60  Caver::SetWindowTitle(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA5B8 string=0x00000000001FA5BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SetWindowTitle()
{
  return _ZN5Caver14SetWindowTitleERKSs();
}

