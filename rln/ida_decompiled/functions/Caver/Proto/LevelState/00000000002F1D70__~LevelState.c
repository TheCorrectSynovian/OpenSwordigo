/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F1D70
 * Mangled: _ZN5Caver5Proto10LevelStateD0Ev
 * Demangled: Caver::Proto::LevelState::~LevelState()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F3C80  Caver::Proto::LevelState::~LevelState()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002F1DA8  Caver::Proto::LevelState::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002F1D80 string=0x00000000001F3C80 "P'"
 *   insn=0x00000000002F1D8C string=0x00000000002F1D90 "H"
 *   insn=0x00000000002F1D90 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002F1D98 string=0x00000000002F1D9C "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::LevelState::~LevelState(Caver::Proto::LevelState *this)
{
  Caver::Proto::LevelState::~LevelState(this);
  operator delete(this);
}

