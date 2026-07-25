/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6C70
 * Mangled: ._ZN5Caver9GUIWindow7KeyDownEjjd
 * Demangled: Caver::GUIWindow::KeyDown(uint,uint,double)
 *
 * Callers: 1
 *   0x00000000004A4CE0  `non-virtual thunk to'Caver::GUIWindow::KeyDown(uint,uint,double)
 *
 * Callees: 1
 *   0x00000000004A4B40  Caver::GUIWindow::KeyDown(uint,uint,double)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6C78 string=0x00000000001F6C7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::KeyDown(Caver::GUIWindow *this, unsigned int a2, unsigned int a3, double a4)
{
  return _ZN5Caver9GUIWindow7KeyDownEjjd(this, a2, a3, a4);
}

