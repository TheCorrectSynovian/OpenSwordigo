/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C90C4
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent9KnockBackEv
 * Demangled: Caver::SwingableWeaponControllerComponent::KnockBack(void)
 *
 * Callers: 1
 *   0x0000000000202870  Caver::SwingableWeaponControllerComponent::KnockBack(void)
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000002C90C8 string=0x00000000002C90CC ""
 *   insn=0x00000000002C90CC string=0x00000000002C90D0 "\ti@"
 *   insn=0x00000000002C90D0 string=0x00000000002C90D4 " "
 *   insn=0x00000000002C90D4 string=0x00000000002C90D8 "\n"
 *   insn=0x00000000002C90D8 string=0x00000000002C90DC "\n"
 *   insn=0x00000000002C90DC string=0x00000000002C90E0 "A"
 *   insn=0x00000000002C90E4 string=0x00000000002C90E8 "m"
 *   insn=0x00000000002C90E8 string=0x00000000002C9114 "\ti"
 *   insn=0x00000000002C90F0 string=0x00000000002C90F4 ""
 *   insn=0x00000000002C90F4 string=0x00000000002C9110 "\t"
 *   insn=0x00000000002C90F8 string=0x00000000002C90FC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponControllerComponent::KnockBack(__int64 this)
{
  int v1; // w10
  __int64 v2; // x8
  float v3; // w9
  float v4; // s0

  v1 = *(_DWORD *)(this + 168);
  if ( v1 )
  {
    v2 = *(_QWORD *)(this + 40);
    v3 = *(float *)(v2 + 104);
    if ( v1 < 0 )
    {
      if ( v3 < 150.0 )
      {
        v4 = fminf(v3 + 150.0, 150.0);
        goto LABEL_7;
      }
    }
    else if ( v3 > -150.0 )
    {
      v4 = fmaxf(v3 + -150.0, -150.0);
LABEL_7:
      v3 = v4;
    }
    *(float *)(v2 + 104) = v3;
  }
  return this;
}

