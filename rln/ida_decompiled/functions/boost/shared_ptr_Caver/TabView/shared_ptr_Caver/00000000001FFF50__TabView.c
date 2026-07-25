/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFF50
 * Mangled: ._ZN5boost10shared_ptrIN5Caver7TabViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::TabView>::shared_ptr<Caver::TabView>(Caver::TabView *)
 *
 * Callers: 1
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *
 * Callees: 1
 *   0x0000000000442868  boost::shared_ptr<Caver::TabView>::shared_ptr<Caver::TabView>(Caver::TabView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFF58 string=0x00000000001FFF5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::TabView>::shared_ptr<Caver::TabView>()
{
  return _ZN5boost10shared_ptrIN5Caver7TabViewEEC2IS2_EEPT_();
}

