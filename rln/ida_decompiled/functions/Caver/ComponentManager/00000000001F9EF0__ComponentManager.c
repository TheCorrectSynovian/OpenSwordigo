/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9EF0
 * Mangled: ._ZN5Caver16ComponentManagerC2Ev
 * Demangled: Caver::ComponentManager::ComponentManager(void)
 *
 * Callers: 1
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Callees: 1
 *   0x0000000000247174  Caver::ComponentManager::ComponentManager(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9EF8 string=0x00000000001F9EFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ComponentManager::ComponentManager(Caver::ComponentManager *this)
{
  return _ZN5Caver16ComponentManagerC2Ev(this);
}

