/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B5D90
 * Mangled: _ZN5Caver24PressureTriggerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::PressureTriggerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 10
 *   insn=0x00000000002B5D90 string=0x00000000002B5D94 "("
 *   insn=0x00000000002B5D94 string=0x00000000002B5DB8 "F$"
 *   insn=0x00000000002B5D98 string=0x0000000000589C38 "x"
 *   insn=0x00000000002B5D9C string=0x00000000002B5DA0 "J"
 *   insn=0x00000000002B5DA0 string=0x00000000002B5DA4 "Iy"
 *   insn=0x00000000002B5DA4 string=0x00000000002B5DA8 ")"
 *   insn=0x00000000002B5DA8 string=0x00000000002B5DAC " "
 *   insn=0x00000000002B5DC4 string=0x00000000002B5DC8 "\n"
 *   insn=0x00000000002B5DC8 string=0x00000000001FA5F0 "0'"
 *   insn=0x00000000002B5DCC string=0x00000000002B5DD0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PressureTriggerComponent::ValueForBindedProperty(
        Caver::PressureTriggerComponent *this,
        const Caver::Program *a2)
{
  Caver::BindingValue *v2; // x0

  switch ( (int)a2 )
  {
    case 0:
      Caver::BindingValue::ValueWithFloat(this, *((float *)this + 30));
      break;
    case 1:
      Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 216), (bool)a2);
      break;
    case 2:
      v2 = (Caver::PressureTriggerComponent *)((char *)this + 136);
      goto LABEL_6;
    case 3:
      v2 = (Caver::PressureTriggerComponent *)((char *)this + 176);
LABEL_6:
      Caver::BindingValue::ValueWithProgram(v2, a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

