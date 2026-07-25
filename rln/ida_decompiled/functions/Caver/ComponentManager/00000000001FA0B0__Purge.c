/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA0B0
 * Mangled: ._ZN5Caver16ComponentManager5PurgeEv
 * Demangled: Caver::ComponentManager::Purge(void)
 *
 * Callers: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x000000000024719C  Caver::ComponentManager::Purge(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA0B8 string=0x00000000001FA0BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ComponentManager::Purge(Caver::ComponentManager *this)
{
  return _ZN5Caver16ComponentManager5PurgeEv(this);
}

