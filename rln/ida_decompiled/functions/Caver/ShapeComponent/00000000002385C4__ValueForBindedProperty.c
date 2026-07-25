/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002385C4
 * Mangled: _ZN5Caver14ShapeComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ShapeComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F36F0  Caver::ShapeComponent::ValueForBindedProperty(int)
 *
 * Callees: 3
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 21
 *   insn=0x00000000002385C4 string=0x00000000002385C8 "?"
 *   insn=0x00000000002385CC string=0x00000000002385D0 "j"
 *   insn=0x00000000002385CC string=0x00000000002385FC "5"
 *   insn=0x00000000002385D0 string=0x00000000002385D8 "Iy"
 *   insn=0x00000000002385D0 string=0x0000000000584798 "h>"
 *   insn=0x00000000002385D8 string=0x00000000002385DC ")"
 *   insn=0x00000000002385DC string=0x00000000002385E0 " "
 *   insn=0x00000000002385E0 string=0x00000000002385E4 "\t<@"
 *   insn=0x00000000002385E0 string=0x00000000002385F0 "\t<@"
 *   insn=0x00000000002385E0 string=0x0000000000238600 "\tp"
 *   insn=0x00000000002385E0 string=0x0000000000238614 "\t<@"
 *   insn=0x00000000002385E0 string=0x0000000000238628 "\t<@"
 *   insn=0x00000000002385E0 string=0x000000000023863C "\t<@"
 *   insn=0x00000000002385E4 string=0x00000000002385E8 " "
 *   insn=0x00000000002385F0 string=0x00000000002385F4 " "
 *   insn=0x0000000000238604 string=0x000000000023860C "@\t"
 *   insn=0x0000000000238614 string=0x0000000000238618 " "
 *   insn=0x0000000000238618 string=0x000000000023861C "!\t@"
 *   insn=0x0000000000238628 string=0x000000000023862C " "
 *   insn=0x000000000023862C string=0x0000000000238630 "!@"
 *   insn=0x000000000023863C string=0x0000000000238640 " \t@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShapeComponent::ValueForBindedProperty(float **this, int a2)
{
  float v2; // s0

  switch ( a2 )
  {
    case 'd':
      Caver::BindingValue::ValueWithString();
      return;
    case 'e':
    case 'i':
      v2 = *this[15];
      goto LABEL_3;
    case 'f':
      v2 = *this[15] + this[15][2];
      goto LABEL_3;
    case 'g':
    case 'j':
      v2 = this[15][1];
      goto LABEL_3;
    case 'h':
      v2 = this[15][1] + this[15][3];
      goto LABEL_3;
    case 'k':
      v2 = this[15][2];
LABEL_3:
      Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)this, v2);
      break;
    default:
      Caver::Component::ValueForBindedProperty((Caver::Component *)this, a2);
      break;
  }
}

