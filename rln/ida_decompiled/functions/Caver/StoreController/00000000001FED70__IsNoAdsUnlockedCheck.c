/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FED70
 * Mangled: ._ZN5Caver15StoreController20IsNoAdsUnlockedCheckEv
 * Demangled: Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *
 * Callers: 2
 *   0x00000000003AA148  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *   0x00000000004BB450  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *
 * Callees: 1
 *   0x00000000003A9DE0  Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FED78 string=0x00000000001FED7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController::IsNoAdsUnlockedCheck(Caver::StoreController *this)
{
  return _ZN5Caver15StoreController20IsNoAdsUnlockedCheckEv(this);
}

