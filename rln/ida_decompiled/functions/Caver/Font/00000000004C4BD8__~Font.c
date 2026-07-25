/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C4BD8
 * Mangled: _ZN5Caver4FontD2Ev
 * Demangled: Caver::Font::~Font()
 *
 * Callers: 1
 *   0x00000000001F6330  Caver::Font::~Font()
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 45
 *   insn=0x00000000004C4BE4 string=0x00000000004C4BE8 "T"
 *   insn=0x00000000004C4BF4 string=0x00000000004C4BF8 "`"@"
 *   insn=0x00000000004C4BF8 string=0x00000000004C4BFC "@"
 *   insn=0x00000000004C4BFC string=0x00000000004C4C04 "`"
 *   insn=0x00000000004C4C00 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004C4C04 string=0x00000000004C4C08 "@"
 *   insn=0x00000000004C4C08 string=0x00000000004C4C10 "`\n@"
 *   insn=0x00000000004C4C0C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C4C10 string=0x00000000004C4C14 "@"
 *   insn=0x00000000004C4C14 string=0x00000000004C4C1C "`"
 *   insn=0x00000000004C4C20 string=0x00000000004C4C24 "@"
 *   insn=0x00000000004C4C20 string=0x00000000004C4C40 "h"
 *   insn=0x00000000004C4C24 string=0x00000000004C4C28 ""
 *   insn=0x00000000004C4C28 string=0x00000000004C4C2C ""
 *   insn=0x00000000004C4C30 string=0x00000000004C4C34 ""
 *   insn=0x00000000004C4C34 string=0x00000000004C4C38 ""
 *   insn=0x00000000004C4C40 string=0x00000000004C4C44 "\t"
 *   insn=0x00000000004C4C44 string=0x00000000004C4C48 ")"
 *   insn=0x00000000004C4C50 string=0x00000000004C4C54 "!"
 *   insn=0x00000000004C4C54 string=0x00000000004C4C78 "\t"
 *   insn=0x00000000004C4C78 string=0x00000000004C4C7C ")=G"
 *   insn=0x00000000004C4C7C string=0x00000000004C4C80 "!"
 *   insn=0x00000000004C4C84 string=0x00000000004C4C88 "\t"
 *   insn=0x00000000004C4C84 string=0x00000000004C4C9C "\t"
 *   insn=0x00000000004C4C88 string=0x00000000004C4C8C "*"
 *   insn=0x00000000004C4C8C string=0x00000000004C4C90 "\n"
 *   insn=0x00000000004C4C98 string=0x00000000004C4CA8 "?"
 *   insn=0x00000000004C4C9C string=0x00000000004C4CA0 "*"
 *   insn=0x00000000004C4CA0 string=0x00000000004C4CA4 "\n"
 *   insn=0x00000000004C4CA8 string=0x00000000004C4CAC "l"
 *   insn=0x00000000004C4CBC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C4CC0 string=0x00000000004C4CC4 "\n"
 *   insn=0x00000000004C4CC4 string=0x00000000004C4CC8 "J"
 *   insn=0x00000000004C4CCC string=0x00000000004C4CD0 "(a"
 *   insn=0x00000000004C4CD8 string=0x00000000004C4CDC "\n"
 *   insn=0x00000000004C4CDC string=0x00000000004C4CE0 "J=G"
 *   insn=0x00000000004C4CE0 string=0x00000000004C4CE4 ")!"
 *   insn=0x00000000004C4CE8 string=0x00000000004C4CEC "*"
 *   insn=0x00000000004C4CE8 string=0x00000000004C4D18 "*"
 *   insn=0x00000000004C4CEC string=0x00000000004C4CF0 "K"
 *   insn=0x00000000004C4CF0 string=0x00000000004C4CF4 "+"
 *   insn=0x00000000004C4CF8 string=0x00000000004C4CFC "_"
 *   insn=0x00000000004C4D18 string=0x00000000004C4D1C "K"
 *   insn=0x00000000004C4D1C string=0x00000000004C4D20 "+"
 *   insn=0x00000000004C4D20 string=0x00000000004C4D24 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Font::~Font(Caver::Font *this)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  _DWORD *v5; // x0
  int v6; // w8
  __int64 *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
    operator delete[](v2);
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    operator delete(v4);
  v5 = (_DWORD *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (__int64 *)(*(_QWORD *)this - 24LL);
  if ( v7 != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(*(_QWORD *)this - 8LL);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v7);
  }
}

