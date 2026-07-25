/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F65E0
 * Mangled: ._ZN5Caver32StaticMonsterControllerComponent6UpdateEf
 * Demangled: Caver::StaticMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002A0C58  `non-virtual thunk to'Caver::StaticMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002A0968  Caver::StaticMonsterControllerComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F65E8 string=0x00000000001F65EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::StaticMonsterControllerComponent::Update(
        Caver::StaticMonsterControllerComponent *this,
        float a2)
{
  JUMPOUT(0x2A0ABC);
}

