/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201AF0
 * Mangled: ._ZN5Caver15StoreController13UnlockProductERKSs
 * Demangled: Caver::StoreController::UnlockProduct(std::string const&)
 *
 * Callers: 1
 *   0x00000000003EB75C  Caver::PurchaseViewController::HandlePurchaseSuccess(void)
 *
 * Callees: 1
 *   0x00000000003AA148  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201AF8 string=0x0000000000201AFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::StoreController::UnlockProduct()
{
  JUMPOUT(0x3AA3B4);
}

