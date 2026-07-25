/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA600
 * Mangled: ._ZN5Caver12ItemInfoView16EnablePurchasingEiRKN5boost13intrusive_ptrINS_11SceneObjectEEEb
 * Demangled: Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *
 * Callers: 1
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA608 string=0x00000000001FA60C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ItemInfoView::EnablePurchasing()
{
  return _ZN5Caver12ItemInfoView16EnablePurchasingEiRKN5boost13intrusive_ptrINS_11SceneObjectEEEb();
}

