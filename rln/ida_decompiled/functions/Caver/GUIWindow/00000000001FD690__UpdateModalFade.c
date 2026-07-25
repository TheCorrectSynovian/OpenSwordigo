/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD690
 * Mangled: ._ZN5Caver9GUIWindow15UpdateModalFadeEbf
 * Demangled: Caver::GUIWindow::UpdateModalFade(bool,float)
 *
 * Callers: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Callees: 1
 *   0x00000000004A281C  Caver::GUIWindow::UpdateModalFade(bool,float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD694 string=0x00000000004A281C ""
 *   insn=0x00000000001FD698 string=0x00000000001FD69C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::UpdateModalFade(Caver::GUIWindow *this, bool a2, float a3)
{
  return _ZN5Caver9GUIWindow15UpdateModalFadeEbf(this, a2, a3);
}

