/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB350
 * Mangled: ._ZN5boost10shared_ptrIN5Caver19AttributePointsViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>(Caver::AttributePointsView *)
 *
 * Callers: 1
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Callees: 1
 *   0x0000000000400144  boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>(Caver::AttributePointsView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB358 string=0x00000000001FB35C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>()
{
  return _ZN5boost10shared_ptrIN5Caver19AttributePointsViewEEC2IS2_EEPT_();
}

