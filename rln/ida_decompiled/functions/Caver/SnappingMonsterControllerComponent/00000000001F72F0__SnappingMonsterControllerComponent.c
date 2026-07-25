/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F72F0
 * Mangled: ._ZN5Caver34SnappingMonsterControllerComponentC2Ev
 * Demangled: Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000029FEE0  Caver::SnappingMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000029EB20  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F72F8 string=0x00000000001F72FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(
        Caver::SnappingMonsterControllerComponent *this)
{
  return _ZN5Caver34SnappingMonsterControllerComponentC2Ev(this);
}

