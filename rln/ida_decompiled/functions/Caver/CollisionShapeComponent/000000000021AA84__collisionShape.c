/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021AA84
 * Mangled: _ZN5Caver23CollisionShapeComponent14collisionShapeEv
 * Demangled: Caver::CollisionShapeComponent::collisionShape(void)
 *
 * Callers: 1
 *   0x00000000001F3FD0  Caver::CollisionShapeComponent::collisionShape(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000021AA90 string=0x000000000021AA94 "h"
 *   insn=0x000000000021AA94 string=0x000000000021AA98 ""
 *   insn=0x000000000021AAA0 string=0x000000000021AAA4 "`""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::collisionShape(Caver::CollisionShapeComponent *this)
{
  (*(void (__fastcall **)(Caver::CollisionShapeComponent *))(*(_QWORD *)this + 296LL))(this);
  return (__int64)this + 264;
}

