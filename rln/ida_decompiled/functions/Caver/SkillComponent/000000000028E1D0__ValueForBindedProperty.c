/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028E1D0
 * Mangled: _ZN5Caver14SkillComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SkillComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6210  Caver::BindingValue::ValueWithVector2(Caver::Vector2 const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 4
 *   insn=0x000000000028E1D4 string=0x000000000028E1D8 "?"
 *   insn=0x000000000028E1DC string=0x000000000028E1F0 "8"
 *   insn=0x000000000028E1E8 string=0x000000000028E1EC "\t"
 *   insn=0x000000000028E1EC string=0x00000000001F6210 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkillComponent::ValueForBindedProperty(Caver::SkillComponent *this, const Caver::Vector2 *a2)
{
  if ( (_DWORD)a2 == 2 )
  {
    Caver::BindingValue::ValueWithVector2((Caver::SkillComponent *)((char *)this + 136), a2);
  }
  else if ( (_DWORD)a2 == 1 )
  {
    Caver::BindingValue::ValueWithString();
  }
  else
  {
    Caver::Component::ValueForBindedProperty(this, (int)a2);
  }
}

