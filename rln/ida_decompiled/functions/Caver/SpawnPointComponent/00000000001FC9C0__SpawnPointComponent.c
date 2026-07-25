/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC9C0
 * Mangled: ._ZN5Caver19SpawnPointComponentC2Ev
 * Demangled: Caver::SpawnPointComponent::SpawnPointComponent(void)
 *
 * Callers: 1
 *   0x0000000000250538  Caver::SpawnPointComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000023AA6C  Caver::SpawnPointComponent::SpawnPointComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC9C8 string=0x00000000001FC9CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpawnPointComponent::SpawnPointComponent(Caver::SpawnPointComponent *this)
{
  return _ZN5Caver19SpawnPointComponentC2Ev(this);
}

