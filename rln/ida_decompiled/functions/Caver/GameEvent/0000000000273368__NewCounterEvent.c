/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000273368
 * Mangled: _ZN5Caver9GameEvent15NewCounterEventERKSsi
 * Demangled: Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *
 * Callers: 1
 *   0x0000000000202BC0  Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBFF0  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
 *   0x00000000001FE720  std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 53
 *   insn=0x0000000000273378 string=0x000000000027337C "V"
 *   insn=0x0000000000273394 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002733A4 string=0x00000000002733A8 "h"
 *   insn=0x00000000002733A8 string=0x00000000002733AC "?"
 *   insn=0x00000000002733B0 string=0x00000000002733B4 "i"
 *   insn=0x00000000002733B4 string=0x00000000002733B8 "_"
 *   insn=0x00000000002733BC string=0x00000000002733C0 "j"
 *   insn=0x00000000002733C4 string=0x000000000059145F "name"
 *   insn=0x00000000002733D4 string=0x00000000002733D8 "`""
 *   insn=0x0000000000273404 string=0x0000000000588455 "amount"
 *   insn=0x0000000000273414 string=0x0000000000273418 "`"
 *   insn=0x0000000000273420 string=0x00000000001FBFF0 "0'"
 *   insn=0x0000000000273440 string=0x0000000000273444 "!"
 *   insn=0x0000000000273444 string=0x00000000002734E8 "z"
 *   insn=0x0000000000273460 string=0x0000000000273464 ")=G"
 *   insn=0x0000000000273464 string=0x0000000000273468 "!"
 *   insn=0x000000000027346C string=0x0000000000273470 "\t"
 *   insn=0x000000000027346C string=0x00000000002734A8 "\t"
 *   insn=0x0000000000273470 string=0x0000000000273474 "*"
 *   insn=0x0000000000273474 string=0x0000000000273478 "\n"
 *   insn=0x000000000027347C string=0x0000000000273480 ""
 *   insn=0x0000000000273480 string=0x00000000002734B4 "?"
 *   insn=0x0000000000273484 string=0x0000000000273488 ")=G"
 *   insn=0x0000000000273488 string=0x000000000027348C "!"
 *   insn=0x0000000000273490 string=0x0000000000273494 "\t"
 *   insn=0x0000000000273490 string=0x00000000002734C8 "\t"
 *   insn=0x0000000000273494 string=0x0000000000273498 "*"
 *   insn=0x0000000000273498 string=0x000000000027349C "\n"
 *   insn=0x00000000002734A4 string=0x00000000002734D4 "?"
 *   insn=0x00000000002734A8 string=0x00000000002734AC "*"
 *   insn=0x00000000002734AC string=0x00000000002734B0 "\n"
 *   insn=0x00000000002734B4 string=0x00000000002734B8 "l"
 *   insn=0x00000000002734C8 string=0x00000000002734CC "*"
 *   insn=0x00000000002734CC string=0x00000000002734D0 "\n"
 *   insn=0x00000000002734E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002734F0 string=0x00000000002734F4 "(a"
 *   insn=0x0000000000273500 string=0x0000000000273504 "J=G"
 *   insn=0x0000000000273504 string=0x0000000000273508 ")!"
 *   insn=0x000000000027350C string=0x0000000000273510 "*"
 *   insn=0x000000000027350C string=0x0000000000273584 "*"
 *   insn=0x0000000000273510 string=0x0000000000273514 "K"
 *   insn=0x0000000000273514 string=0x0000000000273518 "+"
 *   insn=0x0000000000273520 string=0x0000000000273568 "_"
 *   insn=0x0000000000273530 string=0x0000000000273534 "J"
 *   insn=0x0000000000273538 string=0x000000000027353C "(a"
 *   insn=0x0000000000273548 string=0x000000000027354C "J=G"
 *   insn=0x000000000027354C string=0x0000000000273550 ")!"
 *   insn=0x0000000000273554 string=0x0000000000273558 "*"
 *   insn=0x0000000000273558 string=0x000000000027355C "K"
 *   insn=0x000000000027355C string=0x0000000000273560 "+"
 *   insn=0x0000000000273584 string=0x0000000000273588 "K"
 *   insn=0x0000000000273588 string=0x000000000027358C "+"
 *   insn=0x000000000027358C string=0x0000000000273590 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameEvent::NewCounterEvent(__int64 a1, int a2)
{
  __int64 v3; // x19
  __int64 v4; // x0
  void *v5; // x0
  _DWORD *v6; // x0
  void *v7; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  _QWORD v13[3]; // [xsp+8h] [xbp-38h] BYREF

  v13[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = operator new(0x68u);
  *(_DWORD *)v3 = 2;
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 32) = v3 + 16;
  *(_QWORD *)(v3 + 40) = v3 + 16;
  *(_QWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 64) = 0;
  *(_QWORD *)(v3 + 72) = 0;
  *(_QWORD *)(v3 + 80) = v3 + 64;
  *(_QWORD *)(v3 + 88) = v3 + 64;
  *(_QWORD *)(v3 + 96) = 0;
  sub_566BB8((int)v13, "name");
  v4 = std::map<std::string,std::string>::operator[]();
  sub_56A6A8(v4);
  v5 = (void *)(v13[0] - 24LL);
  if ( (__int64 *)(v13[0] - 24LL) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v13[0] - 8LL);
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
      operator delete(v5);
  }
  sub_566BB8((int)v13, "amount");
  std::map<std::string,int>::operator[]();
  *v6 = a2;
  v7 = (void *)(v13[0] - 24LL);
  if ( (__int64 *)(v13[0] - 24LL) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v13[0] - 8LL);
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
      operator delete(v7);
  }
  return v3;
}

