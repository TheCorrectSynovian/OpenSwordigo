/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFFD0
 * Mangled: ._ZN5Caver15StatePropertiesC2Ev
 * Demangled: Caver::StateProperties::StateProperties(void)
 *
 * Callers: 2
 *   0x00000000003B589C  Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&)
 *   0x00000000003BAAA0  Caver::LevelState::LevelState(void)
 *
 * Callees: 1
 *   0x00000000003C3E28  Caver::StateProperties::StateProperties(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFFD8 string=0x00000000001FFFDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StateProperties::StateProperties(Caver::StateProperties *this)
{
  return _ZN5Caver15StatePropertiesC2Ev(this);
}

