/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000441D38
 * Mangled: _ZN5Caver14TabbedMenuView6UpdateEf
 * Demangled: Caver::TabbedMenuView::Update(float)
 *
 * Callers: 1
 *   0x0000000000441A5C  Caver::TabbedMenuView::SetContentView(boost::shared_ptr<Caver::MenuViewPage> const&)
 *
 * Callees: 1
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TabbedMenuView::Update(Caver::GUIView *this, float a2)
{
  return Caver::GUIView::Update(this, a2);
}

