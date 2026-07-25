/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026ED7C
 * Mangled: _ZThn16_N5Caver19EntityInfoComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::EntityInfoComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000026ED7C string=0x000000000026ED80 "A"
 *   insn=0x000000000026ED80 string=0x000000000026ED84 "S@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::EntityInfoComponent::ValueForBindedProperty(
        Caver::EntityInfoComponent *this,
        int a2)
{
  Caver::Component *v2; // x0

  v2 = (Caver::EntityInfoComponent *)((char *)this - 16);
  if ( a2 )
    Caver::Component::ValueForBindedProperty(v2, a2);
  else
    Caver::BindingValue::ValueWithString();
}

