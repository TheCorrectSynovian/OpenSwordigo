/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000219874
 * Mangled: _ZN5Caver23CollisionShapeComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::CollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000002029C0  Caver::CollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 9
 *   0x00000000001F5CD0  Caver::ShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000219C18  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 81
 *   insn=0x0000000000219888 string=0x000000000021988C "X"
 *   insn=0x000000000021988C string=0x0000000000219890 ""
 *   insn=0x0000000000219894 string=0x0000000000219898 "?@"
 *   insn=0x00000000002198A0 string=0x00000000002198A4 "w&"
 *   insn=0x00000000002198A4 string=0x00000000002198A8 "V&"
 *   insn=0x00000000002198C0 string=0x00000000002198C4 "_"
 *   insn=0x00000000002198C0 string=0x00000000001F5CD0 "P'"
 *   insn=0x00000000002198C4 string=0x0000000000219A40 ""
 *   insn=0x00000000002198CC string=0x00000000002198D0 "\t"
 *   insn=0x00000000002198CC string=0x00000000002198E4 "\t"
 *   insn=0x00000000002198D0 string=0x00000000002198D4 "*"
 *   insn=0x00000000002198D4 string=0x00000000002198D8 "\n"
 *   insn=0x00000000002198E0 string=0x00000000002198F0 "?"
 *   insn=0x00000000002198E4 string=0x00000000002198E8 "*"
 *   insn=0x00000000002198E8 string=0x00000000002198EC "\n"
 *   insn=0x00000000002198FC string=0x0000000000219900 "M"
 *   insn=0x0000000000219908 string=0x000000000021990C ""
 *   insn=0x0000000000219918 string=0x000000000021991C "\t"
 *   insn=0x000000000021991C string=0x0000000000219920 "a"
 *   insn=0x0000000000219920 string=0x0000000000219924 "?"
 *   insn=0x000000000021992C string=0x0000000000219930 "("
 *   insn=0x0000000000219934 string=0x0000000000219938 "("
 *   insn=0x000000000021993C string=0x0000000000219940 "("
 *   insn=0x0000000000219944 string=0x0000000000219948 "\t"
 *   insn=0x0000000000219948 string=0x000000000021994C ")"
 *   insn=0x000000000021994C string=0x0000000000219950 "\t"
 *   insn=0x0000000000219954 string=0x0000000000219958 "("
 *   insn=0x000000000021995C string=0x0000000000219960 "("
 *   insn=0x0000000000219964 string=0x0000000000219968 "\t"
 *   insn=0x0000000000219964 string=0x0000000000219974 "("
 *   insn=0x0000000000219968 string=0x000000000021996C ")"
 *   insn=0x000000000021996C string=0x0000000000219970 "\t"
 *   insn=0x0000000000219974 string=0x0000000000219978 "h"
 *   insn=0x0000000000219994 string=0x0000000000219998 "5"
 *   insn=0x000000000021999C string=0x00000000002199A0 ""
 *   insn=0x00000000002199AC string=0x00000000002199B0 "\t@"
 *   insn=0x00000000002199BC string=0x00000000002199C0 ""
 *   insn=0x00000000002199CC string=0x00000000002199D0 "@"
 *   insn=0x00000000002199DC string=0x00000000002199E0 "5"
 *   insn=0x00000000002199E4 string=0x00000000002199E8 ""
 *   insn=0x00000000002199F4 string=0x00000000002199F8 "\t@"
 *   insn=0x0000000000219A04 string=0x0000000000219A08 ""
 *   insn=0x0000000000219A14 string=0x0000000000219A18 "@"
 *   insn=0x0000000000219A30 string=0x00000000002198C8 "!"
 *   insn=0x0000000000219A38 string=0x0000000000219A3C "C"
 *   insn=0x0000000000219A68 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000219A70 string=0x0000000000219A74 "t\n"
 *   insn=0x0000000000219A78 string=0x0000000000219A7C ""
 *   insn=0x0000000000219A88 string=0x0000000000219A8C "\t@"
 *   insn=0x0000000000219A98 string=0x0000000000219A9C ""
 *   insn=0x0000000000219AA8 string=0x0000000000219AAC "@"
 *   insn=0x0000000000219AB4 string=0x0000000000219AB8 "B"
 *   insn=0x0000000000219AC4 string=0x0000000000219AC8 "4"
 *   insn=0x0000000000219ACC string=0x0000000000219AD0 ""
 *   insn=0x0000000000219ADC string=0x0000000000219AE0 "\t@"
 *   insn=0x0000000000219AEC string=0x0000000000219AF0 ""
 *   insn=0x0000000000219AFC string=0x0000000000219B00 "@"
 *   insn=0x0000000000219B14 string=0x0000000000219B18 ""
 *   insn=0x0000000000219B24 string=0x0000000000219B28 "\t@"
 *   insn=0x0000000000219B34 string=0x0000000000219B38 ""
 *   insn=0x0000000000219B44 string=0x0000000000219B48 "@"
 *   insn=0x0000000000219B50 string=0x0000000000219B54 ""
 *   insn=0x0000000000219B68 string=0x0000000000219B6C "4"
 *   insn=0x0000000000219B70 string=0x0000000000219B74 ""
 *   insn=0x0000000000219B80 string=0x0000000000219B84 "\t@"
 *   insn=0x0000000000219B90 string=0x0000000000219B94 ""
 *   insn=0x0000000000219BA0 string=0x0000000000219BA4 "@"
 *   insn=0x0000000000219BC8 string=0x0000000000219BCC "`"
 *   insn=0x0000000000219BCC string=0x0000000000219BD0 "!"
 *   insn=0x0000000000219BD0 string=0x0000000000219BD4 "v"
 *   insn=0x0000000000219BD4 string=0x0000000000219BD8 "\t"
 *   insn=0x0000000000219BD4 string=0x0000000000219C00 "\t"
 *   insn=0x0000000000219BD8 string=0x0000000000219BDC "*"
 *   insn=0x0000000000219BDC string=0x0000000000219BE0 "\n"
 *   insn=0x0000000000219BE4 string=0x0000000000219BE8 "?"
 *   insn=0x0000000000219BE8 string=0x0000000000219BEC "l"
 *   insn=0x0000000000219BF8 string=0x0000000000219BFC "2"
 *   insn=0x0000000000219C00 string=0x0000000000219C04 "*"
 *   insn=0x0000000000219C04 string=0x0000000000219C08 "\n"
 *   insn=0x0000000000219C08 string=0x0000000000219C0C "?"
 *   insn=0x0000000000219C0C string=0x0000000000219C10 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollisionShapeComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // w20
  unsigned int *v5; // x8
  int v6; // w9
  __int64 v7; // x1
  _QWORD *v8; // x8
  _QWORD *v9; // x8
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x8
  void *v16; // x0
  __int64 v18; // [xsp+0h] [xbp-70h] BYREF
  int v19; // [xsp+8h] [xbp-68h]
  __int64 v20; // [xsp+10h] [xbp-60h]
  _QWORD *v21; // [xsp+18h] [xbp-58h]
  __int64 v22; // [xsp+20h] [xbp-50h]
  _QWORD *v23; // [xsp+28h] [xbp-48h]
  __int64 v24; // [xsp+38h] [xbp-38h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 208 )
  {
    v4 = 0;
    while ( 1 )
    {
      ((void (__fastcall *)(__int64 *__return_ptr, _QWORD))loc_219D38)(&v18, v4);
      Caver::BindingValue::ValueWithInt();
      v7 = *(_QWORD *)(a3 + 8);
      if ( v7 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v10 = v23;
      if ( v23 )
        goto LABEL_18;
LABEL_21:
      v13 = v21;
      if ( v21 )
      {
        v14 = v21[1] - 1LL;
        v21[1] = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v15 = v13[2] - 1LL;
          v13[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
      }
      v16 = (void *)(v18 - 24);
      if ( (__int64 *)(v18 - 24) != &qword_6FD2E0 )
      {
        v5 = (unsigned int *)(v18 - 8);
        if ( &pthread_create )
        {
          do
            v6 = __ldaxr(v5);
          while ( __stlxr(v6 - 1, v5) );
        }
        else
        {
          v6 = (*v5)--;
        }
        if ( v6 <= 0 )
          operator delete(v16);
      }
      if ( v4++ >= 7 )
        return;
    }
    *(_DWORD *)v7 = v19;
    *(_QWORD *)(v7 + 8) = v20;
    v8 = v21;
    *(_QWORD *)(v7 + 16) = v21;
    if ( v8 )
      ++v8[1];
    *(_QWORD *)(v7 + 24) = v22;
    v9 = v23;
    *(_QWORD *)(v7 + 32) = v23;
    if ( v9 )
      ++v9[1];
    *(_QWORD *)(a3 + 8) = v7 + 40;
    v10 = v23;
    if ( !v23 )
      goto LABEL_21;
LABEL_18:
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
    goto LABEL_21;
  }
  Caver::ShapeComponent::GetEnumValuesForBindedProperty();
}

