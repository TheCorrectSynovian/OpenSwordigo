/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEA30
 * Mangled: ._ZN5Caver12GUIAnimation14ScaleAnimationEfff
 * Demangled: Caver::GUIAnimation::ScaleAnimation(float,float,float)
 *
 * Callers: 6
 *   0x00000000003E6BE0  Caver::PurchaseView::AnimateIn(void)
 *   0x00000000003EF488  Caver::StoreView::AnimateIn(void)
 *   0x0000000000404A8C  Caver::GuidePurchaseView::AnimateIn(void)
 *   0x000000000042F460  Caver::PortalView::AnimateIn(void)
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEA38 string=0x00000000001FEA3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIAnimation::ScaleAnimation(Caver::GUIAnimation *this, float a2, float a3, float a4)
{
  JUMPOUT(0x4A61CC);
}

