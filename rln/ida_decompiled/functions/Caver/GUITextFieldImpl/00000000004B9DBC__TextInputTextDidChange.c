/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B9DBC
 * Mangled: _ZN5Caver16GUITextFieldImpl22TextInputTextDidChangeERKSs
 * Demangled: Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FAEC0  Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&)
 *
 * Callees: 11
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000568CB8  sub_568CB8
 *   0x0000000000568EA8  sub_568EA8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 69
 *   insn=0x00000000004B9DD0 string=0x00000000004B9DD4 "V"
 *   insn=0x00000000004B9E00 string=0x00000000004B9E04 "h"
 *   insn=0x00000000004B9E04 string=0x00000000004B9E08 "\t"
 *   insn=0x00000000004B9E08 string=0x00000000004B9E0C "I"
 *   insn=0x00000000004B9E18 string=0x00000000004B9E1C "\n"
 *   insn=0x00000000004B9E1C string=0x00000000004B9E20 "8y@"
 *   insn=0x00000000004B9E24 string=0x00000000004B9E34 "\t"
 *   insn=0x00000000004B9E2C string=0x00000000004B9E30 "h"
 *   insn=0x00000000004B9E34 string=0x00000000004B9E38 "\ni"
 *   insn=0x00000000004B9E38 string=0x00000000004B9E3C "k"
 *   insn=0x00000000004B9E3C string=0x00000000004B9E40 "k"
 *   insn=0x00000000004B9E44 string=0x00000000004B9E48 "i"
 *   insn=0x00000000004B9E48 string=0x00000000004B9E4C ")yj"
 *   insn=0x00000000004B9E4C string=0x00000000004B9E50 "i"
 *   insn=0x00000000004B9E70 string=0x00000000004B9E74 "h"
 *   insn=0x00000000004B9E84 string=0x00000000004B9E88 "_"
 *   insn=0x00000000004B9E88 string=0x00000000004B9E8C "h"
 *   insn=0x00000000004B9E98 string=0x00000000004B9E9C ")"
 *   insn=0x00000000004B9E9C string=0x00000000004B9EA0 "_"
 *   insn=0x00000000004B9EAC string=0x00000000001F5190 "P'"
 *   insn=0x00000000004B9EB4 string=0x00000000004B9EB8 ""
 *   insn=0x00000000004B9EE8 string=0x00000000004B9EEC ""
 *   insn=0x00000000004B9F10 string=0x00000000004B9F14 "i"
 *   insn=0x00000000004B9F14 string=0x00000000004B9F18 ")"
 *   insn=0x00000000004B9F20 string=0x00000000004B9F24 "a"
 *   insn=0x00000000004B9F24 string=0x00000000004B9F50 "I"
 *   insn=0x00000000004B9F50 string=0x00000000004B9F54 ")=G"
 *   insn=0x00000000004B9F54 string=0x00000000004B9F58 "!"
 *   insn=0x00000000004B9F5C string=0x00000000004B9F60 "\t"
 *   insn=0x00000000004B9F5C string=0x00000000004B9F74 "\t"
 *   insn=0x00000000004B9F60 string=0x00000000004B9F64 "*"
 *   insn=0x00000000004B9F64 string=0x00000000004B9F68 "\n"
 *   insn=0x00000000004B9F70 string=0x00000000004B9F80 "?"
 *   insn=0x00000000004B9F74 string=0x00000000004B9F78 "*"
 *   insn=0x00000000004B9F78 string=0x00000000004B9F7C "\n"
 *   insn=0x00000000004B9F80 string=0x00000000004B9F84 ","
 *   insn=0x00000000004B9F94 string=0x0000000000595C57 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x00000000004B9F98 string=0x00000000005979CD "basic_string::erase"
 *   insn=0x00000000004B9F9C string=0x00000000004B9FA0 "!4'"
 *   insn=0x00000000004B9FAC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B9FB0 string=0x00000000004B9FC0 "h"
 *   insn=0x00000000004B9FB4 string=0x00000000004B9FB8 "\t"
 *   insn=0x00000000004B9FC0 string=0x00000000004B9FC4 "i"
 *   insn=0x00000000004B9FC4 string=0x00000000004B9FC8 ")"
 *   insn=0x00000000004B9FD8 string=0x00000000004BA02C "I"
 *   insn=0x00000000004B9FDC string=0x00000000004B9FE0 "i"
 *   insn=0x00000000004B9FE0 string=0x00000000004B9FE4 ")"
 *   insn=0x00000000004B9FF0 string=0x00000000004B9FF4 "I"
 *   insn=0x00000000004B9FF4 string=0x00000000004B9FF8 ")=G"
 *   insn=0x00000000004B9FF8 string=0x00000000004B9FFC "!"
 *   insn=0x00000000004BA000 string=0x00000000004BA004 "\t"
 *   insn=0x00000000004BA000 string=0x00000000004BA070 "\t"
 *   insn=0x00000000004BA004 string=0x00000000004BA008 "*"
 *   insn=0x00000000004BA008 string=0x00000000004BA00C "\n"
 *   insn=0x00000000004BA010 string=0x00000000004BA014 "?"
 *   insn=0x00000000004BA014 string=0x00000000004BA018 "l"
 *   insn=0x00000000004BA024 string=0x00000000004BA028 "'"
 *   insn=0x00000000004BA02C string=0x00000000004BA030 ")=G"
 *   insn=0x00000000004BA030 string=0x00000000004BA034 "!"
 *   insn=0x00000000004BA038 string=0x00000000004BA03C "\t"
 *   insn=0x00000000004BA038 string=0x00000000004BA050 "\t"
 *   insn=0x00000000004BA03C string=0x00000000004BA040 "*"
 *   insn=0x00000000004BA040 string=0x00000000004BA044 "\n"
 *   insn=0x00000000004BA04C string=0x00000000004BA05C "?"
 *   insn=0x00000000004BA050 string=0x00000000004BA054 "*"
 *   insn=0x00000000004BA054 string=0x00000000004BA058 "\n"
 *   insn=0x00000000004BA070 string=0x00000000004BA074 "*"
 *   insn=0x00000000004BA074 string=0x00000000004BA078 "\n"
 *   insn=0x00000000004BA078 string=0x00000000004BA07C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GUITextFieldImpl::TextInputTextDidChange(
        Caver::GUILabel **a1@<X0>,
        __int64 a2@<X1>,
        const void **a3@<X8>)
{
  _DWORD *v6; // x8
  unsigned __int64 v7; // x21
  int v8; // w23
  __int64 v9; // x24
  __int64 v10; // x9
  unsigned __int64 v11; // x10
  unsigned __int64 v12; // x3
  size_t v13; // x2
  char *v14; // x0
  unsigned int *v15; // x8
  int v16; // w9
  __int64 v17; // [xsp+0h] [xbp-50h] BYREF
  void *v18[3]; // [xsp+8h] [xbp-48h] BYREF

  v18[2] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v18, a1 + 49);
  sub_56A528(a3, a2);
  v6 = *a3;
  if ( *((_QWORD *)*a3 - 3) )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *((_QWORD *)a1[41] + 30);
      if ( (*(v6 - 2) & 0x80000000) == 0 )
      {
        sub_568EA8(a3);
        v6 = *a3;
      }
      v10 = *(_QWORD *)(v9 + 40);
      v11 = *((char *)v6 + v7);
      if ( (*(_QWORD *)(v9 + 48) - v10) >> 2 <= v11 || (*(_DWORD *)(v10 + 4 * v11) & 0x80000000) != 0 )
      {
        v12 = *((_QWORD *)v6 - 3);
        if ( v12 < v7 )
          sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase");
        sub_568CB8(a3, v7, v12 != v7, 0);
        v6 = *a3;
        --v8;
      }
      v13 = *((_QWORD *)v6 - 3);
      v7 = ++v8;
    }
    while ( v13 > v8 );
  }
  else
  {
    v13 = 0;
  }
  if ( v13 != *((_QWORD *)v18[0] - 3) || memcmp(v6, v18[0], v13) )
  {
    (*((void (__fastcall **)(Caver::GUILabel **, const void **))*a1 + 44))(a1, a3);
    Caver::GUILabel::TextSize(&v17, a1[41]);
    if ( *(float *)&v17 <= *((float *)a1[41] + 35) )
      Caver::GUIControl::SendActionsForControlEvent();
    else
      (*((void (__fastcall **)(Caver::GUILabel **, void **, float))*a1 + 44))(a1, v18, *(float *)&v17);
  }
  v14 = (char *)v18[0] - 24;
  if ( (char *)v18[0] - 24 != (char *)&qword_6FD2E0 )
  {
    v15 = (unsigned int *)((char *)v18[0] - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v14);
  }
}

