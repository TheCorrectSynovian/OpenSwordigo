/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026ED6C
 * Mangled: _ZN5Caver19EntityInfoComponent22ValueForBindedPropertyEi
 * Demangled: Caver::EntityInfoComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000026ED6C string=0x000000000026ED70 "X@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityInfoComponent::ValueForBindedProperty(Caver::EntityInfoComponent *this, int a2)
{
  if ( a2 )
    Caver::Component::ValueForBindedProperty(this, a2);
  else
    Caver::BindingValue::ValueWithString();
}

