/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDBC0
 * Mangled: ._ZN5Caver34SnappingMonsterControllerComponentC2Ev_0
 * Demangled: Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000024FFF8  Caver::SnappingMonsterControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000029EB20  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDBC8 string=0x00000000001FDBCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(
        Caver::SnappingMonsterControllerComponent *this)
{
  return _ZN5Caver34SnappingMonsterControllerComponentC2Ev(this);
}

