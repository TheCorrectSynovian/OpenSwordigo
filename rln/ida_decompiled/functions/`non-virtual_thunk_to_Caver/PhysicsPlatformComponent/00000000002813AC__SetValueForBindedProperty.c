/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002813AC
 * Mangled: _ZThn16_N5Caver24PhysicsPlatformComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::PhysicsPlatformComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 19
 *   insn=0x00000000002813B0 string=0x00000000002813B4 "h"
 *   insn=0x00000000002813B4 string=0x00000000002813B8 ")"
 *   insn=0x00000000002813BC string=0x00000000002813C0 ")1%"
 *   insn=0x00000000002813C0 string=0x00000000002813C4 "(y"
 *   insn=0x00000000002813C4 string=0x00000000002813C8 ""
 *   insn=0x00000000002813CC string=0x00000000002813D0 "H"
 *   insn=0x00000000002813CC string=0x00000000002813E4 "H"
 *   insn=0x00000000002813CC string=0x00000000002813F4 "H"
 *   insn=0x00000000002813CC string=0x0000000000281404 "H"
 *   insn=0x00000000002813D0 string=0x00000000002813D4 ""
 *   insn=0x00000000002813D4 string=0x00000000002813D8 ""
 *   insn=0x00000000002813E0 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002813E4 string=0x00000000002813E8 ""
 *   insn=0x00000000002813E8 string=0x00000000002813EC ""
 *   insn=0x00000000002813F4 string=0x00000000002813F8 ""
 *   insn=0x00000000002813F8 string=0x00000000002813FC ""
 *   insn=0x0000000000281404 string=0x0000000000281408 "\t"
 *   insn=0x0000000000281408 string=0x000000000028140C "!"
 *   insn=0x0000000000281408 string=0x0000000000584004 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall `non-virtual thunk to'Caver::PhysicsPlatformComponent::SetValueForBindedProperty(
        Caver::PhysicsPlatformComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x0
  float result; // s0

  v3 = (char *)this - 16;
  switch ( a2 )
  {
    case 0:
      *((_DWORD *)v3 + 37) = **((_DWORD **)a3 + 1);
      break;
    case 1:
      *((_DWORD *)v3 + 38) = **((_DWORD **)a3 + 1);
      break;
    case 2:
      *((_DWORD *)v3 + 39) = **((_DWORD **)a3 + 1);
      break;
    case 3:
      result = **((float **)a3 + 1) * 0.017453;
      *((float *)v3 + 40) = result;
      break;
    default:
      Caver::Component::SetValueForBindedProperty((Caver::Component *)v3, a2, a3);
      break;
  }
  return result;
}

