/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7880
 * Mangled: ._ZN5Caver7TabView6AddTabERKSs
 * Demangled: Caver::TabView::AddTab(std::string const&)
 *
 * Callers: 1
 *   0x0000000000441A0C  Caver::TabbedMenuView::AddTab(std::string const&)
 *
 * Callees: 1
 *   0x0000000000443134  Caver::TabView::AddTab(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7888 string=0x00000000001F788C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::TabView::AddTab()
{
  return _ZN5Caver7TabView6AddTabERKSs();
}

