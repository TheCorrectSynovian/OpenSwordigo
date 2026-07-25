/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3B10
 * Mangled: ._ZN5Caver18GameViewController9GotoLevelERKSsS2_
 * Demangled: Caver::GameViewController::GotoLevel(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3B18 string=0x00000000001F3B1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameViewController::GotoLevel()
{
  JUMPOUT(0x358A74);
}

