/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000524C20
 * Mangled: sub_524C20
 * Demangled: sub_524C20
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005230E4  sub_5230E4
 *   0x000000000052D354  sub_52D354
 *   0x000000000053B7DC  sub_53B7DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x0000000000524C3C string=0x0000000000524C40 "!"
 *   insn=0x0000000000524C44 string=0x0000000000524C48 "!@"
 *   insn=0x0000000000524C4C string=0x000000000053B7DC "!"
 *   insn=0x0000000000524C70 string=0x0000000000524C74 "`\n@"
 *   insn=0x0000000000524C74 string=0x0000000000524C78 "a"
 *   insn=0x0000000000524C7C string=0x0000000000524C80 "b"
 *   insn=0x0000000000524C80 string=0x0000000000524CCC "a"
 *   insn=0x0000000000524C8C string=0x0000000000524C90 " h`8"
 *   insn=0x0000000000524C94 string=0x0000000000524CAC "`\n@"
 *   insn=0x0000000000524CAC string=0x0000000000524CB0 "a"
 *   insn=0x0000000000524CB8 string=0x0000000000524D14 "a"
 *   insn=0x0000000000524CBC string=0x0000000000524CC0 "`\n"
 *   insn=0x0000000000524CD0 string=0x0000000000524CD4 "!$@"
 *   insn=0x0000000000524CD4 string=0x0000000000524CD8 " "
 *   insn=0x0000000000524CDC string=0x0000000000524CE0 "A"
 *   insn=0x0000000000524CF0 string=0x0000000000524CF4 "! @"
 *   insn=0x0000000000524CF4 string=0x0000000000524CF8 "!"
 *   insn=0x0000000000524D18 string=0x0000000000524D1C "!(@"
 *   insn=0x0000000000524D1C string=0x0000000000524D20 " "
 *   insn=0x0000000000524D28 string=0x0000000000524D2C "`\n@"
 *   insn=0x0000000000524D2C string=0x0000000000524D30 "a"
 *   insn=0x0000000000524D74 string=0x0000000000524D78 "`"
 *   insn=0x0000000000524D7C string=0x0000000000524D80 "`"
 *   insn=0x0000000000524D8C string=0x0000000000524D90 "?"
 *   insn=0x0000000000524D94 string=0x0000000000524D98 """
 *   insn=0x0000000000524DB4 string=0x0000000000524DB8 "!(@"
 *   insn=0x0000000000524DB8 string=0x0000000000524DBC " "
 *   insn=0x0000000000524DC8 string=0x0000000000524DCC "`"
 *   insn=0x0000000000524DD0 string=0x0000000000524DD4 "a"
 *   insn=0x0000000000524DD8 string=0x0000000000524DDC "! @"
 *   insn=0x0000000000524DDC string=0x0000000000524DE0 "!"
 *   insn=0x0000000000524DF8 string=0x0000000000524DFC "a"
 *   insn=0x0000000000524E00 string=0x0000000000524E04 "`"
 *   insn=0x0000000000524E00 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000524E08 string=0x0000000000524E0C "s"
 *   insn=0x0000000000524E0C string=0x0000000000524E10 "`"@"
 *   insn=0x0000000000524E10 string=0x0000000000524E14 "a"
 *   insn=0x0000000000524E18 string=0x0000000000524E1C "`""
 *   insn=0x0000000000524E1C string=0x0000000000524E20 "!"
 *   insn=0x0000000000524E20 string=0x0000000000524E24 "Sw"
 *   insn=0x0000000000524E20 string=0x0000000000524E64 "Cw"
 *   insn=0x0000000000524E28 string=0x0000000000524E2C "`"
 *   insn=0x0000000000524E30 string=0x0000000000524E34 "`"
 *   insn=0x0000000000524E3C string=0x0000000000524E40 "!"
 *   insn=0x0000000000524E48 string=0x0000000000524E68 "Bw"
 *   insn=0x0000000000524E4C string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_524C20(_QWORD *a1)
{
  __int64 v2; // x21
  _QWORD *v3; // x19
  _BYTE *v4; // x0
  unsigned __int64 v6; // x0
  unsigned __int64 v7; // x1
  char v8; // [xsp+78h] [xbp+38h] BYREF

  sub_53B7DC(&v8, (char *)a1 + *(_QWORD *)(*a1 - 24LL) + 208);
  v2 = sub_52D354(&v8);
  sub_53C0C8(&v8);
  v3 = *(_QWORD **)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 232);
  v4 = (_BYTE *)v3[2];
  if ( (unsigned __int64)v4 >= v3[3] )
    goto LABEL_8;
LABEL_2:
  LOBYTE(v4) = *v4;
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v2 + 48) + (unsigned __int8)v4) & 8) == 0 )
      return a1;
    v6 = v3[2];
    v7 = v3[3];
    if ( v6 >= v7 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v3 + 80LL))(v3) == -1 )
        break;
      v4 = (_BYTE *)v3[2];
      v7 = v3[3];
    }
    else
    {
      v4 = (_BYTE *)(v6 + 1);
      v3[2] = v4;
    }
    if ( (unsigned __int64)v4 < v7 )
      goto LABEL_2;
LABEL_8:
    LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 72LL))(v3);
  }
  while ( (_DWORD)v4 != -1 );
  sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 2);
  return a1;
}

