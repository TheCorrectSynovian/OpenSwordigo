/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004790DC
 * Mangled: Java_com_touchfoo_swordigo_Native_textInputTextDidChange
 * Demangled: Java_com_touchfoo_swordigo_Native_textInputTextDidChange
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 58
 *   insn=0x00000000004790E8 string=0x00000000004790EC "S"
 *   insn=0x00000000004790EC string=0x00000000004790F0 "h"
 *   insn=0x00000000004790FC string=0x0000000000479100 "H"
 *   insn=0x0000000000479100 string=0x0000000000479104 ""
 *   insn=0x0000000000479100 string=0x0000000000479168 "h"
 *   insn=0x000000000047910C string=0x0000000000479110 ""
 *   insn=0x0000000000479128 string=0x000000000047912C ""
 *   insn=0x000000000047912C string=0x0000000000479130 "\t"
 *   insn=0x0000000000479138 string=0x000000000047913C " "
 *   insn=0x0000000000479140 string=0x0000000000479144 "h"
 *   insn=0x0000000000479144 string=0x0000000000479148 ""
 *   insn=0x0000000000479148 string=0x000000000047914C " a"
 *   insn=0x0000000000479154 string=0x0000000000479188 "J"
 *   insn=0x0000000000479158 string=0x000000000047915C " a"
 *   insn=0x0000000000479160 string=0x0000000000479164 "A"
 *   insn=0x0000000000479164 string=0x00000000004791AC "J"
 *   insn=0x0000000000479170 string=0x0000000000479174 "!"
 *   insn=0x0000000000479174 string=0x0000000000479218 "."
 *   insn=0x0000000000479188 string=0x000000000047918C "J=G"
 *   insn=0x000000000047918C string=0x0000000000479190 ")!"
 *   insn=0x0000000000479194 string=0x0000000000479198 "*"
 *   insn=0x0000000000479194 string=0x00000000004791D0 "*"
 *   insn=0x0000000000479198 string=0x000000000047919C "K"
 *   insn=0x000000000047919C string=0x00000000004791A0 "+"
 *   insn=0x00000000004791A4 string=0x00000000004791A8 ""
 *   insn=0x00000000004791A8 string=0x00000000004791DC "_"
 *   insn=0x00000000004791AC string=0x00000000004791B0 "J=G"
 *   insn=0x00000000004791B0 string=0x00000000004791B4 "(!"
 *   insn=0x00000000004791B4 string=0x00000000004791B8 "\n"
 *   insn=0x00000000004791B8 string=0x00000000004791BC "\t"
 *   insn=0x00000000004791B8 string=0x00000000004791F8 "\t"
 *   insn=0x00000000004791BC string=0x00000000004791C0 "*"
 *   insn=0x00000000004791C0 string=0x00000000004791C4 "\n"
 *   insn=0x00000000004791CC string=0x0000000000479204 "?"
 *   insn=0x00000000004791D0 string=0x00000000004791D4 "K"
 *   insn=0x00000000004791D4 string=0x00000000004791D8 "+"
 *   insn=0x00000000004791E8 string=0x00000000004791EC "n"
 *   insn=0x00000000004791F8 string=0x00000000004791FC "*"
 *   insn=0x00000000004791FC string=0x0000000000479200 "\n"
 *   insn=0x000000000047920C string=0x0000000000479210 "e"
 *   insn=0x0000000000479218 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047921C string=0x0000000000479220 "j"
 *   insn=0x0000000000479220 string=0x0000000000479224 "J"
 *   insn=0x0000000000479228 string=0x000000000047922C "(a"
 *   insn=0x0000000000479234 string=0x0000000000479238 "J"
 *   insn=0x0000000000479238 string=0x000000000047923C "J=G"
 *   insn=0x000000000047923C string=0x0000000000479240 ")!"
 *   insn=0x0000000000479244 string=0x0000000000479248 "*"
 *   insn=0x0000000000479244 string=0x0000000000479274 "*"
 *   insn=0x0000000000479248 string=0x000000000047924C "K"
 *   insn=0x000000000047924C string=0x0000000000479250 "+"
 *   insn=0x0000000000479254 string=0x0000000000479258 "_"
 *   insn=0x0000000000479264 string=0x0000000000479268 "O"
 *   insn=0x0000000000479274 string=0x0000000000479278 "K"
 *   insn=0x0000000000479278 string=0x000000000047927C "+"
 *   insn=0x000000000047927C string=0x0000000000479280 "_"
 *   insn=0x0000000000479298 string=0x000000000047929C ""
 *   insn=0x00000000004792A0 string=0x00000000004792A4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Java_com_touchfoo_swordigo_Native_textInputTextDidChange(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // x0
  void *v4; // x0
  void *v5; // x0
  unsigned int *v6; // x9
  int v7; // w10
  unsigned int *v8; // x8
  int v9; // w9
  __int64 v10; // [xsp+0h] [xbp-30h] BYREF
  _QWORD v11[3]; // [xsp+8h] [xbp-28h] BYREF

  v11[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( qword_6E9CB0 )
  {
    v3 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1352LL))(a1, a3, 0);
    sub_566BB8((int)v11, v3);
    (**(void (__fastcall ***)(__int64 *__return_ptr, __int64, _QWORD *))qword_6E9CB0)(&v10, qword_6E9CB0, v11);
    v4 = (void *)(v10 - 24);
    if ( (__int64 *)(v10 - 24) != &qword_6FD2E0 )
    {
      v6 = (unsigned int *)(v10 - 8);
      if ( &pthread_create )
      {
        do
          v7 = __ldaxr(v6);
        while ( __stlxr(v7 - 1, v6) );
      }
      else
      {
        v7 = (*v6)--;
      }
      if ( v7 <= 0 )
        operator delete(v4);
    }
    v5 = (void *)(v11[0] - 24LL);
    if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
    {
      v8 = (unsigned int *)(v11[0] - 8LL);
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
        operator delete(v5);
    }
  }
}

