/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCE34
 * Mangled: _ZThn16_N5Caver20WeaponTrailComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::WeaponTrailComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 3
 *   insn=0x00000000002CCE34 string=0x00000000002CCE38 "A"
 *   insn=0x00000000002CCE38 string=0x00000000002CCE3C "%"
 *   insn=0x00000000002CCE44 string=0x00000000001F8C80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::WeaponTrailComponent::ValueForBindedProperty(
        Caver::WeaponTrailComponent *this,
        const Caver::FloatColor *a2)
{
  char *v2; // x0

  v2 = (char *)this - 16;
  if ( (_DWORD)a2 )
    return Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
  else
    return Caver::BindingValue::ValueWithFloatColor((Caver::BindingValue *)(v2 + 176), a2);
}

