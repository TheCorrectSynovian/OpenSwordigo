/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB1E0
 * Mangled: ._ZNK5Caver9Rectangle20RectangleByInsettingEf
 * Demangled: Caver::Rectangle::RectangleByInsetting(float)
 *
 * Callers: 6
 *   0x000000000023D32C  Caver::TextBubbleComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000038B894  Caver::ChooseAgeView::LayoutSubviews(void)
 *   0x00000000004296C0  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x00000000004612D4  Caver::PointLightManager::GetOptimizedLights(Caver::Rectangle const&,Caver::PointLight *,int)
 *   0x000000000049008C  Caver::GUIAlertView::UpdateLayout(void)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004B1D44  Caver::Rectangle::RectangleByInsetting(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB1E8 string=0x00000000001FB1EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::RectangleByInsetting(Caver::Rectangle *this, float a2)
{
  return _ZNK5Caver9Rectangle20RectangleByInsettingEf(this, a2);
}

