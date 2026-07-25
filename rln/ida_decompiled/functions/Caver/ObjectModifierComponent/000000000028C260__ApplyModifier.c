/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C260
 * Mangled: _ZN5Caver23ObjectModifierComponent13ApplyModifierENS_18ObjectModifierTypeEff
 * Demangled: Caver::ObjectModifierComponent::ApplyModifier(Caver::ObjectModifierType,float,float)
 *
 * Callers: 1
 *   0x00000000001F6850  Caver::ObjectModifierComponent::ApplyModifier(Caver::ObjectModifierType,float,float)
 *
 * Callees: 3
 *   0x00000000001F5FA0  Caver::EntityInfoComponent::freezable(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *
 * Referenced strings: 10
 *   insn=0x000000000028C280 string=0x000000000028C284 "`"
 *   insn=0x000000000028C284 string=0x000000000028C288 "!"
 *   insn=0x000000000028C288 string=0x000000000028C28C "("
 *   insn=0x000000000028C298 string=0x000000000028C29C "`"
 *   insn=0x000000000028C29C string=0x000000000028C2A0 "@"
 *   insn=0x000000000028C2A0 string=0x000000000028C2A4 "`"
 *   insn=0x000000000028C2A0 string=0x00000000001F5FA0 "P'"
 *   insn=0x000000000028C2AC string=0x000000000028C2B0 "t~"
 *   insn=0x000000000028C2B0 string=0x000000000028C2B4 "h"
 *   insn=0x000000000028C2B8 string=0x000000000028C2BC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectModifierComponent::ApplyModifier(__int64 a1, int a2, float a3, float a4)
{
  __int64 result; // x0

  result = Caver::SceneObject::ComponentWithInterface(
             *(Caver::SceneObject **)(a1 + 40),
             (__int64)Caver::EntityInfoComponent::Interface);
  if ( a2 != 1
    || !result
    || (result = Caver::EntityInfoComponent::freezable((Caver::EntityInfoComponent *)result), (result & 1) != 0) )
  {
    *(_DWORD *)(a1 + 112) = a2;
    *(_DWORD *)(a1 + 116) = 0;
    *(float *)(a1 + 120) = a4;
    *(float *)(a1 + 124) = a3;
    if ( a2 == 1 )
      *(float32x2_t *)(*(_QWORD *)(a1 + 40) + 104LL) = vmul_n_f32(*(float32x2_t *)(*(_QWORD *)(a1 + 40) + 104LL), a3);
  }
  return result;
}

