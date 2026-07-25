/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C95C
 * Mangled: _ZThn16_N5Caver28AnimationControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::AnimationControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 5
 *   insn=0x000000000021C964 string=0x000000000021C968 "H"
 *   insn=0x000000000021C964 string=0x000000000021C978 "jr"
 *   insn=0x000000000021C968 string=0x000000000021C96C ""
 *   insn=0x000000000021C96C string=0x000000000021C970 ""
 *   insn=0x000000000021C978 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall `non-virtual thunk to'Caver::AnimationControllerComponent::SetValueForBindedProperty(
        Caver::AnimationControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::Component *result; // x0

  result = (Caver::AnimationControllerComponent *)((char *)this - 16);
  if ( a2 != 2 )
    return (Caver::Component *)Caver::Component::SetValueForBindedProperty(result, a2, a3);
  *((_BYTE *)result + 168) = **((_BYTE **)a3 + 1);
  return result;
}

