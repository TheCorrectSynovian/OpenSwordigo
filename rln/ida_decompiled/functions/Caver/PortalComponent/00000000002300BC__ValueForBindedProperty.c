/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002300BC
 * Mangled: _ZN5Caver15PortalComponent22ValueForBindedPropertyEi
 * Demangled: Caver::PortalComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002300C0 string=0x00000000002300C4 "?"
 *   insn=0x00000000002300C8 string=0x00000000002300CC "?"
 *   insn=0x00000000002300D0 string=0x00000000002300EC "y;"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalComponent::ValueForBindedProperty(Caver::PortalComponent *this, int a2)
{
  if ( a2 == 3 )
  {
    Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 152), 3);
  }
  else if ( a2 == 2 || a2 == 1 )
  {
    Caver::BindingValue::ValueWithString();
  }
  else
  {
    Caver::Component::ValueForBindedProperty(this, a2);
  }
}

