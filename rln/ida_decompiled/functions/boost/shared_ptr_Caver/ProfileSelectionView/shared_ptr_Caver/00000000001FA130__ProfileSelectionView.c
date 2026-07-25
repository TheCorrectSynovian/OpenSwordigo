/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA130
 * Mangled: ._ZN5boost10shared_ptrIN5Caver20ProfileSelectionViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ProfileSelectionView>::shared_ptr<Caver::ProfileSelectionView>(Caver::ProfileSelectionView *)
 *
 * Callers: 1
 *   0x00000000003A4890  Caver::ProfileSelectionViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003A4CDC  boost::shared_ptr<Caver::ProfileSelectionView>::shared_ptr<Caver::ProfileSelectionView>(Caver::ProfileSelectionView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA138 string=0x00000000001FA13C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::ProfileSelectionView>::shared_ptr<Caver::ProfileSelectionView>()
{
  return _ZN5boost10shared_ptrIN5Caver20ProfileSelectionViewEEC2IS2_EEPT_();
}

