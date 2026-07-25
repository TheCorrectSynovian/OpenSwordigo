/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026B470
 * Mangled: _ZThn16_N5Caver25EntityControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::EntityControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 16
 *   insn=0x000000000026B478 string=0x000000000026B47C "H"
 *   insn=0x000000000026B480 string=0x000000000026B488 "(y"
 *   insn=0x000000000026B488 string=0x000000000026B48C ""
 *   insn=0x000000000026B490 string=0x000000000026B494 "H"
 *   insn=0x000000000026B490 string=0x000000000026B4A8 "H"
 *   insn=0x000000000026B490 string=0x000000000026B4B8 "H"
 *   insn=0x000000000026B490 string=0x000000000026B4C8 "H"
 *   insn=0x000000000026B494 string=0x000000000026B498 ""
 *   insn=0x000000000026B498 string=0x000000000026B49C ""
 *   insn=0x000000000026B4A4 string=0x00000000001F9320 "0'"
 *   insn=0x000000000026B4A8 string=0x000000000026B4AC ""
 *   insn=0x000000000026B4AC string=0x000000000026B4B0 ""
 *   insn=0x000000000026B4B8 string=0x000000000026B4BC ""
 *   insn=0x000000000026B4BC string=0x000000000026B4C0 ""
 *   insn=0x000000000026B4C8 string=0x000000000026B4CC ""
 *   insn=0x000000000026B4CC string=0x000000000026B4D0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall `non-virtual thunk to'Caver::EntityControllerComponent::SetValueForBindedProperty(
        Caver::EntityControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::Component *result; // x0

  result = (Caver::EntityControllerComponent *)((char *)this - 16);
  switch ( a2 )
  {
    case 3:
      *((_DWORD *)result + 56) = **((_DWORD **)a3 + 1);
      break;
    case 4:
      *((_DWORD *)result + 57) = **((_DWORD **)a3 + 1);
      break;
    case 5:
      *((_DWORD *)result + 58) = **((_DWORD **)a3 + 1);
      break;
    case 6:
      *((_DWORD *)result + 62) = **((_DWORD **)a3 + 1);
      break;
    default:
      result = (Caver::Component *)Caver::Component::SetValueForBindedProperty(result, a2, a3);
      break;
  }
  return result;
}

