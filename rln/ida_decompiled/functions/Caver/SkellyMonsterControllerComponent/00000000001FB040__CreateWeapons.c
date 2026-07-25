/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB040
 * Mangled: ._ZN5Caver32SkellyMonsterControllerComponent13CreateWeaponsEv
 * Demangled: Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *
 * Callers: 1
 *   0x000000000029DBC4  Caver::SkellyMonsterControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000029DC48  Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB048 string=0x00000000001FB04C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkellyMonsterControllerComponent::CreateWeapons(
        Caver::SkellyMonsterControllerComponent *this)
{
  return _ZN5Caver32SkellyMonsterControllerComponent13CreateWeaponsEv(this);
}

