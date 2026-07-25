/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002673B0
 * Mangled: _ZN5Caver21EntityActionComponent22ValueForBindedPropertyEi
 * Demangled: Caver::EntityActionComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002673BC string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityActionComponent::ValueForBindedProperty(
        Caver::EntityActionComponent *this,
        const Caver::Program *a2)
{
  if ( (_DWORD)a2 )
    return Caver::Component::ValueForBindedProperty(this, (int)a2);
  else
    return Caver::BindingValue::ValueWithProgram((Caver::EntityActionComponent *)((char *)this + 112), a2);
}

