/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028133C
 * Mangled: _ZN5Caver24PhysicsPlatformComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::PhysicsPlatformComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 20
 *   insn=0x000000000028133C string=0x0000000000281340 "h"
 *   insn=0x0000000000281340 string=0x0000000000281344 ")"
 *   insn=0x0000000000281344 string=0x000000000058893C " "
 *   insn=0x0000000000281348 string=0x000000000028134C ")"
 *   insn=0x000000000028134C string=0x0000000000281350 "(y"
 *   insn=0x0000000000281350 string=0x0000000000281354 ""
 *   insn=0x0000000000281358 string=0x000000000028135C "H"
 *   insn=0x0000000000281358 string=0x0000000000281370 "H"
 *   insn=0x0000000000281358 string=0x0000000000281380 "H"
 *   insn=0x0000000000281358 string=0x0000000000281390 "H"
 *   insn=0x000000000028135C string=0x0000000000281360 ""
 *   insn=0x0000000000281360 string=0x0000000000281364 ""
 *   insn=0x000000000028136C string=0x00000000001F9320 "0'"
 *   insn=0x0000000000281370 string=0x0000000000281374 ""
 *   insn=0x0000000000281374 string=0x0000000000281378 ""
 *   insn=0x0000000000281380 string=0x0000000000281384 ""
 *   insn=0x0000000000281384 string=0x0000000000281388 ""
 *   insn=0x0000000000281390 string=0x0000000000281394 "\t"
 *   insn=0x0000000000281394 string=0x0000000000281398 "!"
 *   insn=0x0000000000281394 string=0x0000000000584004 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::PhysicsPlatformComponent::SetValueForBindedProperty(
        Caver::PhysicsPlatformComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  float result; // s0

  switch ( a2 )
  {
    case 0:
      *((_DWORD *)this + 37) = **((_DWORD **)a3 + 1);
      break;
    case 1:
      *((_DWORD *)this + 38) = **((_DWORD **)a3 + 1);
      break;
    case 2:
      *((_DWORD *)this + 39) = **((_DWORD **)a3 + 1);
      break;
    case 3:
      result = **((float **)a3 + 1) * 0.017453;
      *((float *)this + 40) = result;
      break;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
  return result;
}

