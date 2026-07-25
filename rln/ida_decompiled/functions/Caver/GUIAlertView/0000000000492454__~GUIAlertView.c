/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000492454
 * Mangled: _ZN5Caver12GUIAlertViewD0Ev
 * Demangled: Caver::GUIAlertView::~GUIAlertView()
 *
 * Callers: 1
 *   0x0000000000491F18  Caver::GUIAlertView::~GUIAlertView()
 *
 * Callees: 4
 *   0x00000000001F6760  Caver::GUIAlertView::~GUIAlertView()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000049248C  Caver::GUIAlertView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x0000000000492464 string=0x00000000001F6760 "0'"
 *   insn=0x0000000000492474 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIAlertView::~GUIAlertView(Caver::GUIAlertView *this)
{
  Caver::GUIAlertView::~GUIAlertView(this);
  operator delete(this);
}

