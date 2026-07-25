/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002300F0
 * Mangled: _ZThn16_N5Caver15PortalComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::PortalComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002300F8 string=0x00000000002300FC "?"
 *   insn=0x0000000000230100 string=0x0000000000230104 "?"
 *   insn=0x0000000000230108 string=0x0000000000230124 "k;"
 *   insn=0x000000000023011C string=0x0000000000230120 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::PortalComponent::ValueForBindedProperty(
        Caver::PortalComponent *this,
        int a2)
{
  unsigned __int8 *v2; // x0

  v2 = (unsigned __int8 *)this - 16;
  if ( a2 == 3 )
  {
    Caver::BindingValue::ValueWithBool((Caver::BindingValue *)v2[152], 3);
  }
  else if ( a2 == 2 || a2 == 1 )
  {
    Caver::BindingValue::ValueWithString();
  }
  else
  {
    Caver::Component::ValueForBindedProperty((Caver::Component *)v2, a2);
  }
}

