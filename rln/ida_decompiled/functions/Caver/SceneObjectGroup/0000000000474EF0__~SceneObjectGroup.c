/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000474EF0
 * Mangled: _ZN5Caver16SceneObjectGroupD2Ev
 * Demangled: Caver::SceneObjectGroup::~SceneObjectGroup()
 *
 * Callers: 1
 *   0x00000000001F4520  Caver::SceneObjectGroup::~SceneObjectGroup()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5070  Caver::SceneObject::RemoveGroup(Caver::SceneObjectGroup *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x0000000000474F00 string=0x0000000000474F04 "U"
 *   insn=0x0000000000474F14 string=0x0000000000474F18 ""
 *   insn=0x0000000000474F18 string=0x0000000000474F1C "i:@"
 *   insn=0x0000000000474F1C string=0x0000000000474F20 "\nA"
 *   insn=0x0000000000474F20 string=0x0000000000474F24 ""
 *   insn=0x0000000000474F24 string=0x0000000000474F28 "?"
 *   insn=0x0000000000474F28 string=0x0000000000474F2C "j"
 *   insn=0x0000000000474F2C string=0x0000000000474F30 "h\n"
 *   insn=0x0000000000474F30 string=0x0000000000474F34 "K"
 *   insn=0x0000000000474F34 string=0x0000000000474F5C "`"@"
 *   insn=0x0000000000474F38 string=0x0000000000474F3C "h"@"
 *   insn=0x0000000000474F44 string=0x0000000000474F48 "J"
 *   insn=0x0000000000474F48 string=0x0000000000474F4C "h:"
 *   insn=0x0000000000474F48 string=0x00000000001F5070 "P'"
 *   insn=0x0000000000474F54 string=0x0000000000474F58 "+"
 *   insn=0x0000000000474F60 string=0x0000000000474F64 "@"
 *   insn=0x0000000000474F64 string=0x0000000000474F6C "t"
 *   insn=0x0000000000474F68 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000474F6C string=0x0000000000474F70 "4"
 *   insn=0x0000000000474F70 string=0x0000000000474FB4 "h"
 *   insn=0x0000000000474F74 string=0x0000000000474F78 ""
 *   insn=0x0000000000474F84 string=0x0000000000474F88 "\t@"
 *   insn=0x0000000000474F94 string=0x0000000000474F98 ""
 *   insn=0x0000000000474FA4 string=0x0000000000474FA8 "@"
 *   insn=0x0000000000474FB8 string=0x0000000000474FBC ")"
 *   insn=0x0000000000474FC4 string=0x0000000000474FC8 "A"
 *   insn=0x0000000000474FF0 string=0x0000000000474FF4 ")=G"
 *   insn=0x0000000000474FF4 string=0x0000000000474FF8 "!"
 *   insn=0x0000000000474FFC string=0x0000000000475000 "\t"
 *   insn=0x0000000000474FFC string=0x0000000000475014 "\t"
 *   insn=0x0000000000475000 string=0x0000000000475004 "*"
 *   insn=0x0000000000475004 string=0x0000000000475008 "\n"
 *   insn=0x0000000000475010 string=0x0000000000475020 "?"
 *   insn=0x0000000000475014 string=0x0000000000475018 "*"
 *   insn=0x0000000000475018 string=0x000000000047501C "\n"
 *   insn=0x0000000000475020 string=0x0000000000475024 "L"
 *   insn=0x0000000000475034 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047503C string=0x000000000047509C "h"
 *   insn=0x0000000000475044 string=0x0000000000475048 "h"
 *   insn=0x0000000000475048 string=0x0000000000475054 "u"
 *   insn=0x0000000000475054 string=0x0000000000475058 "5"
 *   insn=0x000000000047505C string=0x0000000000475060 ""
 *   insn=0x000000000047506C string=0x0000000000475070 "\t@"
 *   insn=0x000000000047507C string=0x0000000000475080 ""
 *   insn=0x000000000047508C string=0x0000000000475090 "@"
 *   insn=0x00000000004750A0 string=0x00000000004750A4 ")"
 *   insn=0x00000000004750B0 string=0x00000000004750B4 "i"
 *   insn=0x00000000004750B4 string=0x00000000004750B8 ")=G"
 *   insn=0x00000000004750B8 string=0x00000000004750BC "!"
 *   insn=0x00000000004750BC string=0x00000000004750C0 "i"
 *   insn=0x00000000004750C0 string=0x00000000004750C4 "\t"
 *   insn=0x00000000004750C0 string=0x00000000004750EC "\t"
 *   insn=0x00000000004750C4 string=0x00000000004750C8 "*"
 *   insn=0x00000000004750C8 string=0x00000000004750CC "\n"
 *   insn=0x00000000004750D0 string=0x00000000004750D4 "?"
 *   insn=0x00000000004750D4 string=0x00000000004750D8 "l"
 *   insn=0x00000000004750EC string=0x00000000004750F0 "*"
 *   insn=0x00000000004750F0 string=0x00000000004750F4 "\n"
 *   insn=0x00000000004750F4 string=0x00000000004750F8 "?"
 *   insn=0x00000000004750F8 string=0x00000000004750FC ""
 *   insn=0x0000000000475114 string=0x0000000000475118 "h:@"
 *   insn=0x000000000047511C string=0x0000000000475120 "K"
 *   insn=0x0000000000475124 string=0x0000000000475128 "h"@"
 *   insn=0x0000000000475134 string=0x0000000000475138 "h:"
 *   insn=0x0000000000475140 string=0x0000000000475144 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObjectGroup::~SceneObjectGroup(Caver::SceneObjectGroup *this)
{
  int v2; // w9
  __int64 v3; // x20
  void *v4; // x0
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_DWORD *)this + 14);
  *(_QWORD *)this = off_6D4DC0;
  *((_QWORD *)this + 2) = &off_6D4E10;
  if ( v2 >= 1 )
  {
    v3 = 0;
    do
      Caver::SceneObject::RemoveGroup(*(Caver::SceneObject **)(*((_QWORD *)this + 8) + 8 * v3++), this);
    while ( v3 < *((int *)this + 14) );
  }
  v4 = (void *)*((_QWORD *)this + 8);
  *((_DWORD *)this + 14) = 0;
  if ( v4 )
    operator delete[](v4);
  v5 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = *((_QWORD *)this + 4);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v8 - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v9);
  }
}

