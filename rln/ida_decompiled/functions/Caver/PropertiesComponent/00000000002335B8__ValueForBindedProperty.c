/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002335B8
 * Mangled: _ZN5Caver19PropertiesComponent22ValueForBindedPropertyEi
 * Demangled: Caver::PropertiesComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 3
 *   insn=0x00000000002335B8 string=0x00000000002335BC "E."
 *   insn=0x00000000002335C0 string=0x00000000002335C4 ""
 *   insn=0x00000000002335C4 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PropertiesComponent::ValueForBindedProperty(
        Caver::PropertiesComponent *this,
        const Caver::Program *a2)
{
  if ( (_DWORD)a2 )
    return Caver::Component::ValueForBindedProperty(this, (int)a2);
  else
    return Caver::BindingValue::ValueWithProgram((Caver::PropertiesComponent *)((char *)this + 120), a2);
}

