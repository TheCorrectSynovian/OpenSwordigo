/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6D70
 * Mangled: ._ZN5Caver16ComponentManager13PurgeInactiveEv
 * Demangled: Caver::ComponentManager::PurgeInactive(void)
 *
 * Callers: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x00000000002471EC  Caver::ComponentManager::PurgeInactive(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6D78 string=0x00000000001F6D7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ComponentManager::PurgeInactive(Caver::ComponentManager *this)
{
  return _ZN5Caver16ComponentManager13PurgeInactiveEv(this);
}

