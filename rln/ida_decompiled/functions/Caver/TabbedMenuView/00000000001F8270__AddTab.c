/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8270
 * Mangled: ._ZN5Caver14TabbedMenuView6AddTabERKSs
 * Demangled: Caver::TabbedMenuView::AddTab(std::string const&)
 *
 * Callers: 1
 *   0x0000000000342F7C  Caver::GameMenuViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000441A0C  Caver::TabbedMenuView::AddTab(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8278 string=0x00000000001F827C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::TabbedMenuView::AddTab()
{
  return _ZN5Caver14TabbedMenuView6AddTabERKSs();
}

