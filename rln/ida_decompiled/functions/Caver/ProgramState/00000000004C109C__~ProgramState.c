/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C109C
 * Mangled: _ZN5Caver12ProgramStateD2Ev
 * Demangled: Caver::ProgramState::~ProgramState()
 *
 * Callers: 2
 *   0x00000000001F4970  Caver::ProgramState::~ProgramState()
 *   0x00000000001FFB50  Caver::ProgramState::~ProgramState()
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201AB0  lua_close(lua_State *)
 *   0x00000000002038F0  Caver::ProgramTable::SetPointerForPointerKey(void *,void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 61
 *   insn=0x00000000004C10C0 string=0x00000000004C10C4 "a"
 *   insn=0x00000000004C10C8 string=0x00000000004C10CC "h"
 *   insn=0x00000000004C10CC string=0x00000000004C10D0 ""
 *   insn=0x00000000004C10D0 string=0x00000000004C10D4 "`"
 *   insn=0x00000000004C10F8 string=0x00000000004C10FC "@"
 *   insn=0x00000000004C1108 string=0x00000000004C110C "@"
 *   insn=0x00000000004C110C string=0x00000000004C1110 "@"
 *   insn=0x00000000004C1110 string=0x00000000004C1114 ""
 *   insn=0x00000000004C1114 string=0x00000000004C1118 ""
 *   insn=0x00000000004C111C string=0x00000000004C1120 ""
 *   insn=0x00000000004C1120 string=0x00000000004C1124 ""
 *   insn=0x00000000004C1130 string=0x00000000004C1134 "_"
 *   insn=0x00000000004C1140 string=0x00000000004C115C "`"
 *   insn=0x00000000004C1144 string=0x00000000004C1148 "\t\t@"
 *   insn=0x00000000004C1148 string=0x00000000004C114C "?"
 *   insn=0x00000000004C114C string=0x00000000004C1150 ""
 *   insn=0x00000000004C115C string=0x00000000004C1160 " "
 *   insn=0x00000000004C1160 string=0x00000000004C1164 "@"
 *   insn=0x00000000004C1164 string=0x00000000004C1168 ""
 *   insn=0x00000000004C1168 string=0x00000000004C116C ""
 *   insn=0x00000000004C1170 string=0x00000000004C1174 ""
 *   insn=0x00000000004C1174 string=0x00000000004C1178 ""
 *   insn=0x00000000004C1184 string=0x00000000004C1188 " "
 *   insn=0x00000000004C1190 string=0x00000000004C1194 "3"
 *   insn=0x00000000004C1194 string=0x00000000004C1198 "h"
 *   insn=0x00000000004C1198 string=0x00000000004C119C ""
 *   insn=0x00000000004C119C string=0x00000000004C11A0 "h"
 *   insn=0x00000000004C11A4 string=0x00000000004C11A8 "h"
 *   insn=0x00000000004C11AC string=0x00000000004C11B0 "\t@"
 *   insn=0x00000000004C11B4 string=0x00000000004C11B8 "h\n@"
 *   insn=0x00000000004C11B8 string=0x00000000004C11BC ""
 *   insn=0x00000000004C11BC string=0x00000000004C11C0 "h\n"
 *   insn=0x00000000004C11C4 string=0x00000000004C11C8 "h"
 *   insn=0x00000000004C11CC string=0x00000000004C11D0 "@"
 *   insn=0x00000000004C11D8 string=0x00000000004C11DC "5"
 *   insn=0x00000000004C11DC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C11E4 string=0x00000000004C11E8 "!"
 *   insn=0x00000000004C120C string=0x00000000004C1210 "`"
 *   insn=0x00000000004C1214 string=0x00000000004C1218 "@"
 *   insn=0x00000000004C1218 string=0x00000000004C121C ""
 *   insn=0x00000000004C121C string=0x00000000004C1220 ""
 *   insn=0x00000000004C1224 string=0x00000000004C1228 ""
 *   insn=0x00000000004C1228 string=0x00000000004C122C ""
 *   insn=0x00000000004C1238 string=0x00000000004C123C " "
 *   insn=0x00000000004C123C string=0x00000000004C1240 "u"
 *   insn=0x00000000004C1240 string=0x00000000004C1244 "w"
 *   insn=0x00000000004C1244 string=0x00000000004C1248 "5"
 *   insn=0x00000000004C124C string=0x00000000004C1250 ""
 *   insn=0x00000000004C125C string=0x00000000004C1260 "\t@"
 *   insn=0x00000000004C126C string=0x00000000004C1270 ""
 *   insn=0x00000000004C127C string=0x00000000004C1280 "@"
 *   insn=0x00000000004C128C string=0x00000000004C1290 ""
 *   insn=0x00000000004C1298 string=0x00000000004C129C "!"
 *   insn=0x00000000004C12A4 string=0x00000000004C12A8 ")4"
 *   insn=0x00000000004C12A8 string=0x00000000004C12AC "(4"
 *   insn=0x00000000004C12BC string=0x00000000004C12C0 "@"
 *   insn=0x00000000004C12C0 string=0x00000000004C12C4 ""
 *   insn=0x00000000004C12C4 string=0x00000000004C12C8 ""
 *   insn=0x00000000004C12C8 string=0x00000000004C12CC "@"
 *   insn=0x00000000004C12CC string=0x00000000004C12D4 ""
 *   insn=0x00000000004C12D8 string=0x00000000004C12DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramState::~ProgramState(Caver::ProgramState *this)
{
  _QWORD *v2; // x20
  _QWORD **v3; // x22
  __int64 v4; // x8
  _DWORD *v5; // x0
  int v6; // w8
  _QWORD *v7; // x20
  _QWORD *v8; // x8
  _DWORD *v9; // x0
  int v10; // w8
  _QWORD *v11; // x19
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x8

  v3 = (_QWORD **)((char *)this + 16);
  v2 = (_QWORD *)*((_QWORD *)this + 2);
  if ( (_QWORD *)((char *)this + 16) != v2 )
  {
    do
    {
      v4 = v2[2];
      v5 = *(_DWORD **)(v4 + 32);
      *(_QWORD *)(v4 + 32) = 0;
      if ( v5 )
      {
        v6 = v5[2] - 1;
        v5[2] = v6;
        if ( !v6 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v2 = (_QWORD *)*v2;
    }
    while ( v3 != v2 );
  }
  if ( *(_QWORD *)this )
  {
    if ( *((_QWORD *)this + 1) )
    {
      Caver::ProgramTable::SetPointerForPointerKey((Caver::ProgramState *)((char *)this + 56), *(void **)this, 0);
      Caver::ProgramTable::SetPointerForPointerKey((Caver::ProgramState *)((char *)this + 40), *(void **)this, 0);
    }
    else
    {
      lua_close();
    }
  }
  v7 = *v3;
  if ( v3 != *v3 )
  {
    v8 = *v3;
    do
    {
      *(_QWORD *)v8[2] = 0;
      v8 = (_QWORD *)*v8;
    }
    while ( v3 != v8 );
  }
  v9 = (_DWORD *)*((_QWORD *)this + 4);
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
      v7 = *v3;
    }
  }
  if ( v7 != v3 )
  {
    do
    {
      v11 = (_QWORD *)v7[3];
      v12 = (_QWORD *)*v7;
      if ( v11 )
      {
        v13 = v11[1] - 1LL;
        v11[1] = v13;
        if ( !v13 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v14 = v11[2] - 1LL;
          v11[2] = v14;
          if ( !v14 )
            (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      operator delete(v7);
      v7 = v12;
    }
    while ( v12 != v3 );
  }
}

