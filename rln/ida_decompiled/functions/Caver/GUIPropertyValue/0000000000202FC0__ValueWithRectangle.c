/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202FC0
 * Mangled: ._ZN5Caver16GUIPropertyValue18ValueWithRectangleERKNS_9RectangleE
 * Demangled: Caver::GUIPropertyValue::ValueWithRectangle(Caver::Rectangle const&)
 *
 * Callers: 9
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x0000000000425ABC  Caver::MapView::Update(float)
 *   0x000000000043D4B0  Caver::SkillPickerView::AddAnimations(bool)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x000000000048F638  Caver::GUIAlertView::AddAnimations(bool)
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x00000000004A7914  Caver::GUIPropertyValue::InterpolatedValue(Caver::GUIPropertyValue const&,Caver::GUIPropertyValue const&,float)
 *
 * Callees: 1
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202FC8 string=0x0000000000202FCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIPropertyValue::ValueWithRectangle()
{
  JUMPOUT(0x3FF068);
}

