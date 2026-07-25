/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4DC0
 * Mangled: ._ZN5Caver29BatMonsterControllerComponentC2Ev
 * Demangled: Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x0000000000293A24  Caver::BatMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000292EF0  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4DC8 string=0x00000000001F4DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(
        Caver::BatMonsterControllerComponent *this)
{
  return _ZN5Caver29BatMonsterControllerComponentC2Ev(this);
}

