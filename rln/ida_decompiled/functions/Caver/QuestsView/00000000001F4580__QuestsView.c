/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4580
 * Mangled: ._ZN5Caver10QuestsViewC2Ev
 * Demangled: Caver::QuestsView::QuestsView(void)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4588 string=0x00000000001F458C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::QuestsView::QuestsView(Caver::QuestsView *this)
{
  return _ZN5Caver10QuestsViewC2Ev(this);
}

