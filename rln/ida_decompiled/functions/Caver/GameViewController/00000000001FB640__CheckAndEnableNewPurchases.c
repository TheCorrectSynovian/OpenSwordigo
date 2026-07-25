/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB640
 * Mangled: ._ZN5Caver18GameViewController26CheckAndEnableNewPurchasesEv
 * Demangled: Caver::GameViewController::CheckAndEnableNewPurchases(void)
 *
 * Callers: 2
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x000000000035A6D4  Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController *)
 *
 * Callees: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB648 string=0x00000000001FB64C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameViewController::CheckAndEnableNewPurchases(Caver::GameViewController *this)
{
  JUMPOUT(0x3542C0);
}

