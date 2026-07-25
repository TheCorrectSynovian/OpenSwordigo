/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000367C7C
 * Mangled: _ZThn72_N5Caver27GuidePurchaseViewController37GuidePurchaseViewRestoreButtonPressedEPNS_17GuidePurchaseViewE
 * Demangled: `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callers: 1
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callees: 1
 *   0x00000000001F4CA0  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000367C7C string=0x0000000000367C80 "4"
 *   insn=0x0000000000367C80 string=0x00000000001F4CA0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(
        Caver::GuidePurchaseViewController *this,
        Caver::GuidePurchaseView *a2)
{
  return Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(
           (Caver::GuidePurchaseViewController *)((char *)this - 72),
           a2);
}

