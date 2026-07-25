/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203C30
 * Mangled: ._ZN5Caver15StoreController20IsGuideUnlockedCheckEv
 * Demangled: Caver::StoreController::IsGuideUnlockedCheck(void)
 *
 * Callers: 4
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000371414  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x00000000003AA148  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *   0x00000000004BB450  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *
 * Callees: 1
 *   0x00000000003A9710  Caver::StoreController::IsGuideUnlockedCheck(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203C38 string=0x0000000000203C3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController::IsGuideUnlockedCheck(Caver::StoreController *this)
{
  return _ZN5Caver15StoreController20IsGuideUnlockedCheckEv(this);
}

