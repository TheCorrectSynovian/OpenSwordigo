/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A15D0
 * Mangled: _ZN5Caver17GUIViewController17ViewWillDisappearEv
 * Demangled: Caver::GUIViewController::ViewWillDisappear(void)
 *
 * Callers: 1
 *   0x00000000004A1418  Caver::GUIViewController::~GUIViewController()
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000004A15D0 string=0x00000000004A15D4 "H"
 *   insn=0x00000000004A15D8 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIViewController *__fastcall Caver::GUIViewController::ViewWillDisappear(Caver::GUIViewController *this)
{
  if ( *((_QWORD *)this + 6) )
    return (Caver::GUIViewController *)Caver::GUIViewController::DismissModalViewController(this);
  return this;
}

