/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F4F30
 * Mangled: sub_4F4F30
 * Demangled: sub_4F4F30
 *
 * Callers: 1
 *   0x00000000004ECC2C  sub_4ECC2C
 *
 * Callees: 7
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F5064  sub_4F5064
 *   0x00000000004F8758  sub_4F8758
 *
 * Referenced strings: 35
 *   insn=0x00000000004F4F40 string=0x00000000004F4F44 "U"
 *   insn=0x00000000004F4F54 string=0x00000000004F4F58 "i"
 *   insn=0x00000000004F4F58 string=0x00000000004F4F5C "?"
 *   insn=0x00000000004F4F5C string=0x00000000004F4F60 "`"
 *   insn=0x00000000004F4F60 string=0x00000000004F4F64 "?"
 *   insn=0x00000000004F4F60 string=0x00000000004F4F6C "t"
 *   insn=0x00000000004F4F64 string=0x00000000004F4F68 "a"
 *   insn=0x00000000004F4F68 string=0x00000000004F4F74 "*"
 *   insn=0x00000000004F4F70 string=0x00000000004F4F84 ")"
 *   insn=0x00000000004F4F74 string=0x00000000004F4F7C "?m"
 *   insn=0x00000000004F4F74 string=0x000000000059A384 "binary string"
 *   insn=0x00000000004F4F7C string=0x00000000004F4F80 "T"
 *   insn=0x00000000004F4F84 string=0x00000000004F4F88 " "
 *   insn=0x00000000004F4F84 string=0x000000000059A368 "Q"
 *   insn=0x00000000004F4F88 string=0x00000000004F4F8C "i"
 *   insn=0x00000000004F4FB0 string=0x00000000004F4FB4 "`"
 *   insn=0x00000000004F4FB4 string=0x00000000004F4FB8 "!"
 *   insn=0x00000000004F4FB8 string=0x00000000004F4FBC "#"
 *   insn=0x00000000004F4FB8 string=0x000000000059A3AF "%s: %s in precompiled chunk"
 *   insn=0x00000000004F4FBC string=0x00000000004F4FC0 "!"
 *   insn=0x00000000004F4FBC string=0x000000000059A3A0 "unexpected end"
 *   insn=0x00000000004F4FC0 string=0x00000000004F4FC4 "c"
 *   insn=0x00000000004F4FE8 string=0x00000000004F4FEC "i"
 *   insn=0x00000000004F4FEC string=0x00000000004F4FF0 "`"
 *   insn=0x00000000004F4FEC string=0x00000000001F5190 "P'"
 *   insn=0x00000000004F4FF0 string=0x00000000004F501C "!"
 *   insn=0x00000000004F4FF8 string=0x00000000004F4FFC "!"
 *   insn=0x00000000004F4FFC string=0x00000000004F5000 "#"
 *   insn=0x00000000004F5000 string=0x00000000004F5004 "!"
 *   insn=0x00000000004F5000 string=0x000000000059A395 "bad header"
 *   insn=0x00000000004F5004 string=0x00000000004F5008 "cT"
 *   insn=0x00000000004F501C string=0x000000000059A392 "=?"
 *   insn=0x00000000004F5028 string=0x00000000004F502C "P"
 *   insn=0x00000000004F5034 string=0x00000000004F5038 ""
 *   insn=0x00000000004F5060 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F4F30(_QWORD *a1, _QWORD *a2, _QWORD *a3, const char *a4)
{
  int v5; // w9
  const char *v6; // x20
  __int64 v7; // x0
  _QWORD *v9[3]; // [xsp+0h] [xbp-60h] BYREF
  const char *v10; // [xsp+18h] [xbp-48h]
  _BYTE v11[12]; // [xsp+20h] [xbp-40h] BYREF
  int v12; // [xsp+2Ch] [xbp-34h] BYREF
  __int64 v13; // [xsp+30h] [xbp-30h]
  __int64 v14; // [xsp+38h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(unsigned __int8 *)a4;
  if ( v5 == 64 || v5 == 61 )
  {
    v6 = a4 + 1;
  }
  else if ( v5 == 27 )
  {
    v6 = "binary string";
  }
  else
  {
    v6 = a4;
  }
  v9[2] = a3;
  v10 = v6;
  v9[0] = a1;
  v9[1] = a2;
  v12 = 1635077147;
  v13 = 0x8040804010051LL;
  if ( sub_4F8758((int)a2, v11) )
  {
    sub_4EF3D4(a1, "%s: %s in precompiled chunk", v6, "unexpected end");
    sub_4EB814((__int64)v9[0], 3);
  }
  if ( memcmp(&v12, v11, 0xCu) )
  {
    sub_4EF3D4(v9[0], "%s: %s in precompiled chunk", v10, "bad header");
    sub_4EB814((__int64)v9[0], 3);
  }
  v7 = sub_4F356C((__int64)a1, "=?", 2u);
  return sub_4F5064(v9, v7);
}

