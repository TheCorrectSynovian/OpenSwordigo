/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AAF2C
 * Mangled: _ZN5Caver15StoreControllerD0Ev
 * Demangled: Caver::StoreController::~StoreController()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 19
 *   insn=0x00000000003AAF38 string=0x00000000003AAF3C "T"
 *   insn=0x00000000003AAF50 string=0x00000000003AAF54 "h"
 *   insn=0x00000000003AAF54 string=0x00000000003AAF58 ")=C"
 *   insn=0x00000000003AAF58 string=0x00000000003AAF5C "J"
 *   insn=0x00000000003AAF60 string=0x00000000003AAF64 ")A"
 *   insn=0x00000000003AAF68 string=0x00000000003AAF6C "i"
 *   insn=0x00000000003AAF6C string=0x00000000003AAF70 "a"
 *   insn=0x00000000003AAF78 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003AAF9C string=0x00000000003AAFA0 ")=G"
 *   insn=0x00000000003AAFA0 string=0x00000000003AAFA4 "!"
 *   insn=0x00000000003AAFA8 string=0x00000000003AAFAC "\t"
 *   insn=0x00000000003AAFA8 string=0x00000000003AAFC0 "\t"
 *   insn=0x00000000003AAFAC string=0x00000000003AAFB0 "*"
 *   insn=0x00000000003AAFB0 string=0x00000000003AAFB4 "\n"
 *   insn=0x00000000003AAFBC string=0x00000000003AAFCC "?"
 *   insn=0x00000000003AAFC0 string=0x00000000003AAFC4 "*"
 *   insn=0x00000000003AAFC4 string=0x00000000003AAFC8 "\n"
 *   insn=0x00000000003AAFCC string=0x00000000003AAFD0 ","
 *   insn=0x00000000003AAFE0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreController::~StoreController(Caver::StoreController *this)
{
  __int64 v2; // x8
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
  operator delete(this);
}

