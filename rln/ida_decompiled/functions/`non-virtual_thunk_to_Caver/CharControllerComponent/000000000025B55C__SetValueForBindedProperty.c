/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025B55C
 * Mangled: _ZThn16_N5Caver23CharControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::CharControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 22
 *   insn=0x000000000025B564 string=0x000000000025B568 "H"
 *   insn=0x000000000025B568 string=0x000000000025B56C "i"
 *   insn=0x000000000025B568 string=0x000000000025B590 "dw"
 *   insn=0x000000000025B56C string=0x000000000025B574 "(y"
 *   insn=0x000000000025B56C string=0x0000000000587958 "(<"
 *   insn=0x000000000025B574 string=0x000000000025B578 ""
 *   insn=0x000000000025B57C string=0x000000000025B580 "H"
 *   insn=0x000000000025B57C string=0x000000000025B594 "H"
 *   insn=0x000000000025B57C string=0x000000000025B5A4 "H"
 *   insn=0x000000000025B57C string=0x000000000025B5B4 "H"
 *   insn=0x000000000025B57C string=0x000000000025B5C4 "H"
 *   insn=0x000000000025B580 string=0x000000000025B584 ""
 *   insn=0x000000000025B584 string=0x000000000025B588 "l"
 *   insn=0x000000000025B590 string=0x00000000001F9320 "0'"
 *   insn=0x000000000025B594 string=0x000000000025B598 ""
 *   insn=0x000000000025B598 string=0x000000000025B59C "h"
 *   insn=0x000000000025B5A4 string=0x000000000025B5A8 ""
 *   insn=0x000000000025B5A8 string=0x000000000025B5AC "t"
 *   insn=0x000000000025B5B4 string=0x000000000025B5B8 ""
 *   insn=0x000000000025B5B8 string=0x000000000025B5BC ""
 *   insn=0x000000000025B5C4 string=0x000000000025B5C8 ""
 *   insn=0x000000000025B5C8 string=0x000000000025B5CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall `non-virtual thunk to'Caver::CharControllerComponent::SetValueForBindedProperty(
        Caver::CharControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::Component *result; // x0

  result = (Caver::CharControllerComponent *)((char *)this - 16);
  switch ( a2 )
  {
    case 17:
      *((_DWORD *)result + 155) = **((_DWORD **)a3 + 1);
      break;
    case 18:
      *((_DWORD *)result + 154) = **((_DWORD **)a3 + 1);
      break;
    case 19:
      *((_DWORD *)result + 157) = **((_DWORD **)a3 + 1);
      break;
    case 20:
      *((_DWORD *)result + 160) = **((_DWORD **)a3 + 1);
      break;
    case 21:
      *((_DWORD *)result + 161) = **((_DWORD **)a3 + 1);
      break;
    default:
      result = (Caver::Component *)Caver::Component::SetValueForBindedProperty(result, a2, a3);
      break;
  }
  return result;
}

