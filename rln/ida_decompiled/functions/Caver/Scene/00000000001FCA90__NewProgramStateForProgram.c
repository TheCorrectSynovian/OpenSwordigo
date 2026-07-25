/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCA90
 * Mangled: ._ZN5Caver5Scene25NewProgramStateForProgramERKNS_7ProgramE
 * Demangled: Caver::Scene::NewProgramStateForProgram(Caver::Program const&)
 *
 * Callers: 4
 *   0x00000000002437FC  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x00000000004642A8  Caver::Scene::FinishLoad(void)
 *   0x0000000000470EC4  Caver::SceneObject::FinishLoad(void)
 *   0x0000000000475498  Caver::SceneObjectGroup::FinishLoad(void)
 *
 * Callees: 1
 *   0x0000000000243808  Caver::Scene::NewProgramStateForProgram(Caver::Program const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCA98 string=0x00000000001FCA9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Scene::NewProgramStateForProgram(Caver::Scene *this, const Caver::Program *a2)
{
  return _ZN5Caver5Scene25NewProgramStateForProgramERKNS_7ProgramE(this, a2);
}

