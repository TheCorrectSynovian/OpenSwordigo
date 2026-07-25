/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A3E8
 * Mangled: _ZThn16_N5Caver20SoundEffectComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::SoundEffectComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000023A3F0 string=0x000000000023A3F4 "?"
 *   insn=0x000000000023A400 string=0x000000000023A404 "O"
 *   insn=0x000000000023A410 string=0x000000000023A414 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::SoundEffectComponent::ValueForBindedProperty(
        Caver::SoundEffectComponent *this,
        int a2)
{
  float *v2; // x0
  float v3; // s0

  v2 = (float *)((char *)this - 16);
  if ( a2 == 2 )
  {
    v3 = v2[33];
LABEL_6:
    Caver::BindingValue::ValueWithFloat((Caver::BindingValue *)v2, v3);
    return;
  }
  if ( a2 == 1 )
  {
    v3 = v2[32];
    goto LABEL_6;
  }
  if ( a2 )
    Caver::Component::ValueForBindedProperty((Caver::Component *)v2, a2);
  else
    Caver::BindingValue::ValueWithString();
}

