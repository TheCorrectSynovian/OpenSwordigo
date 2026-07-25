/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF430
 * Mangled: ._ZN5Caver23StoreController_Android21HandleProductPurchaseERKSsbS2_
 * Demangled: Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *
 * Callers: 1
 *   0x0000000000479AA8  Java_com_touchfoo_swordigo_Native_storeProductFetchFailed
 *
 * Callees: 1
 *   0x00000000004BE6D8  Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF438 string=0x00000000001FF43C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StoreController_Android::HandleProductPurchase()
{
  return _ZN5Caver23StoreController_Android21HandleProductPurchaseERKSsbS2_();
}

