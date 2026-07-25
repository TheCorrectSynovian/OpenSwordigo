/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A1088
 * Mangled: _ZN5Caver16ProfilePanelView37ScrollViewCanCancelTouchInContentViewEPNS_7GUIViewE
 * Demangled: Caver::ProfilePanelView::ScrollViewCanCancelTouchInContentView(Caver::GUIView *)
 *
 * Callers: 1
 *   0x00000000003A0838  Caver::ProfilePanelView::~ProfilePanelView()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ProfilePanelView::ScrollViewCanCancelTouchInContentView(
        Caver::ProfilePanelView *this,
        Caver::GUIView *a2)
{
  return *((_QWORD *)this + 63) != (_QWORD)a2;
}

