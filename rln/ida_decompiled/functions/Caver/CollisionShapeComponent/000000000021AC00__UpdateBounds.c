/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021AC00
 * Mangled: _ZN5Caver23CollisionShapeComponent12UpdateBoundsEv
 * Demangled: Caver::CollisionShapeComponent::UpdateBounds(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FC0  Caver::Shape::Bounds(void)
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000021AC0C string=0x000000000021AC10 "T"
 *   insn=0x000000000021AC1C string=0x000000000021AC20 "h"
 *   insn=0x000000000021AC20 string=0x000000000021AC24 "("
 *   insn=0x000000000021AC24 string=0x000000000021AC28 "`""
 *   insn=0x000000000021AC30 string=0x00000000001F6FC0 "P'"
 *   insn=0x000000000021AC34 string=0x000000000021AC38 "hb"
 *   insn=0x000000000021AC44 string=0x00000000001F73A0 "0'"
 *   insn=0x000000000021AC68 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::UpdateBounds(__int64 this)
{
  __int64 v1; // x19
  __int128 v2; // [xsp+8h] [xbp-28h] BYREF
  __int64 v3; // [xsp+18h] [xbp-18h]

  v1 = this;
  v3 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_BYTE *)(this + 377) )
  {
    Caver::Shape::Bounds((__int64 *)&v2, (Caver::Shape *)(this + 264));
    *(_OWORD *)(v1 + 344) = v2;
    return Caver::Component::UpdateObjectBounds((Caver::Component *)v1);
  }
  return this;
}

