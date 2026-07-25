/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000243E48
 * Mangled: _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver9ComponentEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callers: 1
 *   0x00000000001F3A10  std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callees: 9
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002441C0  Caver::ComponentFactory::~ComponentFactory()
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 99
 *   insn=0x0000000000243E74 string=0x0000000000243E78 "\t"
 *   insn=0x0000000000243E78 string=0x0000000000243E7C "\t"
 *   insn=0x0000000000243E80 string=0x0000000000243E84 "*\t@"
 *   insn=0x0000000000243E80 string=0x0000000000243E90 "\t!"
 *   insn=0x0000000000243E84 string=0x0000000000243E88 "J"
 *   insn=0x0000000000243E88 string=0x0000000000243E8C "*\t"
 *   insn=0x0000000000243E9C string=0x0000000000243EAC "!"
 *   insn=0x0000000000243EA0 string=0x0000000000243EA4 ")"
 *   insn=0x0000000000243EAC string=0x0000000000243EB0 "\t"
 *   insn=0x0000000000243EB0 string=0x0000000000243EB4 "?"
 *   insn=0x0000000000243EB8 string=0x0000000000243EBC ")"
 *   insn=0x0000000000243EBC string=0x0000000000243EC0 "5"
 *   insn=0x0000000000243ECC string=0x0000000000243ED0 "*\t@"
 *   insn=0x0000000000243ED0 string=0x0000000000243ED4 "J"
 *   insn=0x0000000000243ED4 string=0x0000000000243ED8 "*\t"
 *   insn=0x0000000000243EDC string=0x0000000000243EE0 "\t"
 *   insn=0x0000000000243EE4 string=0x0000000000243EE8 "@"
 *   insn=0x0000000000243EE8 string=0x0000000000243EEC ""
 *   insn=0x0000000000243EEC string=0x0000000000243EF0 ""
 *   insn=0x0000000000243EF4 string=0x0000000000243EF8 ""
 *   insn=0x0000000000243EF8 string=0x0000000000243EFC ""
 *   insn=0x0000000000243F14 string=0x0000000000243F24 "`"
 *   insn=0x0000000000243F18 string=0x0000000000243F1C ""
 *   insn=0x0000000000243F24 string=0x0000000000243F28 "t"
 *   insn=0x0000000000243F2C string=0x0000000000243F30 "@"
 *   insn=0x0000000000243F30 string=0x0000000000243F34 ""
 *   insn=0x0000000000243F34 string=0x0000000000243F38 ""
 *   insn=0x0000000000243F3C string=0x0000000000243F40 ""
 *   insn=0x0000000000243F40 string=0x0000000000243F44 ""
 *   insn=0x0000000000243F50 string=0x0000000000243F54 ""
 *   insn=0x0000000000243F58 string=0x0000000000243F5C "A"
 *   insn=0x0000000000243F7C string=0x0000000000243F80 " "
 *   insn=0x0000000000243F84 string=0x0000000000243F88 ""
 *   insn=0x0000000000243F88 string=0x0000000000243F8C ""
 *   insn=0x0000000000243F8C string=0x0000000000243F90 "\n"
 *   insn=0x0000000000243F90 string=0x0000000000243F94 "H"
 *   insn=0x0000000000243F94 string=0x0000000000243F98 ""
 *   insn=0x0000000000243FA4 string=0x0000000000243FA8 "J"
 *   insn=0x0000000000243FA8 string=0x0000000000243FAC "_"
 *   insn=0x0000000000243FB0 string=0x0000000000243FB4 "W"
 *   insn=0x0000000000243FB8 string=0x0000000000243FBC "\n"
 *   insn=0x0000000000243FBC string=0x00000000002440FC "f"
 *   insn=0x0000000000243FC0 string=0x0000000000243FC4 "v"
 *   insn=0x0000000000243FC8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000243FD8 string=0x0000000000243FDC "\t\t@"
 *   insn=0x0000000000243FDC string=0x0000000000243FE0 ")"
 *   insn=0x0000000000243FE0 string=0x0000000000243FE4 "\t\t"
 *   insn=0x0000000000243FEC string=0x0000000000243FF0 "@"
 *   insn=0x0000000000243FF4 string=0x0000000000243FF8 "h""
 *   insn=0x0000000000243FF8 string=0x0000000000243FFC "j"
 *   insn=0x0000000000244008 string=0x000000000024400C "l\t@"
 *   insn=0x0000000000244008 string=0x0000000000244018 ")!"
 *   insn=0x0000000000244010 string=0x0000000000244014 "l\t"
 *   insn=0x0000000000244018 string=0x000000000024401C "_"
 *   insn=0x0000000000244020 string=0x0000000000244024 ""
 *   insn=0x0000000000244024 string=0x0000000000244028 ""
 *   insn=0x000000000024402C string=0x0000000000244030 "!"
 *   insn=0x0000000000244040 string=0x0000000000244044 "?"
 *   insn=0x0000000000244044 string=0x0000000000244048 "@"
 *   insn=0x0000000000244048 string=0x000000000024404C "(#"
 *   insn=0x0000000000244054 string=0x0000000000244058 "K"
 *   insn=0x0000000000244058 string=0x000000000024405C "+"
 *   insn=0x0000000000244060 string=0x0000000000244064 "l\t@"
 *   insn=0x0000000000244060 string=0x0000000000244070 "J!"
 *   insn=0x0000000000244068 string=0x000000000024406C "l\t"
 *   insn=0x0000000000244070 string=0x0000000000244074 "?"
 *   insn=0x0000000000244074 string=0x0000000000244078 ")!"
 *   insn=0x000000000024407C string=0x0000000000244080 ""
 *   insn=0x0000000000244080 string=0x0000000000244084 ""
 *   insn=0x0000000000244084 string=0x0000000000244088 ""
 *   insn=0x0000000000244094 string=0x00000000002440CC "v"
 *   insn=0x000000000024409C string=0x00000000002440A0 "@"
 *   insn=0x00000000002440A0 string=0x00000000002440A4 ""
 *   insn=0x00000000002440A4 string=0x00000000002440A8 ""
 *   insn=0x00000000002440AC string=0x00000000002440B0 ""
 *   insn=0x00000000002440B0 string=0x00000000002440B4 ""
 *   insn=0x00000000002440BC string=0x00000000002440C0 "?"
 *   insn=0x00000000002440D0 string=0x00000000002440D4 "w"
 *   insn=0x00000000002440D4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000244104 string=0x0000000000244108 ""
 *   insn=0x000000000024410C string=0x0000000000244110 "4"
 *   insn=0x0000000000244114 string=0x0000000000244118 ""
 *   insn=0x0000000000244124 string=0x0000000000244128 ""
 *   insn=0x0000000000244144 string=0x0000000000244148 "(%"
 *   insn=0x0000000000244148 string=0x0000000000244150 ""
 *   insn=0x0000000000244154 string=0x0000000000244158 " %"
 *   insn=0x0000000000244154 string=0x0000000000244168 " %"
 *   insn=0x0000000000244168 string=0x0000000000244170 "\"
 *   insn=0x0000000000244170 string=0x0000000000244174 " "
 *   insn=0x0000000000244170 string=0x00000000001FD6E0 "0'"
 *   insn=0x0000000000244174 string=0x0000000000244178 "!%"
 *   insn=0x0000000000244180 string=0x0000000000244184 "?"
 *   insn=0x000000000024418C string=0x0000000000244190 "?"
 *   insn=0x0000000000244190 string=0x0000000000244194 " "
 *   insn=0x0000000000244194 string=0x0000000000244198 "?"
 *   insn=0x00000000002441A0 string=0x00000000002441A4 ""%"
 *   insn=0x00000000002441AC string=0x00000000002441B0 " %"
 *   insn=0x00000000002441AC string=0x00000000001F4C40 "P'"
 *   insn=0x00000000002441B8 string=0x00000000001F7040 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::intrusive_ptr<Caver::Component>>::_M_insert_aux(char **a1, char *a2, _QWORD *a3)
{
  char *v4; // x8
  __int64 v7; // x9
  _DWORD *v8; // x20
  char *v9; // x8
  __int64 v10; // x21
  char *v11; // x22
  _DWORD *v12; // x9
  _DWORD *v13; // t1
  _DWORD *v14; // x0
  int v15; // w8
  _DWORD *v16; // x0
  int v17; // w8
  int v18; // w8
  bool v19; // zf
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x10
  bool v23; // cf
  unsigned __int64 v24; // x8
  int v25; // w10
  unsigned __int64 v26; // x23
  char *v27; // x22
  __int64 v28; // x0
  _DWORD *v29; // x8
  __int64 v30; // x21
  char *v31; // x22
  __int64 v32; // x9
  __int64 v33; // x11
  unsigned __int64 v34; // x8
  char *v35; // x25
  unsigned __int64 v36; // x24
  _QWORD *v37; // x9
  char *v38; // x10
  __int64 v39; // x11
  _DWORD *v40; // x0
  int v41; // w8

  v4 = a1[1];
  if ( v4 == a1[2] )
  {
    v20 = v4 - *a1;
    v19 = v20 == 0;
    v21 = v20 >> 3;
    if ( v19 )
      v22 = 1;
    else
      v22 = v21;
    v23 = __CFADD__(v22, v21);
    v24 = v22 + v21;
    v25 = v23;
    if ( v25 | (v24 >> 61 != 0) )
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v26 = v24;
    if ( v26 >> 61 )
      sub_565294();
    v27 = (char *)(a2 - *a1);
    v28 = operator new(8 * v26);
    v29 = (_DWORD *)*a3;
    v30 = v28;
    *(_QWORD *)&v27[v28] = v29;
    if ( v29 )
      ++v29[2];
    v31 = *a1;
    if ( *a1 == a2 )
    {
      v34 = v28;
    }
    else
    {
      v32 = 0;
      do
      {
        v33 = *(_QWORD *)&v31[v32];
        *(_QWORD *)(v28 + v32) = v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        v32 += 8;
      }
      while ( a2 - v31 != v32 );
      v34 = v28 + ((a2 - 8 - v31) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    }
    v35 = a1[1];
    v36 = v34 + 8;
    if ( v35 != a2 )
    {
      v37 = (_QWORD *)(v34 + 8);
      v38 = a2;
      do
      {
        v39 = *(_QWORD *)v38;
        *v37 = *(_QWORD *)v38;
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        v38 += 8;
        ++v37;
      }
      while ( v35 != v38 );
      v36 += ((v35 - 8 - a2) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    }
    if ( v31 != v35 )
    {
      do
      {
        v40 = *(_DWORD **)v31;
        if ( *(_QWORD *)v31 )
        {
          v41 = v40[2] - 1;
          v40[2] = v41;
          if ( !v41 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v40 + 8LL))(v40);
        }
        v31 += 8;
      }
      while ( v35 != v31 );
      v31 = *a1;
    }
    if ( v31 )
      operator delete(v31);
    *a1 = (char *)v30;
    a1[1] = (char *)v36;
    a1[2] = (char *)(v30 + 8 * v26);
  }
  else
  {
    v7 = *((_QWORD *)v4 - 1);
    *(_QWORD *)v4 = v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    a1[1] = v4 + 8;
    v8 = (_DWORD *)*a3;
    if ( *a3 )
      ++v8[2];
    v9 = v4 - 8;
    if ( v9 - a2 >= 1 )
    {
      v10 = ((unsigned __int64)(v9 - a2) >> 3) + 1;
      v11 = v9;
      do
      {
        v13 = (_DWORD *)*((_QWORD *)v11 - 1);
        v11 -= 8;
        v12 = v13;
        if ( v13 )
          ++v12[2];
        v14 = *(_DWORD **)v9;
        *(_QWORD *)v9 = v12;
        if ( v14 )
        {
          v15 = v14[2] - 1;
          v14[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
        }
        --v10;
        v9 = v11;
      }
      while ( v10 > 1 );
    }
    if ( v8 )
      ++v8[2];
    v16 = *(_DWORD **)a2;
    *(_QWORD *)a2 = v8;
    if ( v16 )
    {
      v17 = v16[2] - 1;
      v16[2] = v17;
      if ( !v17 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    if ( v8 )
    {
      v18 = v8[2] - 1;
      v8[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
}

