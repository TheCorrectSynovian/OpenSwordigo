/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000289954
 * Mangled: _ZN5Caver22MagicHookshotComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MagicHookshotComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 4
 *   insn=0x0000000000289954 string=0x0000000000289958 "a"
 *   insn=0x0000000000289958 string=0x0000000000289964 "K"
 *   insn=0x0000000000289960 string=0x00000000001F8C80 "0'"
 *   insn=0x0000000000289964 string=0x00000000001FBA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicHookshotComponent::ValueForBindedProperty(
        Caver::MagicHookshotComponent *this,
        const Caver::FloatColor *a2)
{
  if ( (_DWORD)a2 == 104 )
    return Caver::BindingValue::ValueWithFloatColor((Caver::MagicHookshotComponent *)((char *)this + 296), a2);
  else
    return Caver::SpellComponent::ValueForBindedProperty(this, (int)a2);
}

