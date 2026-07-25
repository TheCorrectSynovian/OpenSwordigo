/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB280
 * Mangled: ._ZN5Caver18ConsumableItemViewD2Ev
 * Demangled: Caver::ConsumableItemView::~ConsumableItemView()
 *
 * Callers: 1
 *   0x00000000003CA1B8  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003CA1B8  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB288 string=0x00000000001FB28C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ConsumableItemView::~ConsumableItemView(Caver::ConsumableItemView *this)
{
  JUMPOUT(0x3CA898);
}

