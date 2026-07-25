/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027BADC
 * Mangled: _ZN5Caver22MonsterEntityComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MonsterEntityComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000201820  Caver::MonsterEntityComponent::ValueForBindedProperty(int)
 *
 * Callees: 3
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x0000000000202610  Caver::EntityComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 9
 *   insn=0x000000000027BADC string=0x000000000027BAE0 "?"
 *   insn=0x000000000027BAE0 string=0x000000000027BAE4 ""
 *   insn=0x000000000027BAE4 string=0x000000000027BAE8 "j"
 *   insn=0x000000000027BAE8 string=0x000000000027BAF0 "Iy"
 *   insn=0x000000000027BAF0 string=0x000000000027BAF4 ")"
 *   insn=0x000000000027BAF4 string=0x000000000027BAF8 " "
 *   insn=0x000000000027BB00 string=0x00000000001FA5F0 "0'"
 *   insn=0x000000000027BB10 string=0x000000000027BB14 "w\n"
 *   insn=0x000000000027BB18 string=0x000000000027BB1C "u\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterEntityComponent::ValueForBindedProperty(
        Caver::MonsterEntityComponent *this,
        const Caver::Program *a2)
{
  Caver::BindingValue *v2; // x0
  __int64 result; // x0
  Caver::BindingValue *v4; // x0

  switch ( (int)a2 )
  {
    case 'd':
      v2 = (Caver::MonsterEntityComponent *)((char *)this + 304);
      return Caver::BindingValue::ValueWithProgram(v2, a2);
    case 'e':
      v2 = (Caver::MonsterEntityComponent *)((char *)this + 344);
      return Caver::BindingValue::ValueWithProgram(v2, a2);
    case 'f':
      v4 = (Caver::BindingValue *)*((unsigned __int8 *)this + 408);
      goto LABEL_7;
    case 'g':
      v4 = (Caver::BindingValue *)*((unsigned __int8 *)this + 410);
LABEL_7:
      result = Caver::BindingValue::ValueWithBool(v4, (bool)a2);
      break;
    default:
      result = Caver::EntityComponent::ValueForBindedProperty(this, (int)a2);
      break;
  }
  return result;
}

