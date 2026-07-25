/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000289968
 * Mangled: _ZThn16_N5Caver22MagicHookshotComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::MagicHookshotComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 4
 *   insn=0x000000000028996C string=0x0000000000289970 "a"
 *   insn=0x0000000000289970 string=0x000000000028997C "E"
 *   insn=0x0000000000289978 string=0x00000000001F8C80 "0'"
 *   insn=0x000000000028997C string=0x00000000001FBA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicHookshotComponent::ValueForBindedProperty(
        Caver::MagicHookshotComponent *this,
        const Caver::FloatColor *a2)
{
  char *v2; // x0

  v2 = (char *)this - 16;
  if ( (_DWORD)a2 == 104 )
    return Caver::BindingValue::ValueWithFloatColor((Caver::BindingValue *)(v2 + 296), a2);
  else
    return Caver::SpellComponent::ValueForBindedProperty((Caver::SpellComponent *)v2, (int)a2);
}

