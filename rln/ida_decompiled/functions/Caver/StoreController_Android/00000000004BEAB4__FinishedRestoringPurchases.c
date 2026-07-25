/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BEAB4
 * Mangled: _ZN5Caver23StoreController_Android26FinishedRestoringPurchasesEv
 * Demangled: Caver::StoreController_Android::FinishedRestoringPurchases(void)
 *
 * Callers: 1
 *   0x00000000001F9FA0  Caver::StoreController_Android::FinishedRestoringPurchases(void)
 *
 * Callees: 1
 *   0x00000000001FFC70  Caver::StoreController::ResetProductUnlocksToPurchases(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000004BEAB4 string=0x00000000004BEAB8 ""
 *   insn=0x00000000004BEAB8 string=0x00000000004BEABC "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreController_Android::FinishedRestoringPurchases(Caver::StoreController_Android *this)
{
  *((_BYTE *)this + 160) = 1;
  return Caver::StoreController::ResetProductUnlocksToPurchases(this);
}

