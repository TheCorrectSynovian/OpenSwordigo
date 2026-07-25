/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000416758
 * Mangled: _ZN5Caver17ItemInfoPopupView6UpdateEf
 * Demangled: Caver::ItemInfoPopupView::Update(float)
 *
 * Callers: 1
 *   0x0000000000416238  Caver::ItemInfoPopupView::InitWithSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callees: 1
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemInfoPopupView::Update(Caver::GUIView *this, float a2)
{
  return Caver::GUIView::Update(this, a2);
}

