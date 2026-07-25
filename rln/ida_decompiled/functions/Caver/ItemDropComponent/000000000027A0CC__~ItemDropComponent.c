/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027A0CC
 * Mangled: _ZN5Caver17ItemDropComponentD2Ev
 * Demangled: Caver::ItemDropComponent::~ItemDropComponent()
 *
 * Callers: 1
 *   0x0000000000200C50  Caver::ItemDropComponent::~ItemDropComponent()
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FC390  Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector()
 *   0x0000000000200C50  Caver::ItemDropComponent::~ItemDropComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000027A36C  Caver::ItemDropComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 85
 *   insn=0x000000000027A0DC string=0x000000000027A0E0 "U"
 *   insn=0x000000000027A0E4 string=0x000000000027A0E8 "I#"
 *   insn=0x000000000027A0E8 string=0x000000000027A0EC ")1@"
 *   insn=0x000000000027A0F4 string=0x000000000027A0F8 "t"
 *   insn=0x000000000027A0F8 string=0x000000000027A0FC "+"
 *   insn=0x000000000027A0FC string=0x000000000027A100 "`"
 *   insn=0x000000000027A100 string=0x000000000027A104 "("
 *   insn=0x000000000027A104 string=0x000000000027A108 "*A"
 *   insn=0x000000000027A110 string=0x000000000027A114 "j"
 *   insn=0x000000000027A114 string=0x000000000027A118 "`"
 *   insn=0x000000000027A11C string=0x000000000027A154 "t"
 *   insn=0x000000000027A124 string=0x000000000027A128 "@"
 *   insn=0x000000000027A128 string=0x000000000027A12C ""
 *   insn=0x000000000027A12C string=0x000000000027A130 ""
 *   insn=0x000000000027A134 string=0x000000000027A138 ""
 *   insn=0x000000000027A138 string=0x000000000027A13C ""
 *   insn=0x000000000027A14C string=0x000000000027A150 "tN@"
 *   insn=0x000000000027A154 string=0x000000000027A160 "`""
 *   insn=0x000000000027A158 string=0x000000000027A15C "U"
 *   insn=0x000000000027A15C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000027A164 string=0x000000000027A168 "hB@"
 *   insn=0x000000000027A164 string=0x00000000001FC390 "0'"
 *   insn=0x000000000027A168 string=0x000000000027A16C "T#"
 *   insn=0x000000000027A17C string=0x000000000027A180 "h>@"
 *   insn=0x000000000027A17C string=0x000000000027A1BC "I#"
 *   insn=0x000000000027A18C string=0x000000000027A1E0 "I#"
 *   insn=0x000000000027A194 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000027A1A4 string=0x000000000027A244 "#"
 *   insn=0x000000000027A1BC string=0x000000000027A1C0 ")=G"
 *   insn=0x000000000027A1C0 string=0x000000000027A1C4 "!"
 *   insn=0x000000000027A1C8 string=0x000000000027A1CC "\t"
 *   insn=0x000000000027A1C8 string=0x000000000027A204 "\t"
 *   insn=0x000000000027A1CC string=0x000000000027A1D0 "*"
 *   insn=0x000000000027A1D0 string=0x000000000027A1D4 "\n"
 *   insn=0x000000000027A1D8 string=0x000000000027A1DC ""
 *   insn=0x000000000027A1DC string=0x000000000027A210 "?"
 *   insn=0x000000000027A1E0 string=0x000000000027A1E4 ")=G"
 *   insn=0x000000000027A1E4 string=0x000000000027A1E8 "!"
 *   insn=0x000000000027A1EC string=0x000000000027A1F0 "\t"
 *   insn=0x000000000027A1EC string=0x000000000027A224 "\t"
 *   insn=0x000000000027A1F0 string=0x000000000027A1F4 "*"
 *   insn=0x000000000027A1F4 string=0x000000000027A1F8 "\n"
 *   insn=0x000000000027A200 string=0x000000000027A230 "?"
 *   insn=0x000000000027A204 string=0x000000000027A208 "*"
 *   insn=0x000000000027A208 string=0x000000000027A20C "\n"
 *   insn=0x000000000027A210 string=0x000000000027A214 "l"
 *   insn=0x000000000027A218 string=0x000000000027A21C "b"
 *   insn=0x000000000027A224 string=0x000000000027A228 "*"
 *   insn=0x000000000027A228 string=0x000000000027A22C "\n"
 *   insn=0x000000000027A238 string=0x000000000027A23C "Z"
 *   insn=0x000000000027A244 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000027A248 string=0x000000000027A24C ""
 *   insn=0x000000000027A24C string=0x000000000027A26C "hB@"
 *   insn=0x000000000027A254 string=0x000000000027A258 "h"
 *   insn=0x000000000027A258 string=0x000000000027A264 "`""
 *   insn=0x000000000027A264 string=0x000000000027A268 "J"
 *   insn=0x000000000027A26C string=0x000000000027A270 "U#"
 *   insn=0x000000000027A280 string=0x000000000027A284 "h>@"
 *   insn=0x000000000027A280 string=0x000000000027A2D4 "I#"
 *   insn=0x000000000027A290 string=0x000000000027A294 "I#"
 *   insn=0x000000000027A294 string=0x000000000027A298 ")=G"
 *   insn=0x000000000027A298 string=0x000000000027A29C "!"
 *   insn=0x000000000027A2A0 string=0x000000000027A2A4 "\t"
 *   insn=0x000000000027A2A0 string=0x000000000027A318 "\t"
 *   insn=0x000000000027A2A4 string=0x000000000027A2A8 "*"
 *   insn=0x000000000027A2A8 string=0x000000000027A2AC "\n"
 *   insn=0x000000000027A2B0 string=0x000000000027A2B4 "?"
 *   insn=0x000000000027A2B4 string=0x000000000027A2B8 "l"
 *   insn=0x000000000027A2BC string=0x000000000027A2C0 "9"
 *   insn=0x000000000027A2CC string=0x000000000027A2D0 "}"
 *   insn=0x000000000027A2D4 string=0x000000000027A2D8 ")=G"
 *   insn=0x000000000027A2D8 string=0x000000000027A2DC "!"
 *   insn=0x000000000027A2E0 string=0x000000000027A2E4 "\t"
 *   insn=0x000000000027A2E0 string=0x000000000027A2F8 "\t"
 *   insn=0x000000000027A2E4 string=0x000000000027A2E8 "*"
 *   insn=0x000000000027A2E8 string=0x000000000027A2EC "\n"
 *   insn=0x000000000027A2F4 string=0x000000000027A304 "?"
 *   insn=0x000000000027A2F8 string=0x000000000027A2FC "*"
 *   insn=0x000000000027A2FC string=0x000000000027A300 "\n"
 *   insn=0x000000000027A30C string=0x000000000027A310 "%"
 *   insn=0x000000000027A318 string=0x000000000027A31C "*"
 *   insn=0x000000000027A31C string=0x000000000027A320 "\n"
 *   insn=0x000000000027A320 string=0x000000000027A324 "?"
 *   insn=0x000000000027A340 string=0x000000000027A344 "C"
 *   insn=0x000000000027A364 string=0x000000000027A368 "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemDropComponent::~ItemDropComponent(Caver::ItemDropComponent *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  __int128 v4; // q0
  _DWORD *v5; // x0
  int v6; // w8
  __int64 v7; // x8
  void *v8; // x0
  __int64 v9; // x8
  void *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 19);
  v3 = (_QWORD *)*((_QWORD *)this + 20);
  *(_QWORD *)&v4 = &off_6BF528;
  *((_QWORD *)&v4 + 1) = &off_6BF568;
  *(_QWORD *)this = off_6BF410;
  *((_OWORD *)this + 1) = v4;
  if ( v2 != v3 )
  {
    do
    {
      v5 = (_DWORD *)*v2;
      if ( *v2 )
      {
        v6 = v5[2] - 1;
        v5[2] = v6;
        if ( !v6 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)*((_QWORD *)this + 19);
  }
  if ( v2 )
    operator delete(v2);
  Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector();
  v7 = *((_QWORD *)this + 16);
  v8 = (void *)(v7 - 24);
  if ( (__int64 *)(v7 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v7 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v8);
  }
  v9 = *((_QWORD *)this + 15);
  v10 = (void *)(v9 - 24);
  if ( (__int64 *)(v9 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v9 - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v10);
  }
  Caver::Component::~Component(this);
}

