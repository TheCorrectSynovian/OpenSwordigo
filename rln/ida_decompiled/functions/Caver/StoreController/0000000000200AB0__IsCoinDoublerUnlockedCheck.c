/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200AB0
 * Mangled: ._ZN5Caver15StoreController26IsCoinDoublerUnlockedCheckEv
 * Demangled: Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *
 * Callers: 4
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x00000000003AA148  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *   0x00000000004BB450  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *
 * Callees: 1
 *   0x00000000003A9A78  Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200AB8 string=0x0000000000200ABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController::IsCoinDoublerUnlockedCheck(Caver::StoreController *this)
{
  return _ZN5Caver15StoreController26IsCoinDoublerUnlockedCheckEv(this);
}

