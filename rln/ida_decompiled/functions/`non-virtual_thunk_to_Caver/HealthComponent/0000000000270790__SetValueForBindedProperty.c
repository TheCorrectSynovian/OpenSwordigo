/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000270790
 * Mangled: _ZThn16_N5Caver15HealthComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::HealthComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 17
 *   insn=0x0000000000270794 string=0x0000000000270798 "h"
 *   insn=0x00000000002707A0 string=0x00000000002707A4 ")"
 *   insn=0x00000000002707A4 string=0x00000000002707A8 "(y"
 *   insn=0x00000000002707A8 string=0x00000000002707AC ""
 *   insn=0x00000000002707B0 string=0x00000000002707B4 "H"
 *   insn=0x00000000002707B0 string=0x00000000002707C8 "H"
 *   insn=0x00000000002707B0 string=0x00000000002707D8 "H"
 *   insn=0x00000000002707B0 string=0x00000000002707E8 "H"
 *   insn=0x00000000002707B4 string=0x00000000002707B8 ""
 *   insn=0x00000000002707B8 string=0x00000000002707BC ""
 *   insn=0x00000000002707C4 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002707C8 string=0x00000000002707CC ""
 *   insn=0x00000000002707CC string=0x00000000002707D0 ""
 *   insn=0x00000000002707D8 string=0x00000000002707DC ""
 *   insn=0x00000000002707DC string=0x00000000002707E0 ""
 *   insn=0x00000000002707E8 string=0x00000000002707EC ""
 *   insn=0x00000000002707EC string=0x00000000002707F0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall `non-virtual thunk to'Caver::HealthComponent::SetValueForBindedProperty(
        Caver::HealthComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::Component *result; // x0
  int v4; // w8

  result = (Caver::HealthComponent *)((char *)this - 16);
  switch ( a2 )
  {
    case 0:
      v4 = **((_DWORD **)a3 + 1);
      *((_DWORD *)result + 31) = v4;
      *((_DWORD *)result + 32) = v4;
      break;
    case 1:
      *((_DWORD *)result + 34) = **((_DWORD **)a3 + 1);
      break;
    case 2:
      *((_DWORD *)result + 35) = **((_DWORD **)a3 + 1);
      break;
    case 3:
      *((_DWORD *)result + 36) = **((_DWORD **)a3 + 1);
      break;
    default:
      result = (Caver::Component *)Caver::Component::SetValueForBindedProperty(result, a2, a3);
      break;
  }
  return result;
}

