/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023FA98
 * Mangled: _ZN5Caver18TouchableComponent22ValueForBindedPropertyEi
 * Demangled: Caver::TouchableComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 3
 *   insn=0x000000000023FAA0 string=0x000000000023FAB4 ""
 *   insn=0x000000000023FAA4 string=0x000000000023FAA8 "v"
 *   insn=0x000000000023FAB0 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TouchableComponent::ValueForBindedProperty(
        Caver::TouchableComponent *this,
        const Caver::Program *a2)
{
  if ( (_DWORD)a2 == 1 )
  {
    Caver::BindingValue::ValueWithProgram((Caver::TouchableComponent *)((char *)this + 128), a2);
  }
  else if ( (_DWORD)a2 )
  {
    Caver::Component::ValueForBindedProperty(this, (int)a2);
  }
  else
  {
    Caver::BindingValue::ValueWithFloat(this, *((float *)this + 28));
  }
}

