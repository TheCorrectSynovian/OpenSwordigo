/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203100
 * Mangled: ._ZN5Caver27GuidePurchaseViewController21HandlePurchaseSuccessEv
 * Demangled: Caver::GuidePurchaseViewController::HandlePurchaseSuccess(void)
 *
 * Callers: 2
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callees: 1
 *   0x0000000000367C84  Caver::GuidePurchaseViewController::HandlePurchaseSuccess(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203108 string=0x000000000020310C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GuidePurchaseViewController::HandlePurchaseSuccess(Caver::GuidePurchaseViewController *this)
{
  return _ZN5Caver27GuidePurchaseViewController21HandlePurchaseSuccessEv(this);
}

