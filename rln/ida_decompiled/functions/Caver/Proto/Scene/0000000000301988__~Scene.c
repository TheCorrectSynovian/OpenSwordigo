/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000301988
 * Mangled: _ZN5Caver5Proto5SceneD0Ev
 * Demangled: Caver::Proto::Scene::~Scene()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200FB0  Caver::Proto::Scene::~Scene()
 *   0x00000000003019C0  Caver::Proto::Scene::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003019A4 string=0x00000000003019A8 "B"
 *   insn=0x00000000003019A8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003019B0 string=0x00000000003019B4 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Scene::~Scene(Caver::Proto::Scene *this)
{
  Caver::Proto::Scene::~Scene(this);
  operator delete(this);
}

