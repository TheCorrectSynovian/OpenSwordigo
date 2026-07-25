/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002239B4
 * Mangled: _ZNSt6vectorIN5boost13intrusive_ptrIN5Caver14LightComponentEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::LightComponent>*,std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>>>,boost::intrusive_ptr<Caver::LightComponent> const&)
 *
 * Callers: 1
 *   0x00000000001F5600  std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::LightComponent>*,std::vector<boost::intrusive_ptr<Caver::LightComponent>,std::allocator<boost::intrusive_ptr<Caver::LightComponent>>>>,boost::intrusive_ptr<Caver::LightComponent> const&)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 111
 *   insn=0x00000000002239E0 string=0x00000000002239E4 "\t"
 *   insn=0x00000000002239E4 string=0x00000000002239E8 "\t"
 *   insn=0x00000000002239EC string=0x00000000002239F0 "*\t@"
 *   insn=0x00000000002239EC string=0x00000000002239FC "\t!"
 *   insn=0x00000000002239F0 string=0x00000000002239F4 "J"
 *   insn=0x00000000002239F4 string=0x00000000002239F8 "*\t"
 *   insn=0x0000000000223A08 string=0x0000000000223A18 "!"
 *   insn=0x0000000000223A0C string=0x0000000000223A10 ")"
 *   insn=0x0000000000223A18 string=0x0000000000223A1C "\t"
 *   insn=0x0000000000223A1C string=0x0000000000223A20 "?"
 *   insn=0x0000000000223A24 string=0x0000000000223A28 ")"
 *   insn=0x0000000000223A28 string=0x0000000000223A2C "5"
 *   insn=0x0000000000223A38 string=0x0000000000223A3C "*\t@"
 *   insn=0x0000000000223A3C string=0x0000000000223A40 "J"
 *   insn=0x0000000000223A40 string=0x0000000000223A44 "*\t"
 *   insn=0x0000000000223A48 string=0x0000000000223A4C "\t"
 *   insn=0x0000000000223A50 string=0x0000000000223A54 "@"
 *   insn=0x0000000000223A54 string=0x0000000000223A58 ""
 *   insn=0x0000000000223A58 string=0x0000000000223A5C ""
 *   insn=0x0000000000223A60 string=0x0000000000223A64 ""
 *   insn=0x0000000000223A64 string=0x0000000000223A68 ""
 *   insn=0x0000000000223A80 string=0x0000000000223A90 "`"
 *   insn=0x0000000000223A84 string=0x0000000000223A88 ""
 *   insn=0x0000000000223A90 string=0x0000000000223A94 "t"
 *   insn=0x0000000000223A98 string=0x0000000000223A9C "@"
 *   insn=0x0000000000223A9C string=0x0000000000223AA0 ""
 *   insn=0x0000000000223AA0 string=0x0000000000223AA4 ""
 *   insn=0x0000000000223AA8 string=0x0000000000223AAC ""
 *   insn=0x0000000000223AAC string=0x0000000000223AB0 ""
 *   insn=0x0000000000223ABC string=0x0000000000223AC0 ""
 *   insn=0x0000000000223AC4 string=0x0000000000223AC8 "A"
 *   insn=0x0000000000223AE8 string=0x0000000000223AEC " "
 *   insn=0x0000000000223AF0 string=0x0000000000223AF4 ""
 *   insn=0x0000000000223AF4 string=0x0000000000223AF8 ""
 *   insn=0x0000000000223AF8 string=0x0000000000223AFC "\n"
 *   insn=0x0000000000223AFC string=0x0000000000223B00 "H"
 *   insn=0x0000000000223B00 string=0x0000000000223B04 ""
 *   insn=0x0000000000223B10 string=0x0000000000223B14 "J"
 *   insn=0x0000000000223B14 string=0x0000000000223B18 "_"
 *   insn=0x0000000000223B1C string=0x0000000000223B20 "W"
 *   insn=0x0000000000223B24 string=0x0000000000223B28 "\n"
 *   insn=0x0000000000223B2C string=0x0000000000223B30 "v"
 *   insn=0x0000000000223B34 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000223B44 string=0x0000000000223B48 "\t\t@"
 *   insn=0x0000000000223B48 string=0x0000000000223B4C ")"
 *   insn=0x0000000000223B4C string=0x0000000000223B50 "\t\t"
 *   insn=0x0000000000223B58 string=0x0000000000223B5C "@"
 *   insn=0x0000000000223B60 string=0x0000000000223B64 "h""
 *   insn=0x0000000000223B64 string=0x0000000000223B68 "j"
 *   insn=0x0000000000223B74 string=0x0000000000223B78 "l\t@"
 *   insn=0x0000000000223B74 string=0x0000000000223B84 ")!"
 *   insn=0x0000000000223B7C string=0x0000000000223B80 "l\t"
 *   insn=0x0000000000223B84 string=0x0000000000223B88 "_"
 *   insn=0x0000000000223B8C string=0x0000000000223B90 ""
 *   insn=0x0000000000223B90 string=0x0000000000223B94 ""
 *   insn=0x0000000000223B98 string=0x0000000000223B9C "!"
 *   insn=0x0000000000223BAC string=0x0000000000223BB0 "?"
 *   insn=0x0000000000223BB0 string=0x0000000000223BB4 "@"
 *   insn=0x0000000000223BB4 string=0x0000000000223BB8 "(#"
 *   insn=0x0000000000223BC0 string=0x0000000000223BC4 "K"
 *   insn=0x0000000000223BC4 string=0x0000000000223BC8 "+"
 *   insn=0x0000000000223BCC string=0x0000000000223BD0 "l\t@"
 *   insn=0x0000000000223BCC string=0x0000000000223BDC "J!"
 *   insn=0x0000000000223BD4 string=0x0000000000223BD8 "l\t"
 *   insn=0x0000000000223BDC string=0x0000000000223BE0 "?"
 *   insn=0x0000000000223BE0 string=0x0000000000223BE4 ")!"
 *   insn=0x0000000000223BE8 string=0x0000000000223BEC ""
 *   insn=0x0000000000223BEC string=0x0000000000223BF0 ""
 *   insn=0x0000000000223BF0 string=0x0000000000223BF4 ""
 *   insn=0x0000000000223C00 string=0x0000000000223C38 "v"
 *   insn=0x0000000000223C08 string=0x0000000000223C0C "@"
 *   insn=0x0000000000223C0C string=0x0000000000223C10 ""
 *   insn=0x0000000000223C10 string=0x0000000000223C14 ""
 *   insn=0x0000000000223C18 string=0x0000000000223C1C ""
 *   insn=0x0000000000223C1C string=0x0000000000223C20 ""
 *   insn=0x0000000000223C28 string=0x0000000000223C2C "?"
 *   insn=0x0000000000223C40 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000223C70 string=0x0000000000223C74 ""
 *   insn=0x0000000000223C78 string=0x0000000000223C7C "4"
 *   insn=0x0000000000223C80 string=0x0000000000223C84 ""
 *   insn=0x0000000000223C90 string=0x0000000000223C94 ""
 *   insn=0x0000000000223CA0 string=0x0000000000223CA4 "w"
 *   insn=0x0000000000223CCC string=0x0000000000223CD0 "K"
 *   insn=0x0000000000223CD4 string=0x0000000000223CDC "}"
 *   insn=0x0000000000223CDC string=0x0000000000223CE0 ""
 *   insn=0x0000000000223CEC string=0x0000000000223CF0 "I"
 *   insn=0x0000000000223CF0 string=0x0000000000223CF4 "h"
 *   insn=0x0000000000223CF4 string=0x0000000000223CF8 "\t"
 *   insn=0x0000000000223CF8 string=0x0000000000223CFC "J%~"
 *   insn=0x0000000000223D00 string=0x0000000000223D04 "+"
 *   insn=0x0000000000223D04 string=0x0000000000223D08 "k"
 *   insn=0x0000000000223D08 string=0x0000000000223D0C "+"
 *   insn=0x0000000000223D10 string=0x0000000000223D14 "\n%>"
 *   insn=0x0000000000223D14 string=0x0000000000223D18 "5"
 *   insn=0x0000000000223D1C string=0x0000000000223D20 ""
 *   insn=0x0000000000223D30 string=0x0000000000223D34 "\t@"
 *   insn=0x0000000000223D3C string=0x0000000000223D40 ""
 *   insn=0x0000000000223D50 string=0x0000000000223D54 "@"
 *   insn=0x0000000000223D5C string=0x0000000000223D60 ")!"
 *   insn=0x0000000000223D64 string=0x0000000000223D68 "\n"
 *   insn=0x0000000000223D64 string=0x0000000000223D74 "j"
 *   insn=0x0000000000223D68 string=0x0000000000223D6C "J"
 *   insn=0x0000000000223D6C string=0x0000000000223D70 "\n"
 *   insn=0x0000000000223D74 string=0x0000000000223D78 "U"
 *   insn=0x0000000000223D78 string=0x0000000000223D7C "I!?"
 *   insn=0x0000000000223D7C string=0x0000000000223D80 "5"
 *   insn=0x0000000000223D84 string=0x0000000000223D88 ""
 *   insn=0x0000000000223D98 string=0x0000000000223D9C "\t@"
 *   insn=0x0000000000223DA4 string=0x0000000000223DA8 ""
 *   insn=0x0000000000223DB8 string=0x0000000000223DBC "@"
 *   insn=0x0000000000223DD0 string=0x0000000000223DD4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::intrusive_ptr<Caver::LightComponent>>::_M_insert_aux(
        char **a1,
        char *a2,
        _QWORD *a3)
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

