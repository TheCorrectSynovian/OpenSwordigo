/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004149FC
 * Mangled: _ZN5Caver16ItemBuyPopupView6UpdateEf
 * Demangled: Caver::ItemBuyPopupView::Update(float)
 *
 * Callers: 1
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *
 * Callees: 1
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemBuyPopupView::Update(Caver::GUIView *this, float a2)
{
  return Caver::GUIView::Update(this, a2);
}

