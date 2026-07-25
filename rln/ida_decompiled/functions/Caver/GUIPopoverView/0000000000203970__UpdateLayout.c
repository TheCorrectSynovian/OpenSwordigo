/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203970
 * Mangled: ._ZN5Caver14GUIPopoverView12UpdateLayoutEv
 * Demangled: Caver::GUIPopoverView::UpdateLayout(void)
 *
 * Callers: 2
 *   0x00000000004D3F6C  Caver::GUIPopoverView::SetPopoverContentView(boost::shared_ptr<Caver::GUIView> const&)
 *   0x00000000004D4554  Caver::GUIPopoverView::PresentFromRectangle(Caver::Rectangle const&,uint)
 *
 * Callees: 1
 *   0x00000000004D4048  Caver::GUIPopoverView::UpdateLayout(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203978 string=0x000000000020397C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIPopoverView::UpdateLayout(Caver::GUIPopoverView *this)
{
  return _ZN5Caver14GUIPopoverView12UpdateLayoutEv(this);
}

