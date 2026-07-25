/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F87B0
 * Mangled: ._ZN5Caver11SceneObject20VelocityAtWorldPointERKNS_7Vector2E
 * Demangled: Caver::SceneObject::VelocityAtWorldPoint(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x0000000000280348  Caver::PhysicsObjectState::UpdateObjectState(float)
 *
 * Callees: 1
 *   0x0000000000473DF0  Caver::SceneObject::VelocityAtWorldPoint(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F87B8 string=0x00000000001F87BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::VelocityAtWorldPoint(Caver::SceneObject *this, const Caver::Vector2 *a2)
{
  return _ZN5Caver11SceneObject20VelocityAtWorldPointERKNS_7Vector2E(this, a2);
}

