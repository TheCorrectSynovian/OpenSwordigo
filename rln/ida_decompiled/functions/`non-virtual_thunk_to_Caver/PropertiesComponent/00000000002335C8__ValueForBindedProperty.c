/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002335C8
 * Mangled: _ZThn16_N5Caver19PropertiesComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::PropertiesComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 3
 *   insn=0x00000000002335C8 string=0x00000000002335CC "A"
 *   insn=0x00000000002335CC string=0x00000000002335D0 "@."
 *   insn=0x00000000002335D8 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PropertiesComponent::ValueForBindedProperty(
        Caver::PropertiesComponent *this,
        const Caver::Program *a2)
{
  char *v2; // x0

  v2 = (char *)this - 16;
  if ( (_DWORD)a2 )
    return Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
  else
    return Caver::BindingValue::ValueWithProgram((Caver::BindingValue *)(v2 + 120), a2);
}

