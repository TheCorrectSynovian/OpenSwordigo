/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8910
 * Mangled: ._ZN5Caver16GUIPropertyValue16ValueWithVector2ERKNS_7Vector2E
 * Demangled: Caver::GUIPropertyValue::ValueWithVector2(Caver::Vector2 const&)
 *
 * Callers: 4
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x000000000042B654  Caver::NewMenuView::PresentFromRectangle(Caver::Rectangle const&)
 *   0x000000000049FF3C  Caver::GUIView::AddPopupAnimation(void)
 *   0x00000000004A7914  Caver::GUIPropertyValue::InterpolatedValue(Caver::GUIPropertyValue const&,Caver::GUIPropertyValue const&,float)
 *
 * Callees: 1
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8918 string=0x00000000001F891C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIPropertyValue::ValueWithVector2()
{
  JUMPOUT(0x3DB608);
}

