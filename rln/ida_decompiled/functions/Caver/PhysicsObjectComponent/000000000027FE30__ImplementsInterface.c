/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027FE30
 * Mangled: _ZN5Caver22PhysicsObjectComponent19ImplementsInterfaceEl
 * Demangled: Caver::PhysicsObjectComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000027FE30 string=0x000000000027FE34 "qG"
 *   insn=0x000000000027FE34 string=0x000000000027FE38 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::PhysicsObjectComponent::ImplementsInterface(
        Caver::PhysicsObjectComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::PhysicsObjectComponent *this))(Caver::PhysicsObjectComponent *__hidden this))
{
  return a2 == Caver::PhysicsObjectComponent::Interface;
}

