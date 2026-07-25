/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000463748
 * Mangled: _ZN5Caver5SceneD0Ev
 * Demangled: Caver::Scene::~Scene()
 *
 * Callers: 1
 *   0x0000000000462DAC  Caver::Scene::RegisterLibrary(void)
 *
 * Callees: 4
 *   0x00000000001F4AB0  Caver::Scene::~Scene()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000463758 string=0x00000000001F4AB0 "P'"
 *   insn=0x0000000000463768 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000463778 string=0x000000000046377C "Rx"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Scene::~Scene(Caver::Scene *this)
{
  Caver::Scene::~Scene(this);
  operator delete(this);
}

