/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202370
 * Mangled: ._ZN5Caver5Proto11GameOptionsD2Ev_0
 * Demangled: Caver::Proto::GameOptions::~GameOptions()
 *
 * Callers: 1
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002E55EC  Caver::Proto::GameOptions::~GameOptions()
 *
 * Referenced strings: 1
 *   insn=0x0000000000202378 string=0x000000000020237C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameOptions::~GameOptions(Caver::Proto::GameOptions *this)
{
  _ZN5Caver5Proto11GameOptionsD2Ev(this);
}

