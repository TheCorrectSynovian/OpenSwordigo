/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032ADE8
 * Mangled: _ZN5Caver5Proto34SwingableWeaponControllerComponent5ClearEv
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 10
 *   insn=0x000000000032ADF4 string=0x000000000032ADF8 "h"
 *   insn=0x000000000032ADF8 string=0x000000000032ADFC "("
 *   insn=0x000000000032AE04 string=0x000000000032AE34 "h"
 *   insn=0x000000000032AE08 string=0x000000000032AE0C "`\n@"
 *   insn=0x000000000032AE0C string=0x000000000032AE10 ")\tB"
 *   insn=0x000000000032AE18 string=0x000000000032AE1C ""
 *   insn=0x000000000032AE2C string=0x000000000032AE30 "h"@"
 *   insn=0x000000000032AE38 string=0x000000000032AE3C "`"
 *   insn=0x000000000032AE3C string=0x000000000032AE40 "qD"
 *   insn=0x000000000032AE48 string=0x000000000032AE4C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponControllerComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 32);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::SwingableWeaponControllerComponent::_default_controlling_bone_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 32);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::SwingableWeaponControllerComponent::_default_weapon_template_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
  }
  *(_DWORD *)(v1 + 32) = 0;
  return this;
}

