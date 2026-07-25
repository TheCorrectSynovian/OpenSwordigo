/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002920E8
 * Mangled: _ZN5Caver15AttackComponent22ValueForBindedPropertyEi
 * Demangled: Caver::AttackComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001FE180  Caver::AttackComponent::ValueForBindedProperty(int)
 *
 * Callees: 3
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 8
 *   insn=0x00000000002920E8 string=0x00000000002920EC "?!"
 *   insn=0x00000000002920EC string=0x00000000002920F0 ""
 *   insn=0x00000000002920F0 string=0x0000000000292110 "p"
 *   insn=0x00000000002920F4 string=0x00000000002920FC "Iy"
 *   insn=0x00000000002920FC string=0x0000000000292100 ")"
 *   insn=0x0000000000292100 string=0x0000000000292104 " "
 *   insn=0x0000000000292108 string=0x000000000029210C "9"
 *   insn=0x000000000029210C string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AttackComponent::ValueForBindedProperty(Caver::AttackComponent *this, const Caver::Program *a2)
{
  float v2; // s0

  switch ( (int)a2 )
  {
    case 4:
      Caver::BindingValue::ValueWithProgram((Caver::AttackComponent *)((char *)this + 208), a2);
      return;
    case 5:
      v2 = *((float *)this + 65);
      goto LABEL_5;
    case 6:
      v2 = *((float *)this + 66);
      goto LABEL_5;
    case 7:
      v2 = *((float *)this + 69);
      goto LABEL_5;
    case 8:
      v2 = *((float *)this + 70);
      goto LABEL_5;
    case 9:
      v2 = *((float *)this + 71);
      goto LABEL_5;
    case 10:
      v2 = *((float *)this + 72);
      goto LABEL_5;
    case 11:
      v2 = *((float *)this + 74);
      goto LABEL_5;
    case 12:
      v2 = *((float *)this + 75);
LABEL_5:
      Caver::BindingValue::ValueWithFloat(this, v2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

