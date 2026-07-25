/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A5548
 * Mangled: _ZThn16_N5Caver17ParticleComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ParticleComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A5554 string=0x00000000002A5568 "Zf"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::ParticleComponent::ValueForBindedProperty(
        Caver::ParticleComponent *this,
        int a2)
{
  float *v2; // x0

  v2 = (float *)((char *)this - 16);
  if ( a2 == 1 )
  {
    Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v2[32]);
  }
  else if ( a2 )
  {
    Caver::Component::ValueForBindedProperty((Caver::Component *)v2, a2);
  }
  else
  {
    Caver::BindingValue::ValueWithString();
  }
}

