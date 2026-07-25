/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000284588
 * Mangled: _ZThn16_N5Caver18MagicBoltComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::MagicBoltComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 4
 *   insn=0x0000000000284590 string=0x0000000000284594 "?"
 *   insn=0x0000000000284598 string=0x00000000002845AC "9"
 *   insn=0x00000000002845A0 string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002845AC string=0x00000000001FBA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::MagicBoltComponent::ValueForBindedProperty(
        Caver::MagicBoltComponent *this,
        const Caver::FloatColor *a2)
{
  float *v2; // x0

  v2 = (float *)((char *)this - 16);
  if ( (_DWORD)a2 == 104 )
  {
    Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v2[70]);
  }
  else if ( (_DWORD)a2 == 103 )
  {
    Caver::BindingValue::ValueWithFloatColor((Caver::BindingValue *)(v2 + 66), a2);
  }
  else
  {
    Caver::SpellComponent::ValueForBindedProperty((Caver::SpellComponent *)v2, (int)a2);
  }
}

