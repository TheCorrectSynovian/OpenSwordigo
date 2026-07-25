/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025B494
 * Mangled: _ZN5Caver23CharControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::CharControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F5210  Caver::CharControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 2
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 6
 *   insn=0x000000000025B494 string=0x000000000025B498 "?"
 *   insn=0x000000000025B498 string=0x000000000025B49C ""
 *   insn=0x000000000025B49C string=0x000000000025B4A0 "j"
 *   insn=0x000000000025B4A0 string=0x000000000025B4A8 "Iy"
 *   insn=0x000000000025B4A8 string=0x000000000025B4AC ")"
 *   insn=0x000000000025B4AC string=0x000000000025B4B0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharControllerComponent::ValueForBindedProperty(Caver::CharControllerComponent *this, int a2)
{
  float v2; // s0

  switch ( a2 )
  {
    case 17:
      v2 = *((float *)this + 155);
      goto LABEL_3;
    case 18:
      v2 = *((float *)this + 158);
      goto LABEL_3;
    case 19:
      v2 = *((float *)this + 159);
      goto LABEL_3;
    case 20:
      v2 = *((float *)this + 160);
      goto LABEL_3;
    case 21:
      v2 = *((float *)this + 161);
LABEL_3:
      Caver::BindingValue::ValueWithFloat(this, v2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, a2);
      break;
  }
}

