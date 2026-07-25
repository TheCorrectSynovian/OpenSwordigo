/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA510
 * Mangled: ._ZN5Caver9GUIWindow5KeyUpEjjd
 * Demangled: Caver::GUIWindow::KeyUp(uint,uint,double)
 *
 * Callers: 1
 *   0x00000000004A4E00  `non-virtual thunk to'Caver::GUIWindow::KeyUp(uint,uint,double)
 *
 * Callees: 1
 *   0x00000000004A4CE8  Caver::GUIWindow::KeyUp(uint,uint,double)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA518 string=0x00000000001FA51C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::KeyUp(Caver::GUIWindow *this, unsigned int a2, unsigned int a3, double a4)
{
  return _ZN5Caver9GUIWindow5KeyUpEjjd(this, a2, a3, a4);
}

