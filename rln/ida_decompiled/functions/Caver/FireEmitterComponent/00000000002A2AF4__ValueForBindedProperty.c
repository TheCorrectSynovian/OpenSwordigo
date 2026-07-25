/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A2AF4
 * Mangled: _ZN5Caver20FireEmitterComponent22ValueForBindedPropertyEi
 * Demangled: Caver::FireEmitterComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000202ED0  Caver::FireEmitterComponent::ValueForBindedProperty(int)
 *
 * Callees: 4
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 11
 *   insn=0x00000000002A2AF4 string=0x00000000002A2AF8 "?"
 *   insn=0x00000000002A2AF8 string=0x00000000002A2AFC ""
 *   insn=0x00000000002A2AFC string=0x00000000002A2B00 "*"
 *   insn=0x00000000002A2B00 string=0x00000000002A2B08 "Iy"
 *   insn=0x00000000002A2B08 string=0x00000000002A2B0C ")"
 *   insn=0x00000000002A2B0C string=0x00000000002A2B10 " "
 *   insn=0x00000000002A2B14 string=0x00000000002A2B18 "&"
 *   insn=0x00000000002A2B20 string=0x00000000002A2B24 "WX"
 *   insn=0x00000000002A2B24 string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002A2B28 string=0x00000000002A2B2C "Ur"
 *   insn=0x00000000002A2B30 string=0x00000000002A2B34 "Sr"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireEmitterComponent::ValueForBindedProperty(
        Caver::FireEmitterComponent *this,
        const Caver::FloatColor *a2)
{
  Caver::BindingValue *v2; // x0
  float v3; // s0

  switch ( (int)a2 )
  {
    case 2:
      v2 = (Caver::FireEmitterComponent *)((char *)this + 180);
      goto LABEL_3;
    case 3:
      Caver::BindingValue::ValueWithFloatColor((Caver::FireEmitterComponent *)((char *)this + 192), a2);
      return;
    case 4:
      v3 = *((float *)this + 40);
      goto LABEL_7;
    case 5:
      v3 = *((float *)this + 41);
LABEL_7:
      Caver::BindingValue::ValueWithFloat(this, v3);
      break;
    case 6:
      v2 = (Caver::FireEmitterComponent *)((char *)this + 168);
LABEL_3:
      Caver::BindingValue::ValueWithVector3(v2, a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

