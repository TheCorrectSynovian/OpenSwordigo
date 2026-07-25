/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDFD0
 * Mangled: ._ZN5Caver21LevelUpViewController21NumPointsForAttributeENS_18CharacterAttributeE
 * Demangled: Caver::LevelUpViewController::NumPointsForAttribute(Caver::CharacterAttribute)
 *
 * Callers: 2
 *   0x0000000000357900  Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController *)
 *   0x0000000000357988  `non-virtual thunk to'Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController *)
 *
 * Callees: 1
 *   0x000000000036AAEC  Caver::LevelUpViewController::NumPointsForAttribute(Caver::CharacterAttribute)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDFD4 string=0x000000000036AAEC "?"
 *   insn=0x00000000001FDFD8 string=0x00000000001FDFDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::LevelUpViewController::NumPointsForAttribute()
{
  return _ZN5Caver21LevelUpViewController21NumPointsForAttributeENS_18CharacterAttributeE();
}

