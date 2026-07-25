/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9760
 * Mangled: ._ZN5Caver9GUIWindow10MouseMovedERKNS_7Vector2ES3_jd
 * Demangled: Caver::GUIWindow::MouseMoved(Caver::Vector2 const&,Caver::Vector2 const&,uint,double)
 *
 * Callers: 1
 *   0x00000000004A4884  Caver::GUIWindow::MouseMoved(Caver::Vector2 const&,Caver::Vector2 const&,uint,double)
 *
 * Callees: 1
 *   0x00000000004A4884  Caver::GUIWindow::MouseMoved(Caver::Vector2 const&,Caver::Vector2 const&,uint,double)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9768 string=0x00000000001F976C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::MouseMoved(
        Caver::GUIWindow *this,
        const Caver::Vector2 *a2,
        const Caver::Vector2 *a3,
        unsigned int a4,
        double a5)
{
  return _ZN5Caver9GUIWindow10MouseMovedERKNS_7Vector2ES3_jd(this, a2, a3, a4, a5);
}

