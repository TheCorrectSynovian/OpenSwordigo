/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000242488
 * Mangled: _ZNK5Caver9Component16BindingForOutletEi
 * Demangled: Caver::Component::BindingForOutlet(int)
 *
 * Callers: 1
 *   0x00000000001FC780  Caver::Component::BindingForOutlet(int)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 62
 *   insn=0x0000000000242494 string=0x0000000000242498 "T"
 *   insn=0x00000000002424A4 string=0x00000000002424A8 "\n(@"
 *   insn=0x00000000002424A8 string=0x00000000002424AC " "
 *   insn=0x00000000002424B0 string=0x00000000002424B4 "*"
 *   insn=0x00000000002424B4 string=0x00000000002424B8 "K!@"
 *   insn=0x00000000002424B4 string=0x00000000002424D8 "?"
 *   insn=0x00000000002424B8 string=0x00000000002424BC "La"
 *   insn=0x00000000002424BC string=0x00000000002424C0 "MA"
 *   insn=0x00000000002424C8 string=0x00000000002424CC ")"
 *   insn=0x00000000002424CC string=0x00000000002424D0 "j"
 *   insn=0x00000000002424D0 string=0x00000000002424D4 "*"
 *   insn=0x00000000002424D8 string=0x00000000002424DC " "
 *   insn=0x00000000002424DC string=0x00000000002424E0 "*!@"
 *   insn=0x00000000002424DC string=0x0000000000242520 "a"
 *   insn=0x00000000002424E0 string=0x00000000002424E4 "_"
 *   insn=0x00000000002424E4 string=0x00000000002424E8 "\t"
 *   insn=0x00000000002424E8 string=0x00000000002424EC "?"
 *   insn=0x00000000002424F0 string=0x00000000002424F4 "()@"
 *   insn=0x00000000002424F4 string=0x00000000002424F8 "!"
 *   insn=0x00000000002424F8 string=0x00000000002424FC "`""
 *   insn=0x00000000002424FC string=0x0000000000242500 "h"
 *   insn=0x0000000000242500 string=0x0000000000242504 "\t"
 *   insn=0x0000000000242504 string=0x0000000000242508 ""
 *   insn=0x0000000000242510 string=0x0000000000242514 "h"
 *   insn=0x0000000000242514 string=0x0000000000242518 "`\n"
 *   insn=0x0000000000242540 string=0x0000000000242544 "\t"
 *   insn=0x0000000000242548 string=0x000000000024254C " "
 *   insn=0x000000000024254C string=0x0000000000242550 "\t%"
 *   insn=0x0000000000242550 string=0x0000000000242554 ")"
 *   insn=0x0000000000242558 string=0x000000000024255C "`\n"
 *   insn=0x0000000000242564 string=0x0000000000242568 "!"
 *   insn=0x0000000000242568 string=0x000000000024258C "\t%"
 *   insn=0x0000000000242578 string=0x00000000002425D0 "@"
 *   insn=0x000000000024258C string=0x0000000000242590 ")=G"
 *   insn=0x0000000000242590 string=0x0000000000242594 "!"
 *   insn=0x0000000000242598 string=0x000000000024259C "\t"
 *   insn=0x0000000000242598 string=0x00000000002425B0 "\t"
 *   insn=0x000000000024259C string=0x00000000002425A0 "*"
 *   insn=0x00000000002425A0 string=0x00000000002425A4 "\n"
 *   insn=0x00000000002425AC string=0x00000000002425BC "?"
 *   insn=0x00000000002425B0 string=0x00000000002425B4 "*"
 *   insn=0x00000000002425B4 string=0x00000000002425B8 "\n"
 *   insn=0x00000000002425BC string=0x00000000002425C0 "l"
 *   insn=0x00000000002425C4 string=0x00000000002425C8 "w"
 *   insn=0x00000000002425D0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002425D4 string=0x00000000002425D8 "\n%"
 *   insn=0x00000000002425D8 string=0x00000000002425DC "J"
 *   insn=0x00000000002425E0 string=0x00000000002425E4 "(a"
 *   insn=0x00000000002425EC string=0x00000000002425F0 "\n%"
 *   insn=0x00000000002425F0 string=0x00000000002425F4 "J=G"
 *   insn=0x00000000002425F4 string=0x00000000002425F8 ")!"
 *   insn=0x00000000002425FC string=0x0000000000242600 "*"
 *   insn=0x00000000002425FC string=0x000000000024262C "*"
 *   insn=0x0000000000242600 string=0x0000000000242604 "K"
 *   insn=0x0000000000242604 string=0x0000000000242608 "+"
 *   insn=0x000000000024260C string=0x0000000000242610 "_"
 *   insn=0x000000000024261C string=0x0000000000242620 "a"
 *   insn=0x000000000024262C string=0x0000000000242630 "K"
 *   insn=0x0000000000242630 string=0x0000000000242634 "+"
 *   insn=0x0000000000242634 string=0x0000000000242638 "_"
 *   insn=0x0000000000242648 string=0x000000000024264C "Y"
 *   insn=0x000000000024264C string=0x00000000001FB3B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::Component::BindingForOutlet(Caver::Component *this@<X0>, int a2@<W1>, __int64 a3@<X8>)
{
  char *v4; // x10
  char *v5; // x8
  char *v6; // x9
  int v7; // w11
  bool v8; // cc
  char **v9; // x11
  __int64 v10; // x8
  __int64 *v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  _QWORD v14[3]; // [xsp+8h] [xbp-28h] BYREF

  v14[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (char *)*((_QWORD *)this + 10);
  v5 = (char *)this + 72;
  v6 = (char *)this + 72;
  if ( v4 )
  {
    do
    {
      v7 = *((_DWORD *)v4 + 8);
      v8 = v7 < a2;
      if ( v7 >= a2 )
        v9 = (char **)(v4 + 16);
      else
        v9 = (char **)(v4 + 24);
      if ( !v8 )
        v6 = v4;
      v4 = *v9;
    }
    while ( *v9 );
  }
  if ( v6 == v5 )
    goto LABEL_13;
  if ( *((_DWORD *)v6 + 8) > a2 )
    v6 = (char *)this + 72;
  if ( v6 == v5 )
  {
LABEL_13:
    sub_566BB8((int)v14, "");
    *(_DWORD *)a3 = 0;
    sub_56A528(a3 + 8, v14);
    v10 = v14[0];
    v11 = (__int64 *)(v14[0] - 24LL);
    *(_QWORD *)(a3 + 16) = 0x200000001LL;
    *(_DWORD *)(a3 + 24) = 0;
    if ( v11 != &qword_6FD2E0 )
    {
      v12 = (unsigned int *)(v10 - 8);
      if ( &pthread_create )
      {
        do
          v13 = __ldaxr(v12);
        while ( __stlxr(v13 - 1, v12) );
      }
      else
      {
        v13 = (*v12)--;
      }
      if ( v13 <= 0 )
        operator delete(v11);
    }
  }
  else
  {
    *(_DWORD *)a3 = *((_DWORD *)v6 + 10);
    sub_56A528(a3 + 8, v6 + 48);
    *(_DWORD *)(a3 + 24) = 1;
    *(_QWORD *)(a3 + 16) = 0x200000001LL;
  }
}

