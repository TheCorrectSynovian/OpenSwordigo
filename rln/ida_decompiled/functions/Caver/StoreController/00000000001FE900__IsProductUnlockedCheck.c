/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE900
 * Mangled: ._ZN5Caver15StoreController22IsProductUnlockedCheckERKSs
 * Demangled: Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *
 * Callers: 1
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *
 * Callees: 1
 *   0x00000000003AA148  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE908 string=0x00000000001FE90C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StoreController::IsProductUnlockedCheck()
{
  return _ZN5Caver15StoreController22IsProductUnlockedCheckERKSs();
}

