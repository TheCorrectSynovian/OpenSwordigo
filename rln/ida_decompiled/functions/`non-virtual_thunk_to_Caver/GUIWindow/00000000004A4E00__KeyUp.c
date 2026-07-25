/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A4E00
 * Mangled: _ZThn248_N5Caver9GUIWindow5KeyUpEjjd
 * Demangled: `non-virtual thunk to'Caver::GUIWindow::KeyUp(uint,uint,double)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA510  Caver::GUIWindow::KeyUp(uint,uint,double)
 *
 * Referenced strings: 1
 *   insn=0x00000000004A4E04 string=0x00000000001FA510 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GUIWindow::KeyUp(
        Caver::GUIWindow *this,
        unsigned int a2,
        unsigned int a3,
        double a4)
{
  return Caver::GUIWindow::KeyUp((Caver::GUIWindow *)((char *)this - 248), a2, a3, a4);
}

