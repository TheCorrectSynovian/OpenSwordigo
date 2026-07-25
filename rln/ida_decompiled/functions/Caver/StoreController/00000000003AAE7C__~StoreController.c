/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AAE7C
 * Mangled: _ZN5Caver15StoreControllerD2Ev
 * Demangled: Caver::StoreController::~StoreController()
 *
 * Callers: 1
 *   0x00000000003AA898  Caver::StoreController::ResetProductUnlocksToPurchases(void)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 22
 *   insn=0x00000000003AAE88 string=0x00000000003AAE8C "S"
 *   insn=0x00000000003AAE8C string=0x00000000003AAE90 "i"
 *   insn=0x00000000003AAEA0 string=0x00000000003AAEA4 "\t"
 *   insn=0x00000000003AAEA4 string=0x00000000003AAEA8 "J=C"
 *   insn=0x00000000003AAEA8 string=0x00000000003AAEAC "k"
 *   insn=0x00000000003AAEAC string=0x00000000003AAEB0 " a"
 *   insn=0x00000000003AAEB0 string=0x00000000003AAEB4 "JA"
 *   insn=0x00000000003AAEB8 string=0x00000000003AAEBC "\n"
 *   insn=0x00000000003AAEBC string=0x00000000003AAEC0 "!"
 *   insn=0x00000000003AAEC0 string=0x00000000003AAEC4 "h"
 *   insn=0x00000000003AAEE4 string=0x00000000003AAEE8 "J=G"
 *   insn=0x00000000003AAEE8 string=0x00000000003AAEEC "(!"
 *   insn=0x00000000003AAEF0 string=0x00000000003AAEF4 "\t"
 *   insn=0x00000000003AAEF0 string=0x00000000003AAF08 "\t"
 *   insn=0x00000000003AAEF4 string=0x00000000003AAEF8 "*"
 *   insn=0x00000000003AAEF8 string=0x00000000003AAEFC "\n"
 *   insn=0x00000000003AAF04 string=0x00000000003AAF14 "?"
 *   insn=0x00000000003AAF08 string=0x00000000003AAF0C "*"
 *   insn=0x00000000003AAF0C string=0x00000000003AAF10 "\n"
 *   insn=0x00000000003AAF14 string=0x00000000003AAF18 "l"
 *   insn=0x00000000003AAF1C string=0x00000000003AAF20 "!"
 *   insn=0x00000000003AAF28 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreController::~StoreController(Caver::StoreController *this)
{
  __int64 v2; // x9
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 1);
  v3 = (void *)(v2 - 24);
  *(_QWORD *)this = off_6CEC48;
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v2 - 8);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
}

