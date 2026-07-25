/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032AD9C
 * Mangled: _ZNK5Caver5Proto34SwingableWeaponControllerComponent3NewEv
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x000000000032ADA8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032ADAC string=0x000000000032ADB0 ""
 *   insn=0x000000000032ADB8 string=0x000000000032ADBC ")\tB"
 *   insn=0x000000000032ADC0 string=0x000000000032ADC4 "JqD"
 *   insn=0x000000000032ADC4 string=0x000000000032ADC8 "A"
 *   insn=0x000000000032ADC8 string=0x000000000032ADCC " "
 *   insn=0x000000000032ADCC string=0x000000000032ADD0 ""
 *   insn=0x000000000032ADD0 string=0x000000000032ADD4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::SwingableWeaponControllerComponent::New(
        Caver::Proto::SwingableWeaponControllerComponent *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x28u);
  v1->n128_u64[1] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::SwingableWeaponControllerComponent::_default_controlling_bone_name_;
  v1->n128_u64[0] = (unsigned __int64)off_6C9180;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::SwingableWeaponControllerComponent::_default_weapon_template_name_;
  v1[1] = result;
  v1[2].n128_u32[0] = 0;
  return result;
}

