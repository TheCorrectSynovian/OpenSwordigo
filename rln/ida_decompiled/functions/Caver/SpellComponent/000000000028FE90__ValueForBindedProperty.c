/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028FE90
 * Mangled: _ZN5Caver14SpellComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Callees: 2
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000028FE9C string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpellComponent::ValueForBindedProperty(Caver::SpellComponent *this, const Caver::Program *a2)
{
  if ( (_DWORD)a2 )
    return Caver::Component::ValueForBindedProperty(this, (int)a2);
  else
    return Caver::BindingValue::ValueWithProgram((Caver::SpellComponent *)((char *)this + 144), a2);
}

