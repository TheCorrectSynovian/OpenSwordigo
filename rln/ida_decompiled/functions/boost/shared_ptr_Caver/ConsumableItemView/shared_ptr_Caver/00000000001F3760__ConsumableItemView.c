/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3760
 * Mangled: ._ZN5boost10shared_ptrIN5Caver18ConsumableItemViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ConsumableItemView>::shared_ptr<Caver::ConsumableItemView>(Caver::ConsumableItemView *)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003D8D54  boost::shared_ptr<Caver::ConsumableItemView>::shared_ptr<Caver::ConsumableItemView>(Caver::ConsumableItemView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3768 string=0x00000000001F376C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::ConsumableItemView>::shared_ptr<Caver::ConsumableItemView>()
{
  return _ZN5boost10shared_ptrIN5Caver18ConsumableItemViewEEC2IS2_EEPT_();
}

