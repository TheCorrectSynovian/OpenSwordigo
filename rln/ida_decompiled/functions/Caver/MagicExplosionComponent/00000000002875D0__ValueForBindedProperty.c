/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002875D0
 * Mangled: _ZN5Caver23MagicExplosionComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MagicExplosionComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 4
 *   insn=0x00000000002875D4 string=0x00000000002875D8 "?"
 *   insn=0x00000000002875DC string=0x00000000002875E0 "?"
 *   insn=0x00000000002875E4 string=0x0000000000287600 "4"
 *   insn=0x00000000002875EC string=0x00000000001F8C80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicExplosionComponent::ValueForBindedProperty(
        Caver::MagicExplosionComponent *this,
        const Caver::FloatColor *a2)
{
  float v2; // s0

  switch ( (_DWORD)a2 )
  {
    case 3:
      v2 = *((float *)this + 57);
LABEL_6:
      Caver::BindingValue::ValueWithFloat(this, v2);
      return;
    case 2:
      v2 = *((float *)this + 56);
      goto LABEL_6;
    case 1:
      Caver::BindingValue::ValueWithFloatColor((Caver::MagicExplosionComponent *)((char *)this + 176), a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

