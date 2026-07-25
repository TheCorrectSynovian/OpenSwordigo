/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046EE1C
 * Mangled: _ZN5Caver11SceneObjectD2Ev
 * Demangled: Caver::SceneObject::~SceneObject()
 *
 * Callers: 1
 *   0x00000000001FAA20  Caver::SceneObject::~SceneObject()
 *
 * Callees: 10
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD250  Caver::SceneGridEntry::~SceneGridEntry()
 *   0x00000000001FD330  Caver::SceneObject::RemoveFromAllGroups(bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000046F1E4  Caver::SceneObject::RemoveFromAllGroups(bool)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 119
 *   insn=0x000000000046EE2C string=0x000000000046EE30 "U"
 *   insn=0x000000000046EE38 string=0x000000000046EE3C ")QC"
 *   insn=0x000000000046EE44 string=0x000000000046EE48 "*A"
 *   insn=0x000000000046EE48 string=0x000000000046EE4C ")"
 *   insn=0x000000000046EE4C string=0x000000000046EE50 "j"
 *   insn=0x000000000046EE50 string=0x000000000046EE54 "i\n"
 *   insn=0x000000000046EE58 string=0x000000000046EE5C "59"
 *   insn=0x000000000046EE5C string=0x000000000046EE60 "`"
 *   insn=0x000000000046EE5C string=0x00000000001FD330 "0'"
 *   insn=0x000000000046EE64 string=0x000000000046EE68 "`r@"
 *   insn=0x000000000046EE64 string=0x00000000001FD250 "0'"
 *   insn=0x000000000046EE68 string=0x000000000046EE6C "@"
 *   insn=0x000000000046EE6C string=0x000000000046EE70 "<"
 *   insn=0x000000000046EE6C string=0x000000000046EE74 "tZL"
 *   insn=0x000000000046EE70 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046EE7C string=0x000000000046EEB4 "t"
 *   insn=0x000000000046EE84 string=0x000000000046EE88 "@"
 *   insn=0x000000000046EE88 string=0x000000000046EE8C ""
 *   insn=0x000000000046EE8C string=0x000000000046EE90 ""
 *   insn=0x000000000046EE94 string=0x000000000046EE98 ""
 *   insn=0x000000000046EE98 string=0x000000000046EE9C ""
 *   insn=0x000000000046EEAC string=0x000000000046EEB0 "tb@"
 *   insn=0x000000000046EEB4 string=0x000000000046EEC0 "t2@"
 *   insn=0x000000000046EEBC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046EEC0 string=0x000000000046EEC4 "4"
 *   insn=0x000000000046EEC4 string=0x000000000046EF08 "h*@"
 *   insn=0x000000000046EEC8 string=0x000000000046EECC ""
 *   insn=0x000000000046EED8 string=0x000000000046EEDC "\t@"
 *   insn=0x000000000046EEE8 string=0x000000000046EEEC ""
 *   insn=0x000000000046EEF8 string=0x000000000046EEFC "@"
 *   insn=0x000000000046EF0C string=0x000000000046EF10 ")"
 *   insn=0x000000000046EF18 string=0x000000000046EF1C "a"
 *   insn=0x000000000046EF1C string=0x000000000046EF20 "`&@"
 *   insn=0x000000000046EF24 string=0x000000000046EF28 "@"
 *   insn=0x000000000046EF24 string=0x000000000046EF44 "`"
 *   insn=0x000000000046EF28 string=0x000000000046EF2C ""
 *   insn=0x000000000046EF2C string=0x000000000046EF30 ""
 *   insn=0x000000000046EF34 string=0x000000000046EF38 ""
 *   insn=0x000000000046EF38 string=0x000000000046EF3C ""
 *   insn=0x000000000046EF48 string=0x000000000046EF4C "@"
 *   insn=0x000000000046EF48 string=0x000000000046EF68 "s"
 *   insn=0x000000000046EF4C string=0x000000000046EF50 ""
 *   insn=0x000000000046EF50 string=0x000000000046EF54 ""
 *   insn=0x000000000046EF58 string=0x000000000046EF5C ""
 *   insn=0x000000000046EF5C string=0x000000000046EF60 ""
 *   insn=0x000000000046EF6C string=0x000000000046EF70 "`"
 *   insn=0x000000000046EF70 string=0x000000000046EF74 "@"
 *   insn=0x000000000046EF8C string=0x000000000046EF90 "!"
 *   insn=0x000000000046EFA8 string=0x000000000046EFAC ")=G"
 *   insn=0x000000000046EFAC string=0x000000000046EFB0 "!"
 *   insn=0x000000000046EFB4 string=0x000000000046EFB8 "\t"
 *   insn=0x000000000046EFB4 string=0x000000000046EFCC "\t"
 *   insn=0x000000000046EFB8 string=0x000000000046EFBC "*"
 *   insn=0x000000000046EFBC string=0x000000000046EFC0 "\n"
 *   insn=0x000000000046EFC8 string=0x000000000046EFD8 "?"
 *   insn=0x000000000046EFCC string=0x000000000046EFD0 "*"
 *   insn=0x000000000046EFD0 string=0x000000000046EFD4 "\n"
 *   insn=0x000000000046EFD8 string=0x000000000046EFDC ","
 *   insn=0x000000000046EFE4 string=0x000000000046EFE8 "`&@"
 *   insn=0x000000000046EFF4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046EFF8 string=0x000000000046EFFC "s"
 *   insn=0x000000000046EFFC string=0x000000000046F000 "3"
 *   insn=0x000000000046F000 string=0x000000000046F004 "m"
 *   insn=0x000000000046F000 string=0x000000000046F1A4 "`"
 *   insn=0x000000000046F008 string=0x000000000046F00C "`"
 *   insn=0x000000000046F010 string=0x000000000046F014 "b"
 *   insn=0x000000000046F010 string=0x000000000046F180 "@"
 *   insn=0x000000000046F014 string=0x000000000046F19C "s"
 *   insn=0x000000000046F018 string=0x000000000046F01C "<"
 *   insn=0x000000000046F01C string=0x000000000046F10C "h*@"
 *   insn=0x000000000046F020 string=0x000000000046F024 "`r@"
 *   insn=0x000000000046F028 string=0x000000000046F02C ""
 *   insn=0x000000000046F02C string=0x000000000046F048 "uZL"
 *   insn=0x000000000046F030 string=0x000000000046F034 "`"
 *   insn=0x000000000046F038 string=0x000000000046F03C "`r@"
 *   insn=0x000000000046F03C string=0x000000000046F040 "@"
 *   insn=0x000000000046F058 string=0x000000000046F05C "@"
 *   insn=0x000000000046F05C string=0x000000000046F060 ""
 *   insn=0x000000000046F060 string=0x000000000046F064 ""
 *   insn=0x000000000046F068 string=0x000000000046F06C ""
 *   insn=0x000000000046F06C string=0x000000000046F070 ""
 *   insn=0x000000000046F080 string=0x000000000046F084 "ub@"
 *   insn=0x000000000046F088 string=0x000000000046F0C4 "u2@"
 *   insn=0x000000000046F090 string=0x000000000046F0C0 "| "
 *   insn=0x000000000046F098 string=0x000000000046F09C "\n"
 *   insn=0x000000000046F0AC string=0x000000000046F0B0 "hb@"
 *   insn=0x000000000046F0B4 string=0x000000000046F0B8 "h"
 *   insn=0x000000000046F0C4 string=0x000000000046F0C8 "5"
 *   insn=0x000000000046F0CC string=0x000000000046F0D0 ""
 *   insn=0x000000000046F0DC string=0x000000000046F0E0 "\t@"
 *   insn=0x000000000046F0EC string=0x000000000046F0F0 ""
 *   insn=0x000000000046F0FC string=0x000000000046F100 "@"
 *   insn=0x000000000046F110 string=0x000000000046F114 ")"
 *   insn=0x000000000046F120 string=0x000000000046F154 "`&@"
 *   insn=0x000000000046F124 string=0x000000000046F128 ")=G"
 *   insn=0x000000000046F128 string=0x000000000046F12C "!"
 *   insn=0x000000000046F130 string=0x000000000046F134 "\t"
 *   insn=0x000000000046F130 string=0x000000000046F1C0 "\t"
 *   insn=0x000000000046F134 string=0x000000000046F138 "*"
 *   insn=0x000000000046F138 string=0x000000000046F13C "\n"
 *   insn=0x000000000046F140 string=0x000000000046F144 "?"
 *   insn=0x000000000046F144 string=0x000000000046F148 "l"
 *   insn=0x000000000046F158 string=0x000000000046F15C "@"
 *   insn=0x000000000046F158 string=0x000000000046F178 "`"
 *   insn=0x000000000046F15C string=0x000000000046F160 ""
 *   insn=0x000000000046F160 string=0x000000000046F164 ""
 *   insn=0x000000000046F168 string=0x000000000046F16C ""
 *   insn=0x000000000046F16C string=0x000000000046F170 ""
 *   insn=0x000000000046F180 string=0x000000000046F184 ""
 *   insn=0x000000000046F184 string=0x000000000046F188 ""
 *   insn=0x000000000046F18C string=0x000000000046F190 ""
 *   insn=0x000000000046F190 string=0x000000000046F194 ""
 *   insn=0x000000000046F1A4 string=0x000000000046F1A8 "@"
 *   insn=0x000000000046F1A8 string=0x000000000046F1AC "m"
 *   insn=0x000000000046F1B0 string=0x000000000046F1B4 "? "
 *   insn=0x000000000046F1C0 string=0x000000000046F1C4 "*"
 *   insn=0x000000000046F1C4 string=0x000000000046F1C8 "\n"
 *   insn=0x000000000046F1C8 string=0x000000000046F1CC "?"
 *   insn=0x000000000046F1DC string=0x000000000046F1E0 "[|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObject::~SceneObject(Caver::SceneObject *this)
{
  void *v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x22
  _DWORD *v5; // x0
  int v6; // w8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  void *v11; // x0
  _DWORD *v12; // x0
  int v13; // w8
  _DWORD *v14; // x0
  int v15; // w8
  _QWORD *v16; // x19
  void *v17; // x0
  unsigned int *v18; // x8
  int v19; // w9

  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)this = off_6D4CE0;
  *((_QWORD *)this + 2) = &off_6D4D40;
  Caver::SceneObject::RemoveFromAllGroups(this, 0);
  Caver::SceneGridEntry::~SceneGridEntry((Caver::SceneObject *)((char *)this + 248));
  v2 = (void *)*((_QWORD *)this + 28);
  if ( v2 )
    operator delete[](v2);
  v3 = (_QWORD *)*((_QWORD *)this + 24);
  v4 = (_QWORD *)*((_QWORD *)this + 25);
  if ( v3 != v4 )
  {
    do
    {
      v5 = (_DWORD *)*v3;
      if ( *v3 )
      {
        v6 = v5[2] - 1;
        v5[2] = v6;
        if ( !v6 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      ++v3;
    }
    while ( v4 != v3 );
    v3 = (_QWORD *)*((_QWORD *)this + 24);
  }
  if ( v3 )
    operator delete(v3);
  v7 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = *((_QWORD *)this + 10);
  v11 = (void *)(v10 - 24);
  if ( (__int64 *)(v10 - 24) == &qword_6FD2E0 )
    goto LABEL_16;
  v18 = (unsigned int *)(v10 - 8);
  if ( &pthread_create )
  {
    do
      v19 = __ldaxr(v18);
    while ( __stlxr(v19 - 1, v18) );
  }
  else
  {
    v19 = (*v18)--;
  }
  if ( v19 > 0 )
  {
LABEL_16:
    v12 = (_DWORD *)*((_QWORD *)this + 9);
    if ( !v12 )
      goto LABEL_19;
  }
  else
  {
    operator delete(v11);
    v12 = (_DWORD *)*((_QWORD *)this + 9);
    if ( !v12 )
      goto LABEL_19;
  }
  v13 = v12[2] - 1;
  v12[2] = v13;
  if ( !v13 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
LABEL_19:
  v14 = (_DWORD *)*((_QWORD *)this + 7);
  if ( v14 )
  {
    v15 = v14[2] - 1;
    v14[2] = v15;
    if ( !v15 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  v16 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v16 )
  {
    v17 = (void *)v16[1];
    if ( v17 )
      operator delete[](v17);
    operator delete(v16);
  }
}

