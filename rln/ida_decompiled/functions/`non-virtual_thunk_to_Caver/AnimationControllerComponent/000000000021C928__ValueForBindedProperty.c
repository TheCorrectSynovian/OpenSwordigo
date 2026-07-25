/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C928
 * Mangled: _ZThn16_N5Caver28AnimationControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::AnimationControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x000000000021C92C string=0x000000000021C930 "a"
 *   insn=0x000000000021C930 string=0x000000000021C93C "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::AnimationControllerComponent::ValueForBindedProperty(
        Caver::AnimationControllerComponent *this,
        int a2)
{
  unsigned __int8 *v2; // x0

  v2 = (unsigned __int8 *)this - 16;
  if ( a2 == 2 )
    return Caver::BindingValue::ValueWithBool((Caver::BindingValue *)v2[168], 2);
  else
    return Caver::Component::ValueForBindedProperty((Caver::Component *)v2, a2);
}

