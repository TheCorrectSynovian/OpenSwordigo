/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBE70
 * Mangled: ._ZN5Caver33GenericMonsterControllerComponentC2Ev_0
 * Demangled: Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x0000000000250238  Caver::GenericMonsterControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000296F64  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBE78 string=0x00000000001FBE7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(
        Caver::GenericMonsterControllerComponent *this)
{
  return _ZN5Caver33GenericMonsterControllerComponentC2Ev(this);
}

