/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003662A8
 * Mangled: _ZThn72_N5Caver27GuidePurchaseViewController35GuidePurchaseViewCloseButtonPressedEPNS_17GuidePurchaseViewE
 * Demangled: `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x0000000000202050  Caver::GuidePurchaseView::AnimateOut(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000003662B8 string=0x00000000003662BC "eo"
 *   insn=0x00000000003662BC string=0x00000000003662C0 "`"
 *   insn=0x00000000003662C8 string=0x00000000003662CC "QC"
 *   insn=0x00000000003662CC string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed(
        Caver::GUIViewController **this,
        Caver::GuidePurchaseView *a2)
{
  Caver::GuidePurchaseView::AnimateOut(a2);
  return Caver::GUIViewController::DismissModalViewController(*(this - 4));
}

