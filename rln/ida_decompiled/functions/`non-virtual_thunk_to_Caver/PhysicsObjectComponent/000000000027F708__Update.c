/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F708
 * Mangled: _ZThn24_N5Caver22PhysicsObjectComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::PhysicsObjectComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAE10  Caver::PhysicsObjectComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x000000000027F70C string=0x00000000001FAE10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::PhysicsObjectComponent::Update(
        Caver::PhysicsObjectComponent *this,
        float a2)
{
  Caver::PhysicsObjectComponent::Update((Caver::PhysicsObjectComponent *)((char *)this - 24), a2);
}

