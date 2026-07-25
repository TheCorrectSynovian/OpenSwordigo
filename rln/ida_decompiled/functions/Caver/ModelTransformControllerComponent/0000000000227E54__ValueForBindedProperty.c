/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000227E54
 * Mangled: _ZN5Caver33ModelTransformControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ModelTransformControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002031B0  Caver::ModelTransformControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 2
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 11
 *   insn=0x0000000000227E54 string=0x0000000000227E58 "?"
 *   insn=0x0000000000227E58 string=0x0000000000227E5C ""
 *   insn=0x0000000000227E60 string=0x0000000000227E68 "Iy"
 *   insn=0x0000000000227E68 string=0x0000000000227E6C ")"
 *   insn=0x0000000000227E6C string=0x0000000000227E70 " "
 *   insn=0x0000000000227E88 string=0x0000000000227E8C "}]"
 *   insn=0x0000000000227E90 string=0x0000000000227E94 "{]"
 *   insn=0x0000000000227E98 string=0x0000000000227E9C "y]"
 *   insn=0x0000000000227EA0 string=0x0000000000227EA4 "w]"
 *   insn=0x0000000000227EB4 string=0x0000000000227EB8 "!"
 *   insn=0x0000000000227EBC string=0x0000000000227EC0 "p]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelTransformControllerComponent::ValueForBindedProperty(
        Caver::ModelTransformControllerComponent *this,
        int a2)
{
  float v2; // s0
  float v3; // s0

  switch ( a2 )
  {
    case 1:
      v2 = *((float *)this + 35);
      goto LABEL_3;
    case 2:
      v2 = *((float *)this + 36);
      goto LABEL_3;
    case 3:
      v2 = *((float *)this + 37);
      goto LABEL_3;
    case 4:
      v2 = *((float *)this + 38);
      goto LABEL_3;
    case 5:
      v2 = *((float *)this + 39);
      goto LABEL_3;
    case 6:
      v2 = *((float *)this + 40);
      goto LABEL_3;
    case 7:
      v3 = *((float *)this + 41);
      goto LABEL_12;
    case 8:
      v3 = *((float *)this + 42);
LABEL_12:
      v2 = v3 * 57.296;
LABEL_3:
      Caver::BindingValue::ValueWithFloat(this, v2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, a2);
      break;
  }
}

