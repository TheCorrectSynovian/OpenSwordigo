/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203E20
 * Mangled: ._ZN5Caver22MonsterEntityComponent17InitWithComponentEPKS0_
 * Demangled: Caver::MonsterEntityComponent::InitWithComponent(Caver::MonsterEntityComponent const*)
 *
 * Callers: 1
 *   0x000000000027DBA4  Caver::MonsterEntityComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000027AF5C  Caver::MonsterEntityComponent::InitWithComponent(Caver::MonsterEntityComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203E28 string=0x0000000000203E2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterEntityComponent::InitWithComponent(
        Caver::MonsterEntityComponent *this,
        const Caver::MonsterEntityComponent *a2)
{
  return _ZN5Caver22MonsterEntityComponent17InitWithComponentEPKS0_(this, a2);
}

