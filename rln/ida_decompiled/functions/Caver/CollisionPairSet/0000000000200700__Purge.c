/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200700
 * Mangled: ._ZN5Caver16CollisionPairSet5PurgeEv
 * Demangled: Caver::CollisionPairSet::Purge(void)
 *
 * Callers: 1
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x0000000000216C88  Caver::CollisionPairSet::Purge(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200708 string=0x000000000020070C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionPairSet::Purge(Caver::CollisionPairSet *this)
{
  return _ZN5Caver16CollisionPairSet5PurgeEv(this);
}

