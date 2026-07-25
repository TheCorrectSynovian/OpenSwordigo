/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025B4E8
 * Mangled: _ZN5Caver23CharControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::CharControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 20
 *   insn=0x000000000025B4EC string=0x000000000025B4F0 "H"
 *   insn=0x000000000025B4F0 string=0x000000000025B4F4 "i"
 *   insn=0x000000000025B4F4 string=0x000000000025B4FC "(y"
 *   insn=0x000000000025B4FC string=0x000000000025B500 ""
 *   insn=0x000000000025B504 string=0x000000000025B508 "H"
 *   insn=0x000000000025B504 string=0x000000000025B51C "H"
 *   insn=0x000000000025B504 string=0x000000000025B52C "H"
 *   insn=0x000000000025B504 string=0x000000000025B53C "H"
 *   insn=0x000000000025B504 string=0x000000000025B54C "H"
 *   insn=0x000000000025B508 string=0x000000000025B50C ""
 *   insn=0x000000000025B50C string=0x000000000025B510 "l"
 *   insn=0x000000000025B518 string=0x00000000001F9320 "0'"
 *   insn=0x000000000025B51C string=0x000000000025B520 ""
 *   insn=0x000000000025B520 string=0x000000000025B524 "h"
 *   insn=0x000000000025B52C string=0x000000000025B530 ""
 *   insn=0x000000000025B530 string=0x000000000025B534 "t"
 *   insn=0x000000000025B53C string=0x000000000025B540 ""
 *   insn=0x000000000025B540 string=0x000000000025B544 ""
 *   insn=0x000000000025B54C string=0x000000000025B550 ""
 *   insn=0x000000000025B550 string=0x000000000025B554 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall Caver::CharControllerComponent::SetValueForBindedProperty(
        Caver::Component *this,
        int a2,
        const Caver::BindingValue *a3)
{
  switch ( a2 )
  {
    case 17:
      *((_DWORD *)this + 155) = **((_DWORD **)a3 + 1);
      break;
    case 18:
      *((_DWORD *)this + 154) = **((_DWORD **)a3 + 1);
      break;
    case 19:
      *((_DWORD *)this + 157) = **((_DWORD **)a3 + 1);
      break;
    case 20:
      *((_DWORD *)this + 160) = **((_DWORD **)a3 + 1);
      break;
    case 21:
      *((_DWORD *)this + 161) = **((_DWORD **)a3 + 1);
      break;
    default:
      this = (Caver::Component *)Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
  return this;
}

