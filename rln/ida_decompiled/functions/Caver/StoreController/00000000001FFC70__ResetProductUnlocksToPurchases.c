/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFC70
 * Mangled: ._ZN5Caver15StoreController30ResetProductUnlocksToPurchasesEv
 * Demangled: Caver::StoreController::ResetProductUnlocksToPurchases(void)
 *
 * Callers: 1
 *   0x00000000004BEAB4  Caver::StoreController_Android::FinishedRestoringPurchases(void)
 *
 * Callees: 1
 *   0x00000000003AA898  Caver::StoreController::ResetProductUnlocksToPurchases(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFC78 string=0x00000000001FFC7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController::ResetProductUnlocksToPurchases(Caver::StoreController *this)
{
  return _ZN5Caver15StoreController30ResetProductUnlocksToPurchasesEv(this);
}

