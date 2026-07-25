/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8140
 * Mangled: ._ZN5Caver23StoreController_Android25ResetHasRestoredPurchasesEv
 * Demangled: Caver::StoreController_Android::ResetHasRestoredPurchases(void)
 *
 * Callers: 1
 *   0x0000000000478ED0  Java_com_touchfoo_swordigo_Native_applicationDidBecomeActive
 *
 * Callees: 1
 *   0x00000000004BEA78  Caver::StoreController_Android::ResetHasRestoredPurchases(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8148 string=0x00000000001F814C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController_Android::ResetHasRestoredPurchases(Caver::StoreController_Android *this)
{
  return _ZN5Caver23StoreController_Android25ResetHasRestoredPurchasesEv(this);
}

