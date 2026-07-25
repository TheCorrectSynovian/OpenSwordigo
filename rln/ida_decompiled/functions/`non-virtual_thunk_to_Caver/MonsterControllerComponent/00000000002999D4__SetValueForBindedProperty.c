/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002999D4
 * Mangled: _ZThn16_N5Caver26MonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 5
 *   insn=0x00000000002999DC string=0x00000000002999E0 "H"
 *   insn=0x00000000002999DC string=0x00000000002999F0 "L~"
 *   insn=0x00000000002999E0 string=0x00000000002999E4 ""
 *   insn=0x00000000002999E4 string=0x00000000002999E8 ""
 *   insn=0x00000000002999F0 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall `non-virtual thunk to'Caver::MonsterControllerComponent::SetValueForBindedProperty(
        Caver::MonsterControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::Component *result; // x0

  result = (Caver::MonsterControllerComponent *)((char *)this - 16);
  if ( a2 != 3 )
    return (Caver::Component *)Caver::Component::SetValueForBindedProperty(result, a2, a3);
  *((_DWORD *)result + 50) = **((_DWORD **)a3 + 1);
  return result;
}

