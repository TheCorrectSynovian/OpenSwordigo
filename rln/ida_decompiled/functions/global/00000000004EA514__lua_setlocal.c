/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EA514
 * Mangled: _Z12lua_setlocalP9lua_StatePK9lua_Debugi
 * Demangled: lua_setlocal(lua_State *,lua_Debug const*,int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004ED810  sub_4ED810
 *
 * Referenced strings: 37
 *   insn=0x00000000004EA528 string=0x00000000004EA52C ")t"
 *   insn=0x00000000004EA52C string=0x00000000004EA530 "\n"
 *   insn=0x00000000004EA534 string=0x00000000004EA538 "5!\n"
 *   insn=0x00000000004EA53C string=0x00000000004EA540 "j\t@"
 *   insn=0x00000000004EA540 string=0x00000000004EA544 "_"
 *   insn=0x00000000004EA548 string=0x00000000004EA54C "j"
 *   insn=0x00000000004EA54C string=0x00000000004EA550 "L)@9"
 *   insn=0x00000000004EA554 string=0x00000000004EA5CC "@"
 *   insn=0x00000000004EA568 string=0x00000000004EA56C "\n"
 *   insn=0x00000000004EA574 string=0x00000000004EA578 "J"
 *   insn=0x00000000004EA574 string=0x00000000004EA5B0 "\t"
 *   insn=0x00000000004EA578 string=0x00000000004EA57C "k~@"
 *   insn=0x00000000004EA57C string=0x00000000004EA580 "J"
 *   insn=0x00000000004EA580 string=0x00000000004EA584 "J"
 *   insn=0x00000000004EA584 string=0x00000000004EA588 "_"
 *   insn=0x00000000004EA588 string=0x00000000004EA58C "+"
 *   insn=0x00000000004EA58C string=0x00000000004EA590 "`"
 *   insn=0x00000000004EA590 string=0x00000000004EA598 "\n"
 *   insn=0x00000000004EA590 string=0x00000000005999E1 "(*temporary)"
 *   insn=0x00000000004EA598 string=0x00000000004EA59C ")"
 *   insn=0x00000000004EA59C string=0x00000000004EA5A0 "K"
 *   insn=0x00000000004EA5A0 string=0x00000000004EA5A4 "+"
 *   insn=0x00000000004EA5A4 string=0x00000000004EA5A8 "J"
 *   insn=0x00000000004EA5A8 string=0x00000000004EA5AC "*"
 *   insn=0x00000000004EA5B0 string=0x00000000004EA5B4 ")A"
 *   insn=0x00000000004EA5B4 string=0x00000000004EA5B8 "\t"
 *   insn=0x00000000004EA5CC string=0x00000000004EA5D0 "@"
 *   insn=0x00000000004EA5DC string=0x00000000004EA5E0 ""
 *   insn=0x00000000004EA5E0 string=0x00000000004EA5E4 "(!"
 *   insn=0x00000000004EA5EC string=0x00000000004EA604 "H"
 *   insn=0x00000000004EA5F0 string=0x00000000004EA5F4 "\n"
 *   insn=0x00000000004EA5F4 string=0x00000000004EA5F8 "(!\n"
 *   insn=0x00000000004EA5FC string=0x00000000004EA600 "j"
 *   insn=0x00000000004EA608 string=0x00000000004EA60C "@"
 *   insn=0x00000000004EA610 string=0x00000000004EA614 ""
 *   insn=0x00000000004EA618 string=0x00000000004EA61C "}"
 *   insn=0x00000000004EA61C string=0x00000000004ED810 "\"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall lua_setlocal(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 *v7; // x21
  _DWORD *v8; // x11
  const char *result; // x0
  bool v10; // zf
  __int64 v11; // x9
  _QWORD *v12; // x21
  __int64 v13; // t1
  __int64 *v14; // x8
  _QWORD *v15; // x10
  __int64 v16; // x10
  __int64 v17; // x9

  v4 = a1[10];
  v5 = *(int *)(a2 + 116);
  v7 = (__int64 *)(v4 + 40 * v5);
  v8 = (_DWORD *)v7[1];
  if ( v8[2] == 6 && !*(_BYTE *)(*(_QWORD *)v8 + 10LL) && *(_QWORD *)(*(_QWORD *)v8 + 32LL) )
  {
    if ( (__int64 *)a1[5] == v7 )
      *(_QWORD *)(v4 + 40 * v5 + 24) = a1[6];
    result = (const char *)sub_4ED810();
    if ( result )
    {
      v11 = *v7;
      v14 = a1 + 2;
      goto LABEL_9;
    }
  }
  result = 0;
  v10 = a1[5] == (_QWORD)v7;
  v13 = *v7;
  v12 = v7 + 6;
  v11 = v13;
  v14 = a1 + 2;
  if ( v10 )
    v15 = a1 + 2;
  else
    v15 = v12;
  if ( a3 >= 1 && (*v15 - v11) >> 4 >= a3 )
  {
    result = "(*temporary)";
LABEL_9:
    v16 = *v14;
    v17 = v11 + 16LL * a3;
    *(_QWORD *)(v17 - 16) = *(_QWORD *)(*v14 - 16);
    *(_DWORD *)(v17 - 8) = *(_DWORD *)(v16 - 8);
  }
  *v14 -= 16;
  return result;
}

