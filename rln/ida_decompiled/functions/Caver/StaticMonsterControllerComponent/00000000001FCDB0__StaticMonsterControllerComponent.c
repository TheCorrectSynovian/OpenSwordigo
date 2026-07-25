/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCDB0
 * Mangled: ._ZN5Caver32StaticMonsterControllerComponentC2Ev
 * Demangled: Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002A0E98  Caver::StaticMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002A00DC  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCDB8 string=0x00000000001FCDBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(
        Caver::StaticMonsterControllerComponent *this)
{
  return _ZN5Caver32StaticMonsterControllerComponentC2Ev(this);
}

