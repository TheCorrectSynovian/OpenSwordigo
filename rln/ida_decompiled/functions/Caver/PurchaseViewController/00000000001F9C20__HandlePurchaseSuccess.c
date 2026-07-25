/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9C20
 * Mangled: ._ZN5Caver22PurchaseViewController21HandlePurchaseSuccessEv
 * Demangled: Caver::PurchaseViewController::HandlePurchaseSuccess(void)
 *
 * Callers: 1
 *   0x00000000003EB2F4  Caver::PurchaseViewController::PurchaseCompletion(std::string const&,bool,std::string const&)
 *
 * Callees: 1
 *   0x00000000003EB75C  Caver::PurchaseViewController::HandlePurchaseSuccess(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9C28 string=0x00000000001F9C2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PurchaseViewController::HandlePurchaseSuccess(Caver::PurchaseViewController *this)
{
  return _ZN5Caver22PurchaseViewController21HandlePurchaseSuccessEv(this);
}

