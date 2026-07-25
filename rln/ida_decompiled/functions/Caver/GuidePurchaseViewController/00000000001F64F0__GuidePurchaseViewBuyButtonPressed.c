/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F64F0
 * Mangled: ._ZN5Caver27GuidePurchaseViewController33GuidePurchaseViewBuyButtonPressedEPNS_17GuidePurchaseViewE
 * Demangled: Caver::GuidePurchaseViewController::GuidePurchaseViewBuyButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callers: 1
 *   0x00000000003671C0  `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewBuyButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callees: 1
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F64F8 string=0x00000000001F64FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GuidePurchaseViewController::GuidePurchaseViewBuyButtonPressed(
        Caver::GuidePurchaseViewController *this,
        Caver::GuidePurchaseView *a2)
{
  JUMPOUT(0x36673C);
}

