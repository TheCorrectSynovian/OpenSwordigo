/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CBAB8
 * Mangled: _ZN5Caver19WeaponGlowComponent7SetFaceEiiii
 * Demangled: Caver::WeaponGlowComponent::SetFace(int,int,int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000002CBAB8 string=0x00000000002CBABC ")|@"
 *   insn=0x00000000002CBABC string=0x00000000002CBAC0 ")"
 *   insn=0x00000000002CBAC4 string=0x00000000002CBAC8 "d@"
 *   insn=0x00000000002CBAC8 string=0x00000000002CBACC ")}@"
 *   insn=0x00000000002CBACC string=0x00000000002CBAD0 ""
 *   insn=0x00000000002CBAD4 string=0x00000000002CBAD8 "d@"
 *   insn=0x00000000002CBAD8 string=0x00000000002CBADC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponGlowComponent::SetFace(__int64 this, int a2, char a3, char a4, char a5)
{
  __int64 v5; // x9

  v5 = 3LL * a2;
  *(_BYTE *)(*(_QWORD *)(this + 200) + v5) = a3;
  *(_BYTE *)(*(_QWORD *)(this + 200) + (int)v5 + 1LL) = a4;
  *(_BYTE *)(*(_QWORD *)(this + 200) + (int)v5 + 2LL) = a5;
  return this;
}

