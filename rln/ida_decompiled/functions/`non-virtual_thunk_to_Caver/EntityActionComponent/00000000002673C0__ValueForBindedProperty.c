/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002673C0
 * Mangled: _ZThn16_N5Caver21EntityActionComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::EntityActionComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002673C0 string=0x00000000002673C4 "A"
 *   insn=0x00000000002673D0 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::EntityActionComponent::ValueForBindedProperty(
        Caver::EntityActionComponent *this,
        const Caver::Program *a2)
{
  char *v2; // x0

  v2 = (char *)this - 16;
  if ( (_DWORD)a2 )
    return Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
  else
    return Caver::BindingValue::ValueWithProgram((Caver::BindingValue *)(v2 + 112), a2);
}

