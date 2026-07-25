/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0C58
 * Mangled: _ZThn24_N5Caver32StaticMonsterControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::StaticMonsterControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F65E0  Caver::StaticMonsterControllerComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000002A0C58 string=0x00000000002A0C5C "aV"
 *   insn=0x00000000002A0C5C string=0x00000000001F65E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::StaticMonsterControllerComponent::Update(
        Caver::StaticMonsterControllerComponent *this,
        float a2)
{
  Caver::StaticMonsterControllerComponent::Update((Caver::StaticMonsterControllerComponent *)((char *)this - 24), a2);
}

