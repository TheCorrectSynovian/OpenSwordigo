/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB8A0
 * Mangled: ._ZNK5Caver12BindingValue12Vector2ValueEv
 * Demangled: Caver::BindingValue::Vector2Value(void)
 *
 * Callers: 1
 *   0x000000000028E21C  Caver::SkillComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000487C58  Caver::BindingValue::ValueWithVector2(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB8A4 string=0x0000000000487E28 "\t"
 *   insn=0x00000000001FB8A8 string=0x00000000001FB8AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::BindingValue::Vector2Value(Caver::BindingValue *this)
{
  JUMPOUT(0x487E28);
}

