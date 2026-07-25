/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C914
 * Mangled: _ZN5Caver28AnimationControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::AnimationControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002036A0  Caver::AnimationControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 2
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x000000000021C914 string=0x000000000021C918 "a"
 *   insn=0x000000000021C918 string=0x000000000021C924 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimationControllerComponent::ValueForBindedProperty(
        Caver::AnimationControllerComponent *this,
        int a2)
{
  if ( a2 == 2 )
    return Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 168), 2);
  else
    return Caver::Component::ValueForBindedProperty(this, a2);
}

