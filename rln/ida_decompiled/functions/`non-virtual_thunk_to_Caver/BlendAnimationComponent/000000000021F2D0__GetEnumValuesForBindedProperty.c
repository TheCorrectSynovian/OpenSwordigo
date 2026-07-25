/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F2D0
 * Mangled: _ZThn16_N5Caver23BlendAnimationComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::BlendAnimationComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5090  Caver::Component::GetEnumValuesForBindedOutlet(long,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000021D490  Caver::AnimationComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000021F2D4 string=0x000000000021F2D8 "!&"
 *   insn=0x000000000021F2D8 string=0x000000000021F2DC "!(F"
 *   insn=0x000000000021F2DC string=0x000000000021D490 " &"
 *   insn=0x000000000021F2E0 string=0x000000000021F2E4 "kW"
 *   insn=0x000000000021F2E4 string=0x00000000001F5090 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BlendAnimationComponent::GetEnumValuesForBindedProperty(
        __int64 a1,
        unsigned int a2)
{
  __int64 result; // x0

  if ( a2 <= 1 )
    return Caver::Component::GetEnumValuesForBindedOutlet();
  return result;
}

