/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000471AE8
 * Mangled: _ZN5Caver11SceneObject30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::SceneObject::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001F7FF0  Caver::SceneObject::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9FC0  Caver::Scene::GetAllGroups(std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>> *)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004722FC  Caver::SceneObject::HasGroup(Caver::SceneObjectGroup *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 178
 *   insn=0x0000000000471B00 string=0x0000000000471B04 "W"
 *   insn=0x0000000000471B08 string=0x0000000000471B0C ")"
 *   insn=0x0000000000471B14 string=0x0000000000471B18 "?Q"
 *   insn=0x0000000000471B1C string=0x0000000000471B20 "h"
 *   insn=0x0000000000471B24 string=0x0000000000471B28 "("
 *   insn=0x0000000000471B28 string=0x0000000000471B2C "A\t"
 *   insn=0x0000000000471B2C string=0x000000000059A2D7 "nil"
 *   insn=0x0000000000471B44 string=0x0000000000471B48 "~:"
 *   insn=0x0000000000471B48 string=0x0000000000471B4C "a"
 *   insn=0x0000000000471B4C string=0x0000000000471B50 "?"
 *   insn=0x0000000000471B58 string=0x0000000000471B5C "("
 *   insn=0x0000000000471B60 string=0x0000000000471B64 "("
 *   insn=0x0000000000471B68 string=0x0000000000471B6C "("
 *   insn=0x0000000000471B70 string=0x0000000000471B74 "\t"
 *   insn=0x0000000000471B74 string=0x0000000000471B78 ")"
 *   insn=0x0000000000471B78 string=0x0000000000471B7C "\t"
 *   insn=0x0000000000471B80 string=0x0000000000471B84 "("
 *   insn=0x0000000000471B88 string=0x0000000000471B8C "("
 *   insn=0x0000000000471B90 string=0x0000000000471B94 "\t"
 *   insn=0x0000000000471B90 string=0x0000000000471BA0 "("
 *   insn=0x0000000000471B94 string=0x0000000000471B98 ")"
 *   insn=0x0000000000471B98 string=0x0000000000471B9C "\t"
 *   insn=0x0000000000471BA0 string=0x0000000000471BA4 "h"
 *   insn=0x0000000000471BB8 string=0x0000000000471BBC "E;"
 *   insn=0x0000000000471BC0 string=0x0000000000471BC4 "5"
 *   insn=0x0000000000471BC8 string=0x0000000000471BCC ""
 *   insn=0x0000000000471BD8 string=0x0000000000471BDC "\t@"
 *   insn=0x0000000000471BE8 string=0x0000000000471BEC ""
 *   insn=0x0000000000471BF8 string=0x0000000000471BFC "@"
 *   insn=0x0000000000471C08 string=0x0000000000471C0C "5"
 *   insn=0x0000000000471C10 string=0x0000000000471C14 ""
 *   insn=0x0000000000471C20 string=0x0000000000471C24 "\t@"
 *   insn=0x0000000000471C30 string=0x0000000000471C34 ""
 *   insn=0x0000000000471C40 string=0x0000000000471C44 "@"
 *   insn=0x0000000000471C78 string=0x00000000001F9FC0 "0'"
 *   insn=0x0000000000471C84 string=0x0000000000471E80 "u"
 *   insn=0x0000000000471C88 string=0x0000000000471C8C "9?G"
 *   insn=0x0000000000471C98 string=0x0000000000471C9C "\t"
 *   insn=0x0000000000471C98 string=0x0000000000471CB0 "\t"
 *   insn=0x0000000000471C9C string=0x0000000000471CA0 "*"
 *   insn=0x0000000000471CA0 string=0x0000000000471CA4 "\n"
 *   insn=0x0000000000471CAC string=0x0000000000471CBC "?"
 *   insn=0x0000000000471CB0 string=0x0000000000471CB4 "*"
 *   insn=0x0000000000471CB4 string=0x0000000000471CB8 "\n"
 *   insn=0x0000000000471CC8 string=0x0000000000471CCC "Z"
 *   insn=0x0000000000471CD8 string=0x0000000000471CDC "I"
 *   insn=0x0000000000471CDC string=0x0000000000471CE0 "?"
 *   insn=0x0000000000471CE0 string=0x0000000000471CE4 "+"
 *   insn=0x0000000000471CE4 string=0x0000000000471CE8 "J"
 *   insn=0x0000000000471CEC string=0x0000000000471CF0 "Lyk"
 *   insn=0x0000000000471CF8 string=0x0000000000471CFC "k"
 *   insn=0x0000000000471D00 string=0x0000000000471D04 "k"
 *   insn=0x0000000000471D18 string=0x0000000000471D1C "\t:"
 *   insn=0x0000000000471D1C string=0x0000000000471D20 "a"
 *   insn=0x0000000000471D20 string=0x0000000000471D24 "?"
 *   insn=0x0000000000471D2C string=0x0000000000471D30 "("
 *   insn=0x0000000000471D34 string=0x0000000000471D38 "("
 *   insn=0x0000000000471D3C string=0x0000000000471D40 "("
 *   insn=0x0000000000471D44 string=0x0000000000471D48 "\t"
 *   insn=0x0000000000471D48 string=0x0000000000471D4C ")"
 *   insn=0x0000000000471D4C string=0x0000000000471D50 "\t"
 *   insn=0x0000000000471D54 string=0x0000000000471D58 "("
 *   insn=0x0000000000471D5C string=0x0000000000471D60 "("
 *   insn=0x0000000000471D64 string=0x0000000000471D68 "\t"
 *   insn=0x0000000000471D64 string=0x0000000000471D74 "("
 *   insn=0x0000000000471D68 string=0x0000000000471D6C ")"
 *   insn=0x0000000000471D6C string=0x0000000000471D70 "\t"
 *   insn=0x0000000000471D74 string=0x0000000000471D78 "h"
 *   insn=0x0000000000471D94 string=0x0000000000471D98 "6"
 *   insn=0x0000000000471D9C string=0x0000000000471DA0 ""
 *   insn=0x0000000000471DAC string=0x0000000000471DB0 "\t@"
 *   insn=0x0000000000471DBC string=0x0000000000471DC0 ""
 *   insn=0x0000000000471DCC string=0x0000000000471DD0 "@"
 *   insn=0x0000000000471DDC string=0x0000000000471DE0 "6"
 *   insn=0x0000000000471DE4 string=0x0000000000471DE8 ""
 *   insn=0x0000000000471DF4 string=0x0000000000471DF8 "\t@"
 *   insn=0x0000000000471E04 string=0x0000000000471E08 ""
 *   insn=0x0000000000471E14 string=0x0000000000471E18 "@"
 *   insn=0x0000000000471E2C string=0x0000000000471E30 "!"
 *   insn=0x0000000000471E30 string=0x0000000000471C94 "!"
 *   insn=0x0000000000471E48 string=0x0000000000471E4C "`"
 *   insn=0x0000000000471E50 string=0x0000000000471E54 "@"
 *   insn=0x0000000000471E50 string=0x0000000000471E70 "s""
 *   insn=0x0000000000471E54 string=0x0000000000471E58 ""
 *   insn=0x0000000000471E58 string=0x0000000000471E5C ""
 *   insn=0x0000000000471E60 string=0x0000000000471E64 ""
 *   insn=0x0000000000471E64 string=0x0000000000471E68 ""
 *   insn=0x0000000000471E84 string=0x0000000000471E88 "\n"
 *   insn=0x0000000000471E88 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000471E94 string=0x0000000000471E98 "!"
 *   insn=0x0000000000471EB8 string=0x0000000000471EBC ")=G"
 *   insn=0x0000000000471EBC string=0x0000000000471EC0 "!"
 *   insn=0x0000000000471EC4 string=0x0000000000471EC8 "\t"
 *   insn=0x0000000000471EC4 string=0x0000000000471EDC "\t"
 *   insn=0x0000000000471EC8 string=0x0000000000471ECC "*"
 *   insn=0x0000000000471ECC string=0x0000000000471ED0 "\n"
 *   insn=0x0000000000471ED8 string=0x0000000000471EE8 "?"
 *   insn=0x0000000000471EDC string=0x0000000000471EE0 "*"
 *   insn=0x0000000000471EE0 string=0x0000000000471EE4 "\n"
 *   insn=0x0000000000471EF0 string=0x0000000000471EF4 ","
 *   insn=0x0000000000471EF4 string=0x0000000000471EF8 "\"
 *   insn=0x0000000000471EFC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000471F04 string=0x0000000000471F08 "t\n"
 *   insn=0x0000000000471F0C string=0x0000000000471F10 ""
 *   insn=0x0000000000471F1C string=0x0000000000471F20 "\t@"
 *   insn=0x0000000000471F2C string=0x0000000000471F30 ""
 *   insn=0x0000000000471F3C string=0x0000000000471F40 "@"
 *   insn=0x0000000000471F48 string=0x0000000000471F4C "B"
 *   insn=0x0000000000471F58 string=0x0000000000471F5C "4"
 *   insn=0x0000000000471F60 string=0x0000000000471F64 ""
 *   insn=0x0000000000471F70 string=0x0000000000471F74 "\t@"
 *   insn=0x0000000000471F80 string=0x0000000000471F84 ""
 *   insn=0x0000000000471F90 string=0x0000000000471F94 "@"
 *   insn=0x0000000000471FA8 string=0x0000000000471FAC ""
 *   insn=0x0000000000471FB8 string=0x0000000000471FBC "\t@"
 *   insn=0x0000000000471FC8 string=0x0000000000471FCC ""
 *   insn=0x0000000000471FD8 string=0x0000000000471FDC "@"
 *   insn=0x0000000000471FE4 string=0x0000000000471FE8 ""
 *   insn=0x0000000000471FF8 string=0x0000000000471FFC ""
 *   insn=0x0000000000472008 string=0x000000000047200C "\t@"
 *   insn=0x0000000000472018 string=0x000000000047201C ""
 *   insn=0x0000000000472028 string=0x000000000047202C "@"
 *   insn=0x000000000047203C string=0x0000000000472040 "{"
 *   insn=0x0000000000472058 string=0x000000000047205C ")"
 *   insn=0x000000000047206C string=0x0000000000472070 ")=G"
 *   insn=0x0000000000472070 string=0x0000000000472074 "!"
 *   insn=0x0000000000472074 string=0x0000000000472078 "i"
 *   insn=0x0000000000472078 string=0x000000000047207C "\t"
 *   insn=0x0000000000472078 string=0x00000000004720A4 "\t"
 *   insn=0x000000000047207C string=0x0000000000472080 "*"
 *   insn=0x0000000000472080 string=0x0000000000472084 "\n"
 *   insn=0x0000000000472088 string=0x000000000047208C "?"
 *   insn=0x000000000047209C string=0x00000000004720A0 "\t>"
 *   insn=0x00000000004720A4 string=0x00000000004720A8 "*"
 *   insn=0x00000000004720A8 string=0x00000000004720AC "\n"
 *   insn=0x00000000004720AC string=0x00000000004720B0 "?"
 *   insn=0x00000000004720B0 string=0x00000000004720B4 ""
 *   insn=0x00000000004720C0 string=0x00000000004720C4 "h"
 *   insn=0x00000000004720D0 string=0x00000000004720D4 "w"
 *   insn=0x00000000004720EC string=0x00000000004720F0 ""
 *   insn=0x00000000004720FC string=0x0000000000472100 "\t@"
 *   insn=0x000000000047210C string=0x0000000000472110 ""
 *   insn=0x000000000047211C string=0x0000000000472120 "@"
 *   insn=0x0000000000472128 string=0x000000000047212C "C"
 *   insn=0x0000000000472138 string=0x000000000047213C "4"
 *   insn=0x0000000000472140 string=0x0000000000472144 ""
 *   insn=0x0000000000472150 string=0x0000000000472154 "\t@"
 *   insn=0x0000000000472160 string=0x0000000000472164 ""
 *   insn=0x0000000000472170 string=0x0000000000472174 "@"
 *   insn=0x0000000000472188 string=0x000000000047218C ""
 *   insn=0x0000000000472190 string=0x0000000000472194 "!"
 *   insn=0x0000000000472198 string=0x000000000047219C "\t@"
 *   insn=0x00000000004721A8 string=0x00000000004721AC ""
 *   insn=0x00000000004721B0 string=0x00000000004721B4 "!"
 *   insn=0x00000000004721B8 string=0x00000000004721BC "@"
 *   insn=0x00000000004721D8 string=0x00000000004721DC ""
 *   insn=0x00000000004721E8 string=0x00000000004721EC "\t@"
 *   insn=0x00000000004721F8 string=0x00000000004721FC ""
 *   insn=0x0000000000472208 string=0x000000000047220C "@"
 *   insn=0x0000000000472214 string=0x0000000000472218 "3"
 *   insn=0x0000000000472224 string=0x0000000000472228 "Ip"
 *   insn=0x0000000000472244 string=0x000000000047229C "!"
 *   insn=0x0000000000472258 string=0x000000000047225C "@"
 *   insn=0x000000000047225C string=0x0000000000472260 ""
 *   insn=0x0000000000472260 string=0x0000000000472264 ""
 *   insn=0x0000000000472268 string=0x000000000047226C ""
 *   insn=0x000000000047226C string=0x0000000000472270 ""
 *   insn=0x000000000047228C string=0x0000000000472290 ""
 *   insn=0x00000000004722A0 string=0x00000000004722A4 "\t"
 *   insn=0x00000000004722A0 string=0x00000000004722B8 "\t"
 *   insn=0x00000000004722A4 string=0x00000000004722A8 "*"
 *   insn=0x00000000004722A8 string=0x00000000004722AC "\n"
 *   insn=0x00000000004722B4 string=0x00000000004722C4 "?"
 *   insn=0x00000000004722B8 string=0x00000000004722BC "*"
 *   insn=0x00000000004722BC string=0x00000000004722C0 "\n"
 *   insn=0x00000000004722CC string=0x00000000004722D0 "5"
 *   insn=0x00000000004722DC string=0x00000000004722E0 "h"
 *   insn=0x00000000004722F8 string=0x00000000004722FC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObject::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // x1
  _QWORD *v6; // x8
  _QWORD *v7; // x8
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x8
  char *v14; // x0
  __int64 *v15; // x21
  __int64 *v16; // x26
  unsigned int *v17; // x8
  int v18; // w9
  int *v19; // x10
  __int64 v20; // x8
  __int64 v21; // x9
  __int64 v22; // x10
  __int64 v23; // x11
  __int64 v24; // x1
  _QWORD *v25; // x8
  _QWORD *v26; // x8
  _QWORD *v27; // x22
  __int64 v28; // x8
  __int64 v29; // x8
  _QWORD *v30; // x22
  __int64 v31; // x8
  __int64 v32; // x8
  void *v33; // x0
  __int64 *v34; // x19
  _DWORD *v35; // x0
  int v36; // w8
  unsigned int *v37; // x8
  int v38; // w9
  __int64 v39; // [xsp+8h] [xbp-98h] BYREF
  void *p; // [xsp+10h] [xbp-90h] BYREF
  __int64 *v41; // [xsp+18h] [xbp-88h]
  __int64 v42; // [xsp+20h] [xbp-80h]
  int v43; // [xsp+28h] [xbp-78h]
  __int64 v44; // [xsp+30h] [xbp-70h]
  _QWORD *v45; // [xsp+38h] [xbp-68h]
  __int64 v46; // [xsp+40h] [xbp-60h]
  _QWORD *v47; // [xsp+48h] [xbp-58h]
  __int64 v48; // [xsp+58h] [xbp-48h]

  v48 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (unsigned int)(a2 - 4) > 0x14 || !*(_QWORD *)(a1 + 32) )
    return;
  sub_566BB8((int)&p, "nil");
  Caver::BindingValue::ValueWithString();
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 != *(_QWORD *)(a3 + 16) )
  {
    *(_DWORD *)v5 = v43;
    *(_QWORD *)(v5 + 8) = v44;
    v6 = v45;
    *(_QWORD *)(v5 + 16) = v45;
    if ( v6 )
      ++v6[1];
    *(_QWORD *)(v5 + 24) = v46;
    v7 = v47;
    *(_QWORD *)(v5 + 32) = v47;
    if ( v7 )
      ++v7[1];
    *(_QWORD *)(a3 + 8) = v5 + 40;
    v8 = v47;
    if ( !v47 )
      goto LABEL_14;
    goto LABEL_11;
  }
  std::vector<Caver::BindingValue>::_M_insert_aux();
  v8 = v47;
  if ( v47 )
  {
LABEL_11:
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
LABEL_14:
  v11 = v45;
  if ( v45 )
  {
    v12 = v45[1] - 1LL;
    v45[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = (char *)p - 24;
  if ( (char *)p - 24 != (char *)&qword_6FD2E0 )
  {
    v37 = (unsigned int *)((char *)p - 8);
    if ( &pthread_create )
    {
      do
        v38 = __ldaxr(v37);
      while ( __stlxr(v38 - 1, v37) );
    }
    else
    {
      v38 = (*v37)--;
    }
    if ( v38 <= 0 )
      operator delete(v14);
  }
  v41 = 0;
  v42 = 0;
  p = 0;
  Caver::Scene::GetAllGroups();
  v15 = (__int64 *)p;
  v16 = v41;
  if ( p != v41 )
  {
    while ( 1 )
    {
      v19 = *(int **)(a1 + 40);
      v20 = *v15;
      if ( v19 )
      {
        v21 = *v19;
        if ( (int)v21 >= 1 )
        {
          v22 = *((_QWORD *)v19 + 1);
          v23 = 0;
          while ( *(_QWORD *)(v22 + 8 * v23) != v20 )
          {
            if ( ++v23 >= v21 )
              goto LABEL_32;
          }
          goto LABEL_48;
        }
      }
LABEL_32:
      sub_56A528(&v39, v20 + 32);
      Caver::BindingValue::ValueWithString();
      v24 = *(_QWORD *)(a3 + 8);
      if ( v24 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v27 = v47;
      if ( v47 )
        goto LABEL_40;
LABEL_43:
      v30 = v45;
      if ( v45 )
      {
        v31 = v45[1] - 1LL;
        v45[1] = v31;
        if ( !v31 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
          v32 = v30[2] - 1LL;
          v30[2] = v32;
          if ( !v32 )
            (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
        }
      }
      v33 = (void *)(v39 - 24);
      if ( (__int64 *)(v39 - 24) != &qword_6FD2E0 )
      {
        v17 = (unsigned int *)(v39 - 8);
        if ( &pthread_create )
        {
          do
            v18 = __ldaxr(v17);
          while ( __stlxr(v18 - 1, v17) );
        }
        else
        {
          v18 = (*v17)--;
        }
        if ( v18 <= 0 )
          operator delete(v33);
      }
LABEL_48:
      if ( ++v15 == v16 )
      {
        v34 = (__int64 *)p;
        v15 = v41;
        if ( p != v41 )
        {
          do
          {
            v35 = (_DWORD *)*v34;
            if ( *v34 )
            {
              v36 = v35[2] - 1;
              v35[2] = v36;
              if ( !v36 )
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v35 + 8LL))(v35);
            }
            ++v34;
          }
          while ( v15 != v34 );
          v15 = (__int64 *)p;
        }
        goto LABEL_55;
      }
    }
    *(_DWORD *)v24 = v43;
    *(_QWORD *)(v24 + 8) = v44;
    v25 = v45;
    *(_QWORD *)(v24 + 16) = v45;
    if ( v25 )
      ++v25[1];
    *(_QWORD *)(v24 + 24) = v46;
    v26 = v47;
    *(_QWORD *)(v24 + 32) = v47;
    if ( v26 )
      ++v26[1];
    *(_QWORD *)(a3 + 8) = v24 + 40;
    v27 = v47;
    if ( !v47 )
      goto LABEL_43;
LABEL_40:
    v28 = v27[1] - 1LL;
    v27[1] = v28;
    if ( !v28 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
      v29 = v27[2] - 1LL;
      v27[2] = v29;
      if ( !v29 )
        (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
    }
    goto LABEL_43;
  }
LABEL_55:
  if ( v15 )
    operator delete(v15);
}

