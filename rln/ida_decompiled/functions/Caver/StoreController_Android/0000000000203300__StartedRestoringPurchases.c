/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203300
 * Mangled: ._ZN5Caver23StoreController_Android25StartedRestoringPurchasesEv
 * Demangled: Caver::StoreController_Android::StartedRestoringPurchases(void)
 *
 * Callers: 1
 *   0x0000000000479AA8  Java_com_touchfoo_swordigo_Native_storeProductFetchFailed
 *
 * Callees: 1
 *   0x00000000004BEA80  Caver::StoreController_Android::StartedRestoringPurchases(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203308 string=0x000000000020330C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController_Android::StartedRestoringPurchases(Caver::StoreController_Android *this)
{
  return _ZN5Caver23StoreController_Android25StartedRestoringPurchasesEv(this);
}

