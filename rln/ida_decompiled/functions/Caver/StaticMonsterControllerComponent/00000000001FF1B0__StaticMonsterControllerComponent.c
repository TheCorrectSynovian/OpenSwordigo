/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF1B0
 * Mangled: ._ZN5Caver32StaticMonsterControllerComponentC2Ev_0
 * Demangled: Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002500B8  Caver::StaticMonsterControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002A00DC  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF1B8 string=0x00000000001FF1BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(
        Caver::StaticMonsterControllerComponent *this)
{
  return _ZN5Caver32StaticMonsterControllerComponentC2Ev(this);
}

