/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CA05C
 * Mangled: _ZN5Caver14SwingComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SwingComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000200D80  Caver::SwingComponent::ValueForBindedProperty(int)
 *
 * Callees: 3
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 7
 *   insn=0x00000000002CA05C string=0x00000000002CA060 "?"
 *   insn=0x00000000002CA060 string=0x00000000002CA064 ""
 *   insn=0x00000000002CA064 string=0x00000000002CA068 "\n"
 *   insn=0x00000000002CA068 string=0x00000000002CA070 "Iy"
 *   insn=0x00000000002CA068 string=0x000000000058A220 "\"
 *   insn=0x00000000002CA070 string=0x00000000002CA074 ")"
 *   insn=0x00000000002CA074 string=0x00000000002CA078 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingComponent::ValueForBindedProperty(Caver::SwingComponent *this, int a2)
{
  Caver::BindingValue *v2; // x0
  float v3; // s0

  switch ( a2 )
  {
    case 1:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 144);
      goto LABEL_3;
    case 2:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 145);
LABEL_3:
      Caver::BindingValue::ValueWithBool(v2, a2);
      return;
    case 3:
      v3 = *((float *)this + 34);
      goto LABEL_7;
    case 4:
      v3 = *((float *)this + 35);
LABEL_7:
      Caver::BindingValue::ValueWithFloat(this, v3);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, a2);
      break;
  }
}

