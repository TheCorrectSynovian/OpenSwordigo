/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D460C
 * Mangled: _ZN5Caver14GUIPopoverView18DismissPopoverViewEv
 * Demangled: Caver::GUIPopoverView::DismissPopoverView(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9AB0  Caver::GUIWindow::DismissPopoverView(Caver::GUIPopoverView *)
 *
 * Referenced strings: 6
 *   insn=0x00000000004D4618 string=0x00000000004D461C "h"
 *   insn=0x00000000004D461C string=0x00000000004D4620 "y@"
 *   insn=0x00000000004D4624 string=0x00000000004D4628 " "
 *   insn=0x00000000004D4628 string=0x00000000004D462C "h"
 *   insn=0x00000000004D4630 string=0x00000000004D4634 "y@"
 *   insn=0x00000000004D4648 string=0x00000000001F9AB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIPopoverView::DismissPopoverView(Caver::GUIPopoverView *this)
{
  Caver::GUIWindow *v2; // x0

  if ( (*(__int64 (__fastcall **)(Caver::GUIPopoverView *))(*(_QWORD *)this + 240LL))(this) )
  {
    v2 = (Caver::GUIWindow *)(*(__int64 (__fastcall **)(Caver::GUIPopoverView *))(*(_QWORD *)this + 240LL))(this);
    Caver::GUIWindow::DismissPopoverView(v2, this);
  }
}

