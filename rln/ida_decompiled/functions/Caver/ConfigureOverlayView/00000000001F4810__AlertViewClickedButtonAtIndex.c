/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4810
 * Mangled: ._ZN5Caver20ConfigureOverlayView29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi
 * Demangled: Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callers: 1
 *   0x00000000003C8610  Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callees: 1
 *   0x00000000003C8610  Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4818 string=0x00000000001F481C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(
        Caver::ConfigureOverlayView *this,
        Caver::GUIAlertView *a2,
        int a3)
{
  return _ZN5Caver20ConfigureOverlayView29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi(this, a2, a3);
}

