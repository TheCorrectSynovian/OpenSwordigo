/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B5DD4
 * Mangled: _ZThn16_N5Caver24PressureTriggerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::PressureTriggerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 7
 *   insn=0x00000000002B5DD8 string=0x00000000002B5DDC "("
 *   insn=0x00000000002B5DDC string=0x00000000002B5E00 "4$"
 *   insn=0x00000000002B5DE4 string=0x00000000002B5DE8 "J!1"
 *   insn=0x00000000002B5DE8 string=0x00000000002B5DEC "Iy"
 *   insn=0x00000000002B5DEC string=0x00000000002B5DF0 ")"
 *   insn=0x00000000002B5DF0 string=0x00000000002B5DF4 " "
 *   insn=0x00000000002B5E10 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::PressureTriggerComponent::ValueForBindedProperty(
        Caver::PressureTriggerComponent *this,
        const Caver::Program *a2)
{
  float *v2; // x0
  Caver::BindingValue *v3; // x0

  v2 = (float *)((char *)this - 16);
  switch ( (int)a2 )
  {
    case 0:
      Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v2[30]);
      break;
    case 1:
      Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)v2 + 216), (bool)a2);
      break;
    case 2:
      v3 = (Caver::BindingValue *)(v2 + 34);
      goto LABEL_6;
    case 3:
      v3 = (Caver::BindingValue *)(v2 + 44);
LABEL_6:
      Caver::BindingValue::ValueWithProgram(v3, a2);
      break;
    default:
      Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
      break;
  }
}

