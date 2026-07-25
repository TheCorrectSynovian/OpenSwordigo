/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EA408
 * Mangled: _Z12lua_getlocalP9lua_StatePK9lua_Debugi
 * Demangled: lua_getlocal(lua_State *,lua_Debug const*,int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000004E6740  sub_4E6740
 *   0x00000000004ED810  sub_4ED810
 *
 * Referenced strings: 32
 *   insn=0x00000000004EA418 string=0x00000000004EA41C "h*@"
 *   insn=0x00000000004EA41C string=0x00000000004EA420 ")t"
 *   insn=0x00000000004EA420 string=0x00000000004EA424 "\n"
 *   insn=0x00000000004EA428 string=0x00000000004EA42C "6!\n"
 *   insn=0x00000000004EA430 string=0x00000000004EA434 "j\t@"
 *   insn=0x00000000004EA434 string=0x00000000004EA438 "_"
 *   insn=0x00000000004EA43C string=0x00000000004EA440 "j"
 *   insn=0x00000000004EA43C string=0x00000000004EA44C "h"
 *   insn=0x00000000004EA440 string=0x00000000004EA444 "L)@9L"
 *   insn=0x00000000004EA444 string=0x00000000004EA448 "L"
 *   insn=0x00000000004EA448 string=0x00000000004EA4B0 "@"
 *   insn=0x00000000004EA44C string=0x00000000004EA450 "iB"
 *   insn=0x00000000004EA45C string=0x00000000004EA460 ")"
 *   insn=0x00000000004EA468 string=0x00000000004EA46C ")"
 *   insn=0x00000000004EA470 string=0x00000000004EA474 ")"
 *   insn=0x00000000004EA474 string=0x00000000004EA478 ")"
 *   insn=0x00000000004EA478 string=0x00000000004EA47C "?"
 *   insn=0x00000000004EA480 string=0x00000000004EA484 "u"
 *   insn=0x00000000004EA484 string=0x00000000005999E1 "(*temporary)"
 *   insn=0x00000000004EA498 string=0x00000000004E6740 "@"
 *   insn=0x00000000004EA4B4 string=0x00000000004EA4B8 "l"
 *   insn=0x00000000004EA4C0 string=0x00000000004EA4C4 ""
 *   insn=0x00000000004EA4C0 string=0x00000000004EA4D4 "l"
 *   insn=0x00000000004EA4C4 string=0x00000000004EA4C8 "(!"
 *   insn=0x00000000004EA4D0 string=0x00000000004EA4E8 "H"
 *   insn=0x00000000004EA4D4 string=0x00000000004EA4D8 "\n"
 *   insn=0x00000000004EA4D8 string=0x00000000004EA4DC "(!\n"
 *   insn=0x00000000004EA4E0 string=0x00000000004EA4E4 "j"
 *   insn=0x00000000004EA4EC string=0x00000000004EA4F0 "@"
 *   insn=0x00000000004EA4F4 string=0x00000000004EA4F8 ""
 *   insn=0x00000000004EA500 string=0x00000000004ED810 "\"
 *   insn=0x00000000004EA504 string=0x00000000004EA508 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall lua_getlocal(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 *v7; // x22
  _DWORD *v8; // x11
  _QWORD *v9; // x9
  const char *v10; // x21
  bool v11; // zf
  __int64 v12; // x8
  _QWORD *v13; // x22
  __int64 v14; // t1

  v4 = a1[10];
  v5 = *(int *)(a2 + 116);
  v7 = (__int64 *)(v4 + 40 * v5);
  v8 = (_DWORD *)v7[1];
  if ( v8[2] == 6 && !*(_BYTE *)(*(_QWORD *)v8 + 10LL) && *(_QWORD *)(*(_QWORD *)v8 + 32LL) )
  {
    if ( (__int64 *)a1[5] == v7 )
      *(_QWORD *)(v4 + 40 * v5 + 24) = a1[6];
    v10 = (const char *)sub_4ED810();
    if ( v10 )
    {
      v12 = *v7;
      goto LABEL_8;
    }
  }
  v9 = a1 + 2;
  v10 = 0;
  v11 = a1[5] == (_QWORD)v7;
  v14 = *v7;
  v13 = v7 + 6;
  v12 = v14;
  if ( !v11 )
    v9 = v13;
  if ( a3 >= 1 && (*v9 - v12) >> 4 >= a3 )
  {
    v10 = "(*temporary)";
LABEL_8:
    sub_4E6740((__int64)a1, v12 + 16LL * (a3 - 1));
  }
  return v10;
}

