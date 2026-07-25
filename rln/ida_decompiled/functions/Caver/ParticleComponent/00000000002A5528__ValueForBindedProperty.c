/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A5528
 * Mangled: _ZN5Caver17ParticleComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ParticleComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A5530 string=0x00000000002A5544 "cf"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleComponent::ValueForBindedProperty(Caver::ParticleComponent *this, int a2)
{
  if ( a2 == 1 )
  {
    Caver::BindingValue::ValueWithFloat(this, *((float *)this + 32));
  }
  else if ( a2 )
  {
    Caver::Component::ValueForBindedProperty(this, a2);
  }
  else
  {
    Caver::BindingValue::ValueWithString();
  }
}

