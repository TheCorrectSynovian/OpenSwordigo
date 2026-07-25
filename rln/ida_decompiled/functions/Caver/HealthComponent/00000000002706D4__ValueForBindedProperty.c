/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002706D4
 * Mangled: _ZN5Caver15HealthComponent22ValueForBindedPropertyEi
 * Demangled: Caver::HealthComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001FD760  Caver::HealthComponent::ValueForBindedProperty(int)
 *
 * Callees: 4
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *
 * Referenced strings: 10
 *   insn=0x00000000002706D4 string=0x00000000002706D8 "("
 *   insn=0x00000000002706DC string=0x0000000000588290 "d"
 *   insn=0x00000000002706E0 string=0x00000000002706E4 "JA\n"
 *   insn=0x00000000002706E4 string=0x00000000002706E8 "Iy"
 *   insn=0x00000000002706E8 string=0x00000000002706EC ")"
 *   insn=0x00000000002706EC string=0x00000000002706F0 " "
 *   insn=0x00000000002706F8 string=0x00000000001FB2C0 "0'"
 *   insn=0x0000000000270704 string=0x000000000027070C "!"
 *   insn=0x0000000000270714 string=0x0000000000270718 "Z;"
 *   insn=0x000000000027071C string=0x0000000000270720 "X;"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::HealthComponent::ValueForBindedProperty(
        Caver::HealthComponent *this@<X0>,
        int a2@<W1>,
        __int64 *a3@<X8>)
{
  float v3; // s0

  switch ( a2 )
  {
    case 0:
      Caver::BindingValue::ValueWithInt(a3, (Caver::BindingValue *)*((unsigned int *)this + 31), a2);
      break;
    case 1:
      Caver::BindingValue::ValueWithInt();
      break;
    case 2:
      v3 = *((float *)this + 35);
      goto LABEL_6;
    case 3:
      v3 = *((float *)this + 36);
LABEL_6:
      Caver::BindingValue::ValueWithFloat(this, v3);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, a2);
      break;
  }
}

