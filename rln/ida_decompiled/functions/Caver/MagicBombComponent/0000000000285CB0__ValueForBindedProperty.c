/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285CB0
 * Mangled: _ZN5Caver18MagicBombComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MagicBombComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 4
 *   insn=0x0000000000285CB0 string=0x0000000000285CB4 "a"
 *   insn=0x0000000000285CB4 string=0x0000000000285CC0 "t"
 *   insn=0x0000000000285CBC string=0x00000000001F8C80 "0'"
 *   insn=0x0000000000285CC0 string=0x00000000001FBA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBombComponent::ValueForBindedProperty(
        Caver::MagicBombComponent *this,
        const Caver::FloatColor *a2)
{
  if ( (_DWORD)a2 == 100 )
    return Caver::BindingValue::ValueWithFloatColor((Caver::MagicBombComponent *)((char *)this + 208), a2);
  else
    return Caver::SpellComponent::ValueForBindedProperty(this, (int)a2);
}

