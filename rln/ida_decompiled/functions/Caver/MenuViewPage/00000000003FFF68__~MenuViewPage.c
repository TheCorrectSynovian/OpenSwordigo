/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003FFF68
 * Mangled: _ZN5Caver12MenuViewPageD0Ev
 * Demangled: Caver::MenuViewPage::~MenuViewPage()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000003FFF6C  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(boost::shared_ptr<Caver::GUIView> *)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MenuViewPage::~MenuViewPage(Caver::MenuViewPage *this)
{
  __break(1u);
  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(this);
}

