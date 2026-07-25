/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000366280
 * Mangled: _ZN5Caver27GuidePurchaseViewController35GuidePurchaseViewCloseButtonPressedEPNS_17GuidePurchaseViewE
 * Demangled: Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x0000000000202050  Caver::GuidePurchaseView::AnimateOut(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000366290 string=0x0000000000366294 "oo"
 *   insn=0x0000000000366294 string=0x0000000000366298 "`"
 *   insn=0x00000000003662A0 string=0x00000000003662A4 "[C"
 *   insn=0x00000000003662A4 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed(
        Caver::GUIViewController **this,
        Caver::GuidePurchaseView *a2)
{
  Caver::GuidePurchaseView::AnimateOut(a2);
  return Caver::GUIViewController::DismissModalViewController(this[5]);
}

