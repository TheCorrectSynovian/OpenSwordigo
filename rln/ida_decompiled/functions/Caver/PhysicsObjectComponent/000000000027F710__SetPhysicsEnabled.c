/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F710
 * Mangled: _ZN5Caver22PhysicsObjectComponent17SetPhysicsEnabledEb
 * Demangled: Caver::PhysicsObjectComponent::SetPhysicsEnabled(bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFD90  Caver::SceneObject::Activate(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000027F710 string=0x000000000027F714 "("
 *   insn=0x000000000027F71C string=0x000000000027F720 ""
 *   insn=0x000000000027F720 string=0x000000000027F724 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsObjectComponent::SetPhysicsEnabled(__int64 this, char a2)
{
  if ( (a2 & 1) != *(_BYTE *)(this + 112) )
  {
    *(_BYTE *)(this + 112) = a2 & 1;
    if ( (a2 & 1) != 0 )
      return Caver::SceneObject::Activate(*(Caver::SceneObject **)(this + 40));
  }
  return this;
}

