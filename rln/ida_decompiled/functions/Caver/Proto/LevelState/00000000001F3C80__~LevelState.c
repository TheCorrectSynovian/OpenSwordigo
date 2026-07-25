/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3C80
 * Mangled: ._ZN5Caver5Proto10LevelStateD2Ev
 * Demangled: Caver::Proto::LevelState::~LevelState()
 *
 * Callers: 1
 *   0x00000000002F1D70  Caver::Proto::LevelState::~LevelState()
 *
 * Callees: 1
 *   0x00000000002F1920  Caver::Proto::LevelState::LevelState(Caver::Proto::LevelState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3C88 string=0x00000000001F3C8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::LevelState::~LevelState(Caver::Proto::LevelState *this)
{
  JUMPOUT(0x2F1B60);
}

