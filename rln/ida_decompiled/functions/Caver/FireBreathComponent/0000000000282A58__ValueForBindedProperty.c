/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282A58
 * Mangled: _ZN5Caver19FireBreathComponent22ValueForBindedPropertyEi
 * Demangled: Caver::FireBreathComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 4
 *   insn=0x0000000000282A58 string=0x0000000000282A5C "a"
 *   insn=0x0000000000282A5C string=0x0000000000282A68 "\n"
 *   insn=0x0000000000282A64 string=0x00000000001F8C80 "0'"
 *   insn=0x0000000000282A68 string=0x00000000001FBA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FireBreathComponent::ValueForBindedProperty(
        Caver::FireBreathComponent *this,
        const Caver::FloatColor *a2)
{
  if ( (_DWORD)a2 == 102 )
    return Caver::BindingValue::ValueWithFloatColor((Caver::FireBreathComponent *)((char *)this + 240), a2);
  else
    return Caver::SpellComponent::ValueForBindedProperty(this, (int)a2);
}

