/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202790
 * Mangled: ._ZN5Caver9GUIWindow17MouseWheelRotatedEfRKNS_7Vector2Ejd
 * Demangled: Caver::GUIWindow::MouseWheelRotated(float,Caver::Vector2 const&,uint,double)
 *
 * Callers: 1
 *   0x00000000004A49E8  Caver::GUIWindow::MouseWheelRotated(float,Caver::Vector2 const&,uint,double)
 *
 * Callees: 1
 *   0x00000000004A49E8  Caver::GUIWindow::MouseWheelRotated(float,Caver::Vector2 const&,uint,double)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202798 string=0x000000000020279C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::MouseWheelRotated(
        Caver::GUIWindow *this,
        float a2,
        const Caver::Vector2 *a3,
        unsigned int a4,
        double a5)
{
  return _ZN5Caver9GUIWindow17MouseWheelRotatedEfRKNS_7Vector2Ejd(this, a2, a3, a4, a5);
}

