/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002039E0
 * Mangled: ._ZN5Caver27GuidePurchaseViewController23SetRestoreButtonEnabledEb
 * Demangled: Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *
 * Callers: 1
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callees: 1
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000002039E8 string=0x00000000002039EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(
        Caver::GuidePurchaseViewController *this,
        bool a2)
{
  return _ZN5Caver27GuidePurchaseViewController23SetRestoreButtonEnabledEb(this, a2);
}

