/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200FB0
 * Mangled: ._ZN5Caver5Proto5SceneD2Ev_0
 * Demangled: Caver::Proto::Scene::~Scene()
 *
 * Callers: 1
 *   0x0000000000301988  Caver::Proto::Scene::~Scene()
 *
 * Callees: 1
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200FB8 string=0x0000000000200FBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Scene::~Scene(Caver::Proto::Scene *this)
{
  JUMPOUT(0x30170C);
}

