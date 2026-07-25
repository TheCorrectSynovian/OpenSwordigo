/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9630
 * Mangled: ._ZN5Caver12GUIAnimation6UpdateEf
 * Demangled: Caver::GUIAnimation::Update(float)
 *
 * Callers: 7
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x000000000042C2F0  Caver::NotificationView::Update(float)
 *   0x0000000000494468  Caver::GUIBubbleView::GUIBubbleView(void)
 *   0x000000000049E55C  Caver::GUIView::Update(float)
 *   0x000000000049FE44  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x000000000049FF3C  Caver::GUIView::AddPopupAnimation(void)
 *   0x00000000004A9208  Caver::GUIAnimatedSprite::Update(float)
 *
 * Callees: 1
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9638 string=0x00000000001F963C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIAnimation::Update(Caver::GUIAnimation *this, float a2)
{
  JUMPOUT(0x4A6854);
}

