/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003671C0
 * Mangled: _ZThn72_N5Caver27GuidePurchaseViewController33GuidePurchaseViewBuyButtonPressedEPNS_17GuidePurchaseViewE
 * Demangled: `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewBuyButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callers: 1
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *
 * Callees: 1
 *   0x00000000001F64F0  Caver::GuidePurchaseViewController::GuidePurchaseViewBuyButtonPressed(Caver::GuidePurchaseView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000003671C4 string=0x00000000001F64F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewBuyButtonPressed(
        Caver::GuidePurchaseViewController *this,
        Caver::GuidePurchaseView *a2)
{
  Caver::GuidePurchaseViewController::GuidePurchaseViewBuyButtonPressed(
    (Caver::GuidePurchaseViewController *)((char *)this - 72),
    a2);
}

