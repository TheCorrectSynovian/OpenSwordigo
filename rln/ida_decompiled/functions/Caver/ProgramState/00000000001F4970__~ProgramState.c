/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4970
 * Mangled: ._ZN5Caver12ProgramStateD2Ev
 * Demangled: Caver::ProgramState::~ProgramState()
 *
 * Callers: 2
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x0000000000462DAC  Caver::Scene::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x00000000004C109C  Caver::ProgramState::~ProgramState()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4978 string=0x00000000001F497C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProgramState::~ProgramState(Caver::ProgramState *this)
{
  _ZN5Caver12ProgramStateD2Ev(this);
}

