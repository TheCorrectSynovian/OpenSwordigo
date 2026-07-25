/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDFB0
 * Mangled: ._ZN5Caver5Proto5SceneD2Ev
 * Demangled: Caver::Proto::Scene::~Scene()
 *
 * Callers: 1
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDFB8 string=0x00000000001FDFBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Scene::~Scene(Caver::Proto::Scene *this)
{
  JUMPOUT(0x30170C);
}

