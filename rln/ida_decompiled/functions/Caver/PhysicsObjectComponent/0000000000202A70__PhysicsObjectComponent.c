/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202A70
 * Mangled: ._ZN5Caver22PhysicsObjectComponentC2Ev
 * Demangled: Caver::PhysicsObjectComponent::PhysicsObjectComponent(void)
 *
 * Callers: 1
 *   0x000000000024FDF8  Caver::PhysicsObjectComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000027DE30  Caver::PhysicsObjectComponent::PhysicsObjectComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202A78 string=0x0000000000202A7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsObjectComponent::PhysicsObjectComponent(Caver::PhysicsObjectComponent *this)
{
  return _ZN5Caver22PhysicsObjectComponentC2Ev(this);
}

