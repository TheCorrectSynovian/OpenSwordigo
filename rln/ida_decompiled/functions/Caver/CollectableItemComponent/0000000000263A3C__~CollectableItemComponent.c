/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000263A3C
 * Mangled: _ZN5Caver24CollectableItemComponentD2Ev
 * Demangled: Caver::CollectableItemComponent::~CollectableItemComponent()
 *
 * Callers: 1
 *   0x0000000000202E80  Caver::CollectableItemComponent::~CollectableItemComponent()
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x0000000000202E80  Caver::CollectableItemComponent::~CollectableItemComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000263C74  Caver::CollectableItemComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 64
 *   insn=0x0000000000263A4C string=0x0000000000263A50 "$"
 *   insn=0x0000000000263A50 string=0x0000000000263A54 "T"
 *   insn=0x0000000000263A54 string=0x0000000000263A58 "Y@"
 *   insn=0x0000000000263A60 string=0x0000000000263A64 "`B"
 *   insn=0x0000000000263A64 string=0x0000000000263A68 ""
 *   insn=0x0000000000263A68 string=0x0000000000263A6C "\nA"
 *   insn=0x0000000000263A6C string=0x0000000000263A70 ""
 *   insn=0x0000000000263A70 string=0x0000000000263A74 "`"
 *   insn=0x0000000000263A7C string=0x0000000000263A80 "j"
 *   insn=0x0000000000263A80 string=0x0000000000263A84 "`"
 *   insn=0x0000000000263A84 string=0x0000000000263A88 ":p"
 *   insn=0x0000000000263A88 string=0x0000000000263A8C "hB@"
 *   insn=0x0000000000263AA0 string=0x0000000000263AA4 "h>@"
 *   insn=0x0000000000263AA0 string=0x0000000000263AE0 "\t$"
 *   insn=0x0000000000263AB0 string=0x0000000000263B04 "\t$"
 *   insn=0x0000000000263AB8 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000263AE0 string=0x0000000000263AE4 ")=G"
 *   insn=0x0000000000263AE4 string=0x0000000000263AE8 "!"
 *   insn=0x0000000000263AEC string=0x0000000000263AF0 "\t"
 *   insn=0x0000000000263AEC string=0x0000000000263B28 "\t"
 *   insn=0x0000000000263AF0 string=0x0000000000263AF4 "*"
 *   insn=0x0000000000263AF4 string=0x0000000000263AF8 "\n"
 *   insn=0x0000000000263AFC string=0x0000000000263B00 ""
 *   insn=0x0000000000263B00 string=0x0000000000263B34 "?"
 *   insn=0x0000000000263B04 string=0x0000000000263B08 ")=G"
 *   insn=0x0000000000263B08 string=0x0000000000263B0C "!"
 *   insn=0x0000000000263B10 string=0x0000000000263B14 "\t"
 *   insn=0x0000000000263B10 string=0x0000000000263B48 "\t"
 *   insn=0x0000000000263B14 string=0x0000000000263B18 "*"
 *   insn=0x0000000000263B18 string=0x0000000000263B1C "\n"
 *   insn=0x0000000000263B24 string=0x0000000000263B54 "?"
 *   insn=0x0000000000263B28 string=0x0000000000263B2C "*"
 *   insn=0x0000000000263B2C string=0x0000000000263B30 "\n"
 *   insn=0x0000000000263B34 string=0x0000000000263B38 "l"
 *   insn=0x0000000000263B48 string=0x0000000000263B4C "*"
 *   insn=0x0000000000263B4C string=0x0000000000263B50 "\n"
 *   insn=0x0000000000263B68 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000263B78 string=0x0000000000263B7C "(a"
 *   insn=0x0000000000263B84 string=0x0000000000263B88 "h>@"
 *   insn=0x0000000000263B84 string=0x0000000000263BD8 "\n$"
 *   insn=0x0000000000263B94 string=0x0000000000263B98 "\t$"
 *   insn=0x0000000000263B98 string=0x0000000000263B9C ")=G"
 *   insn=0x0000000000263B9C string=0x0000000000263BA0 "!"
 *   insn=0x0000000000263BA4 string=0x0000000000263BA8 "\t"
 *   insn=0x0000000000263BA4 string=0x0000000000263C20 "\t"
 *   insn=0x0000000000263BA8 string=0x0000000000263BAC "*"
 *   insn=0x0000000000263BAC string=0x0000000000263BB0 "\n"
 *   insn=0x0000000000263BB4 string=0x0000000000263BB8 "?"
 *   insn=0x0000000000263BB8 string=0x0000000000263BBC "l"
 *   insn=0x0000000000263BC8 string=0x0000000000263BCC "AZ"
 *   insn=0x0000000000263BD0 string=0x0000000000263BD4 "<w"
 *   insn=0x0000000000263BD8 string=0x0000000000263BDC "J=G"
 *   insn=0x0000000000263BDC string=0x0000000000263BE0 ")!"
 *   insn=0x0000000000263BE4 string=0x0000000000263BE8 "*"
 *   insn=0x0000000000263BE4 string=0x0000000000263BFC "*"
 *   insn=0x0000000000263BE8 string=0x0000000000263BEC "K"
 *   insn=0x0000000000263BEC string=0x0000000000263BF0 "+"
 *   insn=0x0000000000263BF8 string=0x0000000000263C08 "_"
 *   insn=0x0000000000263BFC string=0x0000000000263C00 "K"
 *   insn=0x0000000000263C00 string=0x0000000000263C04 "+"
 *   insn=0x0000000000263C20 string=0x0000000000263C24 "*"
 *   insn=0x0000000000263C24 string=0x0000000000263C28 "\n"
 *   insn=0x0000000000263C28 string=0x0000000000263C2C "?"
 *   insn=0x0000000000263C5C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollectableItemComponent::~CollectableItemComponent(Caver::CollectableItemComponent *this)
{
  __int128 v2; // q0
  __int64 v3; // x8
  void *v4; // x0
  __int64 v5; // x8
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9

  *(_QWORD *)&v2 = &off_6BE458;
  *((_QWORD *)&v2 + 1) = &off_6BE498;
  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)this = off_6BE340;
  *((_OWORD *)this + 1) = v2;
  Caver::Program::~Program((Caver::CollectableItemComponent *)((char *)this + 144));
  v3 = *((_QWORD *)this + 16);
  v4 = (void *)(v3 - 24);
  if ( (__int64 *)(v3 - 24) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v3 - 8);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v4);
  }
  v5 = *((_QWORD *)this + 15);
  v6 = (void *)(v5 - 24);
  if ( (__int64 *)(v5 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v5 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v6);
  }
  Caver::Component::~Component(this);
}

