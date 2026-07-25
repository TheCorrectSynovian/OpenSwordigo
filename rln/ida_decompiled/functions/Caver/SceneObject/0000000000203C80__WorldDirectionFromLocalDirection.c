/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203C80
 * Mangled: ._ZN5Caver11SceneObject32WorldDirectionFromLocalDirectionERKNS_7Vector2E
 * Demangled: Caver::SceneObject::WorldDirectionFromLocalDirection(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x000000000029CB68  Caver::ShootingMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000473D84  Caver::SceneObject::WorldDirectionFromLocalDirection(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203C84 string=0x0000000000473D84 "@B9*$@)K"
 *   insn=0x0000000000203C88 string=0x0000000000203C8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::WorldDirectionFromLocalDirection(
        Caver::SceneObject *this,
        const Caver::Vector2 *a2)
{
  return _ZN5Caver11SceneObject32WorldDirectionFromLocalDirectionERKNS_7Vector2E(this, a2);
}

