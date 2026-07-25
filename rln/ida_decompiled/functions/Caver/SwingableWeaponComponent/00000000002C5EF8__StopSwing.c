/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C5EF8
 * Mangled: _ZN5Caver24SwingableWeaponComponent9StopSwingEv
 * Demangled: Caver::SwingableWeaponComponent::StopSwing(void)
 *
 * Callers: 1
 *   0x00000000001F46C0  Caver::SwingableWeaponComponent::StopSwing(void)
 *
 * Callees: 3
 *   0x00000000001F3F40  Caver::WeaponTrailComponent::ResetTrail(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *
 * Referenced strings: 18
 *   insn=0x00000000002C5F04 string=0x00000000002C5F08 "h"
 *   insn=0x00000000002C5F10 string=0x00000000002C5F14 "\t"
 *   insn=0x00000000002C5F10 string=0x00000000002C5F44 "`n@"
 *   insn=0x00000000002C5F14 string=0x00000000002C5F18 "i"
 *   insn=0x00000000002C5F1C string=0x00000000002C5F20 "`R@"
 *   insn=0x00000000002C5F24 string=0x00000000002C5F28 "`B"
 *   insn=0x00000000002C5F30 string=0x00000000002C5F34 "`R@"
 *   insn=0x00000000002C5F30 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C5F34 string=0x00000000002C5F38 "`"
 *   insn=0x00000000002C5F3C string=0x00000000002C5F40 "l"
 *   insn=0x00000000002C5F40 string=0x00000000001FD0F0 "0'"
 *   insn=0x00000000002C5F48 string=0x00000000002C5F4C "`""
 *   insn=0x00000000002C5F54 string=0x00000000002C5F58 "`n@"
 *   insn=0x00000000002C5F58 string=0x00000000002C5F5C "@"
 *   insn=0x00000000002C5F5C string=0x00000000002C5F64 "`z@"
 *   insn=0x00000000002C5F60 string=0x00000000001F3F40 "P'"
 *   insn=0x00000000002C5F68 string=0x00000000002C5F6C "`"
 *   insn=0x00000000002C5F74 string=0x00000000002C5F78 "`z@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::WeaponTrailComponent *__fastcall Caver::SwingableWeaponComponent::StopSwing(
        Caver::SwingableWeaponComponent *this)
{
  __int64 v2; // x8
  Caver::CollisionShapeComponent *v3; // x0
  Caver::WeaponTrailComponent *v4; // x0
  Caver::WeaponTrailComponent *result; // x0

  v2 = *((_QWORD *)this + 44);
  *((_BYTE *)this + 368) = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 188) )
    {
      *(_BYTE *)(v2 + 188) = 0;
      v3 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20);
      if ( v3
        || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 144), this),
            (v3 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20)) != 0) )
      {
        Caver::CollisionShapeComponent::SetEnabled(v3);
      }
    }
  }
  v4 = (Caver::WeaponTrailComponent *)*((_QWORD *)this + 27);
  if ( v4
    || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 200), this),
        (v4 = (Caver::WeaponTrailComponent *)*((_QWORD *)this + 27)) != 0) )
  {
    Caver::WeaponTrailComponent::ResetTrail(v4);
  }
  result = (Caver::WeaponTrailComponent *)*((_QWORD *)this + 30);
  if ( result )
    return (Caver::WeaponTrailComponent *)Caver::WeaponTrailComponent::ResetTrail(result);
  Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 224), this);
  result = (Caver::WeaponTrailComponent *)*((_QWORD *)this + 30);
  if ( result )
    return (Caver::WeaponTrailComponent *)Caver::WeaponTrailComponent::ResetTrail(result);
  return result;
}

