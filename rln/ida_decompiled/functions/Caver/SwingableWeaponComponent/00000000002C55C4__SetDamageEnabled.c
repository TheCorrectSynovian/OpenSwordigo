/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C55C4
 * Mangled: _ZN5Caver24SwingableWeaponComponent16SetDamageEnabledEb
 * Demangled: Caver::SwingableWeaponComponent::SetDamageEnabled(bool)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *
 * Referenced strings: 12
 *   insn=0x00000000002C55D0 string=0x00000000002C55D4 "h"
 *   insn=0x00000000002C55D4 string=0x00000000002C55D8 "h"
 *   insn=0x00000000002C55D8 string=0x00000000002C55DC "\t"
 *   insn=0x00000000002C55DC string=0x00000000002C55E0 "?"
 *   insn=0x00000000002C55E4 string=0x00000000002C55E8 ")"
 *   insn=0x00000000002C55EC string=0x00000000002C55F0 "4"
 *   insn=0x00000000002C55F4 string=0x00000000002C55F8 "`R@"
 *   insn=0x00000000002C55FC string=0x00000000002C5600 "`B"
 *   insn=0x00000000002C5604 string=0x00000000002C5608 "6"
 *   insn=0x00000000002C5608 string=0x00000000002C560C "`R@"
 *   insn=0x00000000002C5608 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C5620 string=0x00000000001FD0F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponComponent::SetDamageEnabled(Caver::SwingableWeaponComponent *this, int a2)
{
  __int64 v3; // x8
  Caver::CollisionShapeComponent *v4; // x0

  v3 = *((_QWORD *)this + 44);
  if ( v3 )
  {
    if ( (((*(_BYTE *)(v3 + 188) != 0) ^ a2) & 1) != 0 )
    {
      *(_BYTE *)(v3 + 188) = a2 & 1;
      v4 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20);
      if ( v4
        || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 144), this),
            (v4 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 20)) != 0) )
      {
        Caver::CollisionShapeComponent::SetEnabled(v4);
      }
    }
  }
}

