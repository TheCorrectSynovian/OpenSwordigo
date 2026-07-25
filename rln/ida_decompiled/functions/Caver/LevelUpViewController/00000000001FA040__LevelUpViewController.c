/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA040
 * Mangled: ._ZN5Caver21LevelUpViewControllerC2Ev
 * Demangled: Caver::LevelUpViewController::LevelUpViewController(void)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x000000000036A764  Caver::LevelUpViewController::LevelUpViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA048 string=0x00000000001FA04C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LevelUpViewController::LevelUpViewController(Caver::LevelUpViewController *this)
{
  return _ZN5Caver21LevelUpViewControllerC2Ev(this);
}

