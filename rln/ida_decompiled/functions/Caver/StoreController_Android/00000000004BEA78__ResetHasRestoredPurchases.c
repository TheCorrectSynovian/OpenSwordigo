/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BEA78
 * Mangled: _ZN5Caver23StoreController_Android25ResetHasRestoredPurchasesEv
 * Demangled: Caver::StoreController_Android::ResetHasRestoredPurchases(void)
 *
 * Callers: 2
 *   0x00000000001F8140  Caver::StoreController_Android::ResetHasRestoredPurchases(void)
 *   0x00000000004BE6D8  Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreController_Android::ResetHasRestoredPurchases(__int64 this)
{
  *(_BYTE *)(this + 160) = 0;
  return this;
}

