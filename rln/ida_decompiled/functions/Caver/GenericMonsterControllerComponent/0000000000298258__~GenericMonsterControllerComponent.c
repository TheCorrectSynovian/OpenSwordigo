/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298258
 * Mangled: _ZN5Caver33GenericMonsterControllerComponentD2Ev
 * Demangled: Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent()
 *
 * Callers: 1
 *   0x00000000001FD6C0  Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent()
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000298420  Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x0000000000298264 string=0x0000000000298268 "h""
 *   insn=0x0000000000298268 string=0x000000000029826C "qA"
 *   insn=0x0000000000298270 string=0x0000000000298274 "`"
 *   insn=0x0000000000298274 string=0x0000000000298278 "\n"
 *   insn=0x0000000000298278 string=0x000000000029827C "\tA"
 *   insn=0x000000000029827C string=0x0000000000298280 "@"
 *   insn=0x0000000000298280 string=0x0000000000298284 ""
 *   insn=0x0000000000298288 string=0x000000000029828C "i"
 *   insn=0x000000000029828C string=0x0000000000298290 "`"
 *   insn=0x0000000000298294 string=0x0000000000298298 "@"
 *   insn=0x0000000000298294 string=0x00000000002982B4 "t"
 *   insn=0x0000000000298298 string=0x000000000029829C ""
 *   insn=0x000000000029829C string=0x00000000002982A0 ""
 *   insn=0x00000000002982A4 string=0x00000000002982A8 ""
 *   insn=0x00000000002982A8 string=0x00000000002982AC ""
 *   insn=0x00000000002982BC string=0x00000000002982F4 "t"
 *   insn=0x00000000002982C4 string=0x00000000002982C8 "@"
 *   insn=0x00000000002982C8 string=0x00000000002982CC ""
 *   insn=0x00000000002982CC string=0x00000000002982D0 ""
 *   insn=0x00000000002982D4 string=0x00000000002982D8 ""
 *   insn=0x00000000002982D8 string=0x00000000002982DC ""
 *   insn=0x00000000002982EC string=0x00000000002982F0 "tv@"
 *   insn=0x00000000002982F4 string=0x0000000000298300 "h""
 *   insn=0x00000000002982FC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000298300 string=0x0000000000298304 "`r@"
 *   insn=0x0000000000298304 string=0x0000000000298308 ""
 *   insn=0x0000000000298308 string=0x000000000029830C "A"
 *   insn=0x000000000029830C string=0x0000000000298310 "hj"
 *   insn=0x0000000000298314 string=0x0000000000298318 "@"
 *   insn=0x0000000000298318 string=0x000000000029831C ""
 *   insn=0x000000000029831C string=0x0000000000298320 ""
 *   insn=0x0000000000298324 string=0x0000000000298328 ""
 *   insn=0x0000000000298328 string=0x000000000029832C ""
 *   insn=0x0000000000298340 string=0x0000000000298344 "o"
 *   insn=0x0000000000298348 string=0x000000000029834C "."
 *   insn=0x0000000000298364 string=0x0000000000298368 "@"
 *   insn=0x0000000000298368 string=0x000000000029836C ""
 *   insn=0x000000000029836C string=0x0000000000298370 ""
 *   insn=0x0000000000298374 string=0x0000000000298378 ""
 *   insn=0x0000000000298378 string=0x000000000029837C ""
 *   insn=0x000000000029838C string=0x0000000000298390 "uv@"
 *   insn=0x0000000000298394 string=0x00000000002983D0 "h""
 *   insn=0x00000000002983B8 string=0x00000000002983BC "hv@"
 *   insn=0x00000000002983C0 string=0x00000000002983C4 "h"
 *   insn=0x00000000002983D0 string=0x00000000002983D4 "`r@"
 *   insn=0x00000000002983D4 string=0x00000000002983D8 ""
 *   insn=0x00000000002983D8 string=0x00000000002983DC "A"
 *   insn=0x00000000002983DC string=0x00000000002983E0 "hj"
 *   insn=0x00000000002983E4 string=0x00000000002983E8 "@"
 *   insn=0x00000000002983E8 string=0x00000000002983EC ""
 *   insn=0x00000000002983EC string=0x00000000002983F0 ""
 *   insn=0x00000000002983F4 string=0x00000000002983F8 ""
 *   insn=0x00000000002983F8 string=0x00000000002983FC ""
 *   insn=0x0000000000298404 string=0x0000000000298408 ">"
 *   insn=0x000000000029840C string=0x0000000000298410 "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent(
        Caver::GenericMonsterControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _QWORD *v5; // x20
  _QWORD *v6; // x21
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 35);
  *(_QWORD *)&v3 = &off_6C1C48;
  *((_QWORD *)&v3 + 1) = &off_6C1C88;
  *(_QWORD *)this = off_6C1B30;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_QWORD *)*((_QWORD *)this + 29);
  v6 = (_QWORD *)*((_QWORD *)this + 30);
  if ( v5 != v6 )
  {
    do
    {
      v7 = (_DWORD *)*v5;
      if ( *v5 )
      {
        v8 = v7[2] - 1;
        v7[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      ++v5;
    }
    while ( v6 != v5 );
    v5 = (_QWORD *)*((_QWORD *)this + 29);
  }
  if ( v5 )
    operator delete(v5);
  v9 = (_DWORD *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 26) = &off_6BDF68;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
}

