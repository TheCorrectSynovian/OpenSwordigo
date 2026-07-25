/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A4CE0
 * Mangled: _ZThn248_N5Caver9GUIWindow7KeyDownEjjd
 * Demangled: `non-virtual thunk to'Caver::GUIWindow::KeyDown(uint,uint,double)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6C70  Caver::GUIWindow::KeyDown(uint,uint,double)
 *
 * Referenced strings: 1
 *   insn=0x00000000004A4CE4 string=0x00000000001F6C70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GUIWindow::KeyDown(
        Caver::GUIWindow *this,
        unsigned int a2,
        unsigned int a3,
        double a4)
{
  return Caver::GUIWindow::KeyDown((Caver::GUIWindow *)((char *)this - 248), a2, a3, a4);
}

