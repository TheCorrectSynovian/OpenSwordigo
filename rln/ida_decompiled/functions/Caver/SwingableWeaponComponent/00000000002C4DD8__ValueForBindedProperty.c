/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C4DD8
 * Mangled: _ZN5Caver24SwingableWeaponComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SwingableWeaponComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F3D90  Caver::SwingableWeaponComponent::ValueForBindedProperty(int)
 *
 * Callees: 3
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 8
 *   insn=0x00000000002C4DD8 string=0x00000000002C4DDC "?"
 *   insn=0x00000000002C4DDC string=0x00000000002C4DE0 ""
 *   insn=0x00000000002C4DE0 string=0x00000000002C4DE4 "*"
 *   insn=0x00000000002C4DE0 string=0x00000000002C4E00 "4"
 *   insn=0x00000000002C4DE4 string=0x00000000002C4DEC "Iy"
 *   insn=0x00000000002C4DEC string=0x00000000002C4DF0 ")"
 *   insn=0x00000000002C4DF0 string=0x00000000002C4DF4 " "
 *   insn=0x00000000002C4E18 string=0x00000000001F8C80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponComponent::ValueForBindedProperty(
        Caver::SwingableWeaponComponent *this,
        const Caver::FloatColor *a2)
{
  float v2; // s0

  switch ( (int)a2 )
  {
    case 2:
      v2 = *((float *)this + 103);
      goto LABEL_3;
    case 3:
      v2 = *((float *)this + 104);
      goto LABEL_3;
    case 4:
      v2 = *((float *)this + 105);
      goto LABEL_3;
    case 5:
      Caver::BindingValue::ValueWithFloatColor((Caver::SwingableWeaponComponent *)((char *)this + 424), a2);
      return;
    case 6:
      v2 = *((float *)this + 111);
LABEL_3:
      Caver::BindingValue::ValueWithFloat(this, v2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

