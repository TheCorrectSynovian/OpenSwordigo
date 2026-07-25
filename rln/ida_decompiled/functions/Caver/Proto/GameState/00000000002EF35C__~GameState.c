/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EF35C
 * Mangled: _ZN5Caver5Proto9GameStateD0Ev
 * Demangled: Caver::Proto::GameState::~GameState()
 *
 * Callers: 1
 *   0x00000000002ED9BC  Caver::Proto::GameState::GameState(Caver::Proto::GameState const&)
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201940  Caver::Proto::GameState::~GameState()
 *   0x00000000002EF394  Caver::Proto::GameState::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002EF368 string=0x00000000002EF36C "uI"
 *   insn=0x00000000002EF37C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002EF38C string=0x00000000002EF390 "MI\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GameState::~GameState(Caver::Proto::GameState *this)
{
  Caver::Proto::GameState::~GameState(this);
  operator delete(this);
}

