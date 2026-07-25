/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028E1F4
 * Mangled: _ZThn16_N5Caver14SkillComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::SkillComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6210  Caver::BindingValue::ValueWithVector2(Caver::Vector2 const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000028E1FC string=0x000000000028E200 "?"
 *   insn=0x000000000028E204 string=0x000000000028E218 "."
 *   insn=0x000000000028E214 string=0x00000000001F6210 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::SkillComponent::ValueForBindedProperty(
        Caver::SkillComponent *this,
        const Caver::Vector2 *a2)
{
  char *v2; // x0

  v2 = (char *)this - 16;
  if ( (_DWORD)a2 == 2 )
  {
    Caver::BindingValue::ValueWithVector2((Caver::BindingValue *)(v2 + 136), a2);
  }
  else if ( (_DWORD)a2 == 1 )
  {
    Caver::BindingValue::ValueWithString();
  }
  else
  {
    Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
  }
}

