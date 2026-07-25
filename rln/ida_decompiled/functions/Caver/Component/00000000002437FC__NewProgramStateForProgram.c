/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002437FC
 * Mangled: _ZN5Caver9Component25NewProgramStateForProgramERKNS_7ProgramE
 * Demangled: Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *
 * Callers: 1
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *
 * Callees: 1
 *   0x00000000001FCA90  Caver::Scene::NewProgramStateForProgram(Caver::Program const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002437FC string=0x0000000000243800 " "
 *   insn=0x0000000000243804 string=0x00000000001FCA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Component::NewProgramStateForProgram(Caver::Component *this, const Caver::Program *a2)
{
  return Caver::Scene::NewProgramStateForProgram(*(Caver::Scene **)(*((_QWORD *)this + 5) + 32LL), a2);
}

