/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282A6C
 * Mangled: _ZThn16_N5Caver19FireBreathComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::FireBreathComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 3
 *   insn=0x0000000000282A70 string=0x0000000000282A74 "a"
 *   insn=0x0000000000282A7C string=0x00000000001F8C80 "0'"
 *   insn=0x0000000000282A80 string=0x00000000001FBA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::FireBreathComponent::ValueForBindedProperty(
        Caver::FireBreathComponent *this,
        const Caver::FloatColor *a2)
{
  char *v2; // x0

  v2 = (char *)this - 16;
  if ( (_DWORD)a2 == 102 )
    return Caver::BindingValue::ValueWithFloatColor((Caver::BindingValue *)(v2 + 240), a2);
  else
    return Caver::SpellComponent::ValueForBindedProperty((Caver::SpellComponent *)v2, (int)a2);
}

