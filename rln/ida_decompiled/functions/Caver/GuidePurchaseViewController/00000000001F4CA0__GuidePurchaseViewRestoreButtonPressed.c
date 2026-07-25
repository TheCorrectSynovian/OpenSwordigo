/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4CA0
 * Mangled: ._ZN5Caver27GuidePurchaseViewController37GuidePurchaseViewRestoreButtonPressedEPNS_17GuidePurchaseViewE
 * Demangled: Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callers: 1
 *   0x0000000000367C7C  `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callees: 1
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4CA8 string=0x00000000001F4CAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(
        Caver::GuidePurchaseViewController *this,
        Caver::GuidePurchaseView *a2)
{
  return _ZN5Caver27GuidePurchaseViewController37GuidePurchaseViewRestoreButtonPressedEPNS_17GuidePurchaseViewE(
           this,
           a2);
}

