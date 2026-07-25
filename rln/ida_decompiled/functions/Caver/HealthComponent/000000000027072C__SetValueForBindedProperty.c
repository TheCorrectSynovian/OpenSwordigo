/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027072C
 * Mangled: _ZN5Caver15HealthComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::HealthComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 17
 *   insn=0x000000000027072C string=0x0000000000270730 "h"
 *   insn=0x0000000000270738 string=0x000000000027073C ")"
 *   insn=0x000000000027073C string=0x0000000000270740 "(y"
 *   insn=0x0000000000270740 string=0x0000000000270744 ""
 *   insn=0x0000000000270748 string=0x000000000027074C "H"
 *   insn=0x0000000000270748 string=0x0000000000270760 "H"
 *   insn=0x0000000000270748 string=0x0000000000270770 "H"
 *   insn=0x0000000000270748 string=0x0000000000270780 "H"
 *   insn=0x000000000027074C string=0x0000000000270750 ""
 *   insn=0x0000000000270750 string=0x0000000000270754 ""
 *   insn=0x000000000027075C string=0x00000000001F9320 "0'"
 *   insn=0x0000000000270760 string=0x0000000000270764 ""
 *   insn=0x0000000000270764 string=0x0000000000270768 ""
 *   insn=0x0000000000270770 string=0x0000000000270774 ""
 *   insn=0x0000000000270774 string=0x0000000000270778 ""
 *   insn=0x0000000000270780 string=0x0000000000270784 ""
 *   insn=0x0000000000270784 string=0x0000000000270788 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall Caver::HealthComponent::SetValueForBindedProperty(
        Caver::Component *this,
        int a2,
        const Caver::BindingValue *a3)
{
  int v3; // w8

  switch ( a2 )
  {
    case 0:
      v3 = **((_DWORD **)a3 + 1);
      *((_DWORD *)this + 31) = v3;
      *((_DWORD *)this + 32) = v3;
      break;
    case 1:
      *((_DWORD *)this + 34) = **((_DWORD **)a3 + 1);
      break;
    case 2:
      *((_DWORD *)this + 35) = **((_DWORD **)a3 + 1);
      break;
    case 3:
      *((_DWORD *)this + 36) = **((_DWORD **)a3 + 1);
      break;
    default:
      this = (Caver::Component *)Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
  return this;
}

