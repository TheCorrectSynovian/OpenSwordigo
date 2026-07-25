/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002029E0
 * Mangled: ._ZN5Caver34BouncingMonsterControllerComponentC2Ev_0
 * Demangled: Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002501B8  Caver::BouncingMonsterControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000293DB4  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002029E8 string=0x00000000002029EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(
        Caver::BouncingMonsterControllerComponent *this)
{
  return _ZN5Caver34BouncingMonsterControllerComponentC2Ev(this);
}

