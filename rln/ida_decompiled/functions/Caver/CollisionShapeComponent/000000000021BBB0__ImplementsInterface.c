/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021BBB0
 * Mangled: _ZN5Caver23CollisionShapeComponent19ImplementsInterfaceEl
 * Demangled: Caver::CollisionShapeComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x0000000000215A9C  Caver::ShapeComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000021BBB0 string=0x000000000021BBB4 ""
 *   insn=0x000000000021BBB4 string=0x000000000021BBB8 "I&"
 *   insn=0x000000000021BBB8 string=0x000000000021BBBC ")!D"
 *   insn=0x000000000021BBBC string=0x000000000021BBC0 "?"
 *   insn=0x000000000021BBC4 string=0x000000000021BBC8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::ImplementsInterface(
        Caver::CollisionShapeComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::CollisionShapeComponent *this))(Caver::CollisionShapeComponent *__hidden this))
{
  return (a2 == Caver::CollisionShapeComponent::Interface) | (unsigned int)(a2 == Caver::ShapeComponent::Interface);
}

