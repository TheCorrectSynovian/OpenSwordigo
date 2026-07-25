/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9FA0
 * Mangled: ._ZN5Caver23StoreController_Android26FinishedRestoringPurchasesEv
 * Demangled: Caver::StoreController_Android::FinishedRestoringPurchases(void)
 *
 * Callers: 1
 *   0x000000000047A208  Java_com_touchfoo_swordigo_Native_finishedRestoringPurchases
 *
 * Callees: 1
 *   0x00000000004BEAB4  Caver::StoreController_Android::FinishedRestoringPurchases(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9FA8 string=0x00000000001F9FAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController_Android::FinishedRestoringPurchases(Caver::StoreController_Android *this)
{
  return _ZN5Caver23StoreController_Android26FinishedRestoringPurchasesEv(this);
}

