/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4CD0
 * Mangled: ._ZN5Caver12ItemInfoView7SetItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::ItemInfoView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4CD8 string=0x00000000001F4CDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ItemInfoView::SetItem()
{
  JUMPOUT(0x41A2B4);
}

