/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028FEA0
 * Mangled: _ZThn16_N5Caver14SpellComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 3
 *   insn=0x000000000028FEA0 string=0x000000000028FEA4 "A"
 *   insn=0x000000000028FEA4 string=0x000000000028FEA8 "\n"
 *   insn=0x000000000028FEB0 string=0x00000000001FA5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SpellComponent::ValueForBindedProperty(
        Caver::SpellComponent *this,
        const Caver::Program *a2)
{
  char *v2; // x0

  v2 = (char *)this - 16;
  if ( (_DWORD)a2 )
    return Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
  else
    return Caver::BindingValue::ValueWithProgram((Caver::BindingValue *)(v2 + 144), a2);
}

