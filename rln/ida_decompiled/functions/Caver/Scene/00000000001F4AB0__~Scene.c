/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4AB0
 * Mangled: ._ZN5Caver5SceneD2Ev
 * Demangled: Caver::Scene::~Scene()
 *
 * Callers: 1
 *   0x0000000000463748  Caver::Scene::~Scene()
 *
 * Callees: 1
 *   0x0000000000462DAC  Caver::Scene::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4AB8 string=0x00000000001F4ABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Scene::~Scene(Caver::Scene *this)
{
  JUMPOUT(0x462FA4);
}

