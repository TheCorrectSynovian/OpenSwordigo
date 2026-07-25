/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000284564
 * Mangled: _ZN5Caver18MagicBoltComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MagicBoltComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *
 * Referenced strings: 4
 *   insn=0x0000000000284568 string=0x000000000028456C "?"
 *   insn=0x0000000000284570 string=0x0000000000284584 "C"
 *   insn=0x0000000000284578 string=0x00000000001F8C80 "0'"
 *   insn=0x0000000000284584 string=0x00000000001FBA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBoltComponent::ValueForBindedProperty(
        Caver::MagicBoltComponent *this,
        const Caver::FloatColor *a2)
{
  if ( (_DWORD)a2 == 104 )
  {
    Caver::BindingValue::ValueWithFloat(this, *((float *)this + 70));
  }
  else if ( (_DWORD)a2 == 103 )
  {
    Caver::BindingValue::ValueWithFloatColor((Caver::MagicBoltComponent *)((char *)this + 264), a2);
  }
  else
  {
    Caver::SpellComponent::ValueForBindedProperty(this, (int)a2);
  }
}

