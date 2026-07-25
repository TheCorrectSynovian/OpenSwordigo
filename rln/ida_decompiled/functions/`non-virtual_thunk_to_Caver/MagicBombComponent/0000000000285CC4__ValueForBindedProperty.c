/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285CC4
 * Mangled: _ZThn16_N5Caver18MagicBombComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::MagicBombComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 4
 *   insn=0x0000000000285CC8 string=0x0000000000285CCC "a"
 *   insn=0x0000000000285CCC string=0x0000000000285CD8 "n"
 *   insn=0x0000000000285CD4 string=0x00000000001F8C80 "0'"
 *   insn=0x0000000000285CD8 string=0x00000000001FBA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicBombComponent::ValueForBindedProperty(
        Caver::MagicBombComponent *this,
        const Caver::FloatColor *a2)
{
  char *v2; // x0

  v2 = (char *)this - 16;
  if ( (_DWORD)a2 == 100 )
    return Caver::BindingValue::ValueWithFloatColor((Caver::BindingValue *)(v2 + 208), a2);
  else
    return Caver::SpellComponent::ValueForBindedProperty((Caver::SpellComponent *)v2, (int)a2);
}

