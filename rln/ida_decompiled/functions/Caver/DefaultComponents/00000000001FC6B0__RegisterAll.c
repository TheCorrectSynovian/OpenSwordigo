/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC6B0
 * Mangled: ._ZN5Caver17DefaultComponents11RegisterAllEv
 * Demangled: Caver::DefaultComponents::RegisterAll(void)
 *
 * Callers: 2
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC6B8 string=0x00000000001FC6BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DefaultComponents::RegisterAll(Caver::DefaultComponents *this)
{
  return _ZN5Caver17DefaultComponents11RegisterAllEv(this);
}

