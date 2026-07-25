/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAE10
 * Mangled: ._ZN5Caver22PhysicsObjectComponent6UpdateEf
 * Demangled: Caver::PhysicsObjectComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000027F708  `non-virtual thunk to'Caver::PhysicsObjectComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000027F4C8  Caver::PhysicsObjectComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAE18 string=0x00000000001FAE1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PhysicsObjectComponent::Update(Caver::PhysicsObjectComponent *this, float a2)
{
  JUMPOUT(0x27F608);
}

