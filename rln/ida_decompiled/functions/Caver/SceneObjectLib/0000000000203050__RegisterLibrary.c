/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203050
 * Mangled: ._ZN5Caver14SceneObjectLib15RegisterLibraryEPNS_12ProgramStateE
 * Demangled: Caver::SceneObjectLib::RegisterLibrary(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Callees: 1
 *   0x00000000004769F4  Caver::SceneObjectLib::RegisterLibrary(Caver::ProgramState *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203058 string=0x000000000020305C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObjectLib::RegisterLibrary(Caver::SceneObjectLib *this, Caver::ProgramState *a2)
{
  return _ZN5Caver14SceneObjectLib15RegisterLibraryEPNS_12ProgramStateE(this, a2);
}

