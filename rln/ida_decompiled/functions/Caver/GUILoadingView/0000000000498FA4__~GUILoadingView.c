/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000498FA4
 * Mangled: _ZN5Caver14GUILoadingViewD0Ev
 * Demangled: Caver::GUILoadingView::~GUILoadingView()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000498FDC  Caver::GUINavigationController::GUINavigationController(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x0000000000498FC4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000498FD4 string=0x0000000000498FD8 ";"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUILoadingView::~GUILoadingView(Caver::GUILoadingView *this)
{
  Caver::GUIView::~GUIView(this);
  operator delete(this);
}

