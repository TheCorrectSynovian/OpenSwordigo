/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCE24
 * Mangled: _ZN5Caver20WeaponTrailComponent22ValueForBindedPropertyEi
 * Demangled: Caver::WeaponTrailComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CCE24 string=0x00000000002CCE28 "*"
 *   insn=0x00000000002CCE30 string=0x00000000001F8C80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrailComponent::ValueForBindedProperty(
        Caver::WeaponTrailComponent *this,
        const Caver::FloatColor *a2)
{
  if ( (_DWORD)a2 )
    return Caver::Component::ValueForBindedProperty(this, (int)a2);
  else
    return Caver::BindingValue::ValueWithFloatColor((Caver::WeaponTrailComponent *)((char *)this + 176), a2);
}

