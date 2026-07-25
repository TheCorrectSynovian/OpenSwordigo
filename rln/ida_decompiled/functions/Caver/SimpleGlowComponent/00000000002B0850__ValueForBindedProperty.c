/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B0850
 * Mangled: _ZN5Caver19SimpleGlowComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000202D30  Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *
 * Callees: 4
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FD7D0  Caver::GlowComponent::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 8
 *   insn=0x00000000002B0850 string=0x00000000002B0854 "?"
 *   insn=0x00000000002B0854 string=0x00000000002B0858 ""
 *   insn=0x00000000002B085C string=0x00000000002B0864 "Iy"
 *   insn=0x00000000002B0864 string=0x00000000002B0868 ")"
 *   insn=0x00000000002B0868 string=0x00000000002B086C " "
 *   insn=0x00000000002B0874 string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002B0878 string=0x00000000001FD7D0 "0'"
 *   insn=0x00000000002B0888 string=0x00000000001FB2C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::SimpleGlowComponent::ValueForBindedProperty(
        Caver::SimpleGlowComponent *this@<X0>,
        const Caver::FloatColor *a2@<X1>,
        __int64 *a3@<X8>)
{
  float v3; // s0

  switch ( (int)a2 )
  {
    case 'd':
      Caver::BindingValue::ValueWithFloatColor((Caver::SimpleGlowComponent *)((char *)this + 164), a2);
      return;
    case 'e':
      v3 = *((float *)this + 45);
      goto LABEL_5;
    case 'f':
      Caver::BindingValue::ValueWithInt(a3, (Caver::BindingValue *)*((unsigned int *)this + 46), (int)a2);
      return;
    case 'g':
      v3 = *((float *)this + 49);
      goto LABEL_5;
    case 'h':
      v3 = *((float *)this + 47);
      goto LABEL_5;
    case 'i':
      v3 = *((float *)this + 48);
      goto LABEL_5;
    case 'j':
      v3 = *((float *)this + 51);
      goto LABEL_5;
    case 'k':
      v3 = *((float *)this + 52);
LABEL_5:
      Caver::BindingValue::ValueWithFloat(this, v3);
      break;
    default:
      Caver::GlowComponent::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

