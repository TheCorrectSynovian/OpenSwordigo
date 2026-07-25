/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A3B8
 * Mangled: _ZN5Caver20SoundEffectComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SoundEffectComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 4
 *   insn=0x000000000023A3BC string=0x000000000023A3C0 "?"
 *   insn=0x000000000023A3CC string=0x000000000023A3D0 "\"
 *   insn=0x000000000023A3D4 string=0x000000000023A3D8 "*"
 *   insn=0x000000000023A3DC string=0x000000000023A3E0 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundEffectComponent::ValueForBindedProperty(Caver::SoundEffectComponent *this, int a2)
{
  float v2; // s0

  if ( a2 == 2 )
  {
    v2 = *((float *)this + 33);
LABEL_6:
    Caver::BindingValue::ValueWithFloat(this, v2);
    return;
  }
  if ( a2 == 1 )
  {
    v2 = *((float *)this + 32);
    goto LABEL_6;
  }
  if ( a2 )
    Caver::Component::ValueForBindedProperty(this, a2);
  else
    Caver::BindingValue::ValueWithString();
}

