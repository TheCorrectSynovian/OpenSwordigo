/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026B40C
 * Mangled: _ZN5Caver25EntityControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::EntityControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 17
 *   insn=0x000000000026B410 string=0x000000000026B414 "H"
 *   insn=0x000000000026B418 string=0x000000000026B420 "(y"
 *   insn=0x000000000026B418 string=0x0000000000587FF8 "44"
 *   insn=0x000000000026B420 string=0x000000000026B424 ""
 *   insn=0x000000000026B428 string=0x000000000026B42C "H"
 *   insn=0x000000000026B428 string=0x000000000026B440 "H"
 *   insn=0x000000000026B428 string=0x000000000026B450 "H"
 *   insn=0x000000000026B428 string=0x000000000026B460 "H"
 *   insn=0x000000000026B42C string=0x000000000026B430 ""
 *   insn=0x000000000026B430 string=0x000000000026B434 ""
 *   insn=0x000000000026B43C string=0x00000000001F9320 "0'"
 *   insn=0x000000000026B440 string=0x000000000026B444 ""
 *   insn=0x000000000026B444 string=0x000000000026B448 ""
 *   insn=0x000000000026B450 string=0x000000000026B454 ""
 *   insn=0x000000000026B454 string=0x000000000026B458 ""
 *   insn=0x000000000026B460 string=0x000000000026B464 ""
 *   insn=0x000000000026B464 string=0x000000000026B468 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall Caver::EntityControllerComponent::SetValueForBindedProperty(
        Caver::Component *this,
        int a2,
        const Caver::BindingValue *a3)
{
  switch ( a2 )
  {
    case 3:
      *((_DWORD *)this + 56) = **((_DWORD **)a3 + 1);
      break;
    case 4:
      *((_DWORD *)this + 57) = **((_DWORD **)a3 + 1);
      break;
    case 5:
      *((_DWORD *)this + 58) = **((_DWORD **)a3 + 1);
      break;
    case 6:
      *((_DWORD *)this + 62) = **((_DWORD **)a3 + 1);
      break;
    default:
      this = (Caver::Component *)Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
  return this;
}

