/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023FAB8
 * Mangled: _ZThn16_N5Caver18TouchableComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::TouchableComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 2
 *   insn=0x000000000023FAC8 string=0x000000000023FACC "m"
 *   insn=0x000000000023FAD4 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::TouchableComponent::ValueForBindedProperty(
        Caver::TouchableComponent *this,
        const Caver::Program *a2)
{
  float *v2; // x0

  v2 = (float *)((char *)this - 16);
  if ( (_DWORD)a2 == 1 )
  {
    Caver::BindingValue::ValueWithProgram((Caver::BindingValue *)(v2 + 32), a2);
  }
  else if ( (_DWORD)a2 )
  {
    Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
  }
  else
  {
    Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v2[28]);
  }
}

