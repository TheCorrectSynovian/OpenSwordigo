/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CD0A8
 * Mangled: _ZNK5Caver20WeaponTrailComponent5CloneEv
 * Demangled: Caver::WeaponTrailComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002CCF78  Caver::WeaponTrailComponent::~WeaponTrailComponent()
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA740  Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x00000000002CD1B0  Caver::WeaponTrailComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000002CD0B8 string=0x00000000002CD0BC "U"
 *   insn=0x00000000002CD0CC string=0x00000000002CD0D0 "D"
 *   insn=0x00000000002CD0D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CD0D8 string=0x00000000001FA740 "0'"
 *   insn=0x00000000002CD0E0 string=0x00000000002CD0E4 "`"
 *   insn=0x00000000002CD0E4 string=0x00000000002CD0E8 "h""
 *   insn=0x00000000002CD0E8 string=0x00000000002CD0EC "ou\n"
 *   insn=0x00000000002CD110 string=0x00000000002CD114 "d"
 *   insn=0x00000000002CD118 string=0x00000000002CD11C "!"
 *   insn=0x00000000002CD11C string=0x00000000002CD120 "B"
 *   insn=0x00000000002CD120 string=0x00000000002CD124 "c"
 *   insn=0x00000000002CD128 string=0x00000000002CD12C "!"
 *   insn=0x00000000002CD12C string=0x00000000002CD130 "B"
 *   insn=0x00000000002CD130 string=0x00000000002CD134 "c"
 *   insn=0x00000000002CD138 string=0x00000000002CD13C "`"
 *   insn=0x00000000002CD13C string=0x00000000002CD140 " %"
 *   insn=0x00000000002CD140 string=0x00000000002CD144 "f"
 *   insn=0x00000000002CD14C string=0x00000000002CD150 "b"
 *   insn=0x00000000002CD150 string=0x00000000002CD154 "E&"
 *   insn=0x00000000002CD154 string=0x00000000002CD158 "a!"
 *   insn=0x00000000002CD168 string=0x00000000002CD16C "hz"
 *   insn=0x00000000002CD17C string=0x00000000002CD198 "N"
 *   insn=0x00000000002CD198 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CD1A0 string=0x00000000002CD1A4 "C"
 *   insn=0x00000000002CD1A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrailComponent::Clone(Caver::WeaponTrailComponent *this)
{
  __int64 v2; // x19
  unsigned int v3; // s0
  unsigned int v4; // s1
  unsigned int v5; // s2
  unsigned int v6; // s3
  char v8; // [xsp+8h] [xbp-48h]
  char v9; // [xsp+9h] [xbp-47h]
  char v10; // [xsp+Ah] [xbp-46h]
  char v11; // [xsp+Bh] [xbp-45h]
  int v12; // [xsp+24h] [xbp-2Ch]

  _ReadStatusReg(TPIDR_EL0);
  v2 = operator new(0xD0u);
  Caver::WeaponTrailComponent::WeaponTrailComponent((Caver::WeaponTrailComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  Caver::Color::FromFloatColor();
  LOBYTE(v3) = v8;
  LOBYTE(v4) = v9;
  LOBYTE(v5) = v10;
  LOBYTE(v6) = v11;
  *(float *)(v2 + 176) = (float)v3 / 255.0;
  *(float *)(v2 + 180) = (float)v4 / 255.0;
  *(float *)(v2 + 184) = (float)v5 / 255.0;
  *(float *)(v2 + 188) = (float)v6 / 255.0;
  Caver::Color::FromFloatColor();
  *(_DWORD *)(v2 + 120) = v12;
  return v2;
}

