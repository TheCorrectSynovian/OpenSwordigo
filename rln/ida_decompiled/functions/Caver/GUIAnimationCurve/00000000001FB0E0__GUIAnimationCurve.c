/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB0E0
 * Mangled: ._ZN5Caver17GUIAnimationCurveC2ERKNS_7Vector2ES3_
 * Demangled: Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *
 * Callers: 10
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *   0x00000000003CA1B8  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003CFE74  Caver::ExperienceBar::Update(float)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *   0x000000000042B654  Caver::NewMenuView::PresentFromRectangle(Caver::Rectangle const&)
 *   0x000000000042BD20  Caver::NotificationView::NotificationView(void)
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *   0x000000000049FF3C  Caver::GUIView::AddPopupAnimation(void)
 *   0x00000000004A5D34  Caver::GUIAnimation::GUIAnimation(void)
 *
 * Callees: 1
 *   0x00000000004A6C30  Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB0E8 string=0x00000000001FB0EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAnimationCurve::GUIAnimationCurve(
        Caver::GUIAnimationCurve *this,
        const Caver::Vector2 *a2,
        const Caver::Vector2 *a3)
{
  return _ZN5Caver17GUIAnimationCurveC2ERKNS_7Vector2ES3_(this, a2, a3);
}

