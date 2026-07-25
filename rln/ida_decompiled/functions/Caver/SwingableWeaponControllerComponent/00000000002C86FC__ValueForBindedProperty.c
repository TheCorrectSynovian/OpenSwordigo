/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C86FC
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SwingableWeaponControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002C8700 string=0x00000000002C8704 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponControllerComponent::ValueForBindedProperty(
        Caver::SwingableWeaponControllerComponent *this,
        int a2)
{
  if ( a2 == 2 || a2 == 1 )
    Caver::BindingValue::ValueWithString();
  else
    Caver::Component::ValueForBindedProperty(this, a2);
}

