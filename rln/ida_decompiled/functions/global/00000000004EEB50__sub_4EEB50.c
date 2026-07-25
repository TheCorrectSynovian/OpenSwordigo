/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EEB50
 * Mangled: sub_4EEB50
 * Demangled: sub_4EEB50
 *
 * Callers: 2
 *   0x00000000004EDD78  sub_4EDD78
 *   0x00000000004EE294  sub_4EE294
 *
 * Callees: 1
 *   0x00000000004EE364  sub_4EE364
 *
 * Referenced strings: 26
 *   insn=0x00000000004EEB5C string=0x00000000004EEB60 "ar@"
 *   insn=0x00000000004EEB64 string=0x00000000004EEB68 "($@9"
 *   insn=0x00000000004EEB64 string=0x00000000004EEB7C "av@"
 *   insn=0x00000000004EEB6C string=0x00000000004EEB70 "`"
 *   insn=0x00000000004EEB80 string=0x00000000004EEB84 "($@9"
 *   insn=0x00000000004EEB80 string=0x00000000004EEB98 "az@"
 *   insn=0x00000000004EEB88 string=0x00000000004EEB8C "`"
 *   insn=0x00000000004EEB9C string=0x00000000004EEBA0 "($@9"
 *   insn=0x00000000004EEB9C string=0x00000000004EEBB4 "a~@"
 *   insn=0x00000000004EEBA4 string=0x00000000004EEBA8 "`"
 *   insn=0x00000000004EEBB8 string=0x00000000004EEBBC "($@9"
 *   insn=0x00000000004EEBB8 string=0x00000000004EEBD0 "a"
 *   insn=0x00000000004EEBC0 string=0x00000000004EEBC4 "`"
 *   insn=0x00000000004EEBD4 string=0x00000000004EEBD8 "($@9"
 *   insn=0x00000000004EEBD4 string=0x00000000004EEBEC "a"
 *   insn=0x00000000004EEBDC string=0x00000000004EEBE0 "`"
 *   insn=0x00000000004EEBF0 string=0x00000000004EEBF4 "($@9"
 *   insn=0x00000000004EEBF0 string=0x00000000004EEC08 "a"
 *   insn=0x00000000004EEBF8 string=0x00000000004EEBFC "`"
 *   insn=0x00000000004EEC0C string=0x00000000004EEC10 "($@9"
 *   insn=0x00000000004EEC0C string=0x00000000004EEC24 "a"
 *   insn=0x00000000004EEC14 string=0x00000000004EEC18 "`"
 *   insn=0x00000000004EEC28 string=0x00000000004EEC2C "($@9"
 *   insn=0x00000000004EEC28 string=0x00000000004EEC40 "a"
 *   insn=0x00000000004EEC30 string=0x00000000004EEC34 "`"
 *   insn=0x00000000004EEC44 string=0x00000000004EEC48 "($@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EEB50(__int64 result)
{
  _QWORD *v1; // x19
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1

  v1 = (_QWORD *)result;
  v2 = *(_QWORD *)(result + 224);
  if ( v2 && (*(_BYTE *)(v2 + 9) & 3) != 0 )
    result = sub_4EE364(result, v2);
  v3 = v1[29];
  if ( v3 && (*(_BYTE *)(v3 + 9) & 3) != 0 )
    result = sub_4EE364((__int64)v1, v3);
  v4 = v1[30];
  if ( v4 && (*(_BYTE *)(v4 + 9) & 3) != 0 )
    result = sub_4EE364((__int64)v1, v4);
  v5 = v1[31];
  if ( v5 && (*(_BYTE *)(v5 + 9) & 3) != 0 )
    result = sub_4EE364((__int64)v1, v5);
  v6 = v1[32];
  if ( v6 && (*(_BYTE *)(v6 + 9) & 3) != 0 )
    result = sub_4EE364((__int64)v1, v6);
  v7 = v1[33];
  if ( v7 && (*(_BYTE *)(v7 + 9) & 3) != 0 )
    result = sub_4EE364((__int64)v1, v7);
  v8 = v1[34];
  if ( v8 && (*(_BYTE *)(v8 + 9) & 3) != 0 )
    result = sub_4EE364((__int64)v1, v8);
  v9 = v1[35];
  if ( v9 && (*(_BYTE *)(v9 + 9) & 3) != 0 )
    result = sub_4EE364((__int64)v1, v9);
  v10 = v1[36];
  if ( v10 )
  {
    if ( (*(_BYTE *)(v10 + 9) & 3) != 0 )
      return sub_4EE364((__int64)v1, v10);
  }
  return result;
}

