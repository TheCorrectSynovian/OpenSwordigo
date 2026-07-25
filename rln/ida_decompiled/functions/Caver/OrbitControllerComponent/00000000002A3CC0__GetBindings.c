/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3CC0
 * Mangled: _ZN5Caver24OrbitControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::OrbitControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001FD660  Caver::OrbitControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002A3BFC  Caver::OrbitControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FD660  Caver::OrbitControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 184
 *   insn=0x00000000002A3CD8 string=0x00000000002A3CDC "V"
 *   insn=0x00000000002A3CEC string=0x00000000002A3CF0 "!"
 *   insn=0x00000000002A3CEC string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002A3CF0 string=0x0000000000589660 "rotationAxis"
 *   insn=0x00000000002A3D18 string=0x00000000002A3D1C ""
 *   insn=0x00000000002A3D28 string=0x00000000002A3D2C "t"
 *   insn=0x00000000002A3D3C string=0x00000000002A3D40 ""
 *   insn=0x00000000002A3D4C string=0x00000000002A3D50 "\t\t@"
 *   insn=0x00000000002A3D54 string=0x00000000002A3D58 ""
 *   insn=0x00000000002A3D5C string=0x00000000002A3D60 "h"
 *   insn=0x00000000002A3D60 string=0x00000000002A3D64 ""
 *   insn=0x00000000002A3D64 string=0x00000000002A3D68 "h"
 *   insn=0x00000000002A3D7C string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002A3D94 string=0x00000000002A3F34 "\t""
 *   insn=0x00000000002A3DA4 string=0x00000000002A3F58 "\t""
 *   insn=0x00000000002A3DA8 string=0x0000000000584178 "rotationSpeed"
 *   insn=0x00000000002A3DD4 string=0x00000000002A3DD8 ""
 *   insn=0x00000000002A3DD8 string=0x00000000002A3DDC ""
 *   insn=0x00000000002A3DE4 string=0x00000000002A3DE8 "t"
 *   insn=0x00000000002A3DF8 string=0x00000000002A3DFC ""
 *   insn=0x00000000002A3E04 string=0x00000000002A3E08 "C"
 *   insn=0x00000000002A3E08 string=0x00000000002A3E0C "\t\t@"
 *   insn=0x00000000002A3E10 string=0x00000000002A3E14 ""
 *   insn=0x00000000002A3E18 string=0x00000000002A3E1C "h"
 *   insn=0x00000000002A3E1C string=0x00000000002A3E20 ""
 *   insn=0x00000000002A3E20 string=0x00000000002A3E24 "h"
 *   insn=0x00000000002A3E48 string=0x00000000002A3F7C "\t""
 *   insn=0x00000000002A3E54 string=0x00000000002A3E58 "A\n"
 *   insn=0x00000000002A3E58 string=0x00000000002A3E5C "!"
 *   insn=0x00000000002A3E58 string=0x00000000002A3FA0 "\t""
 *   insn=0x00000000002A3E5C string=0x000000000058966D "orbitDistance"
 *   insn=0x00000000002A3E68 string=0x00000000002A3E6C "S"
 *   insn=0x00000000002A3E90 string=0x00000000002A3E94 "t"
 *   insn=0x00000000002A3EA4 string=0x00000000002A3EA8 ""
 *   insn=0x00000000002A3EB0 string=0x00000000002A3EB4 "C"
 *   insn=0x00000000002A3EB4 string=0x00000000002A3EB8 "\t\t@"
 *   insn=0x00000000002A3EBC string=0x00000000002A3EC0 ""
 *   insn=0x00000000002A3EC4 string=0x00000000002A3EC8 "h"
 *   insn=0x00000000002A3EC8 string=0x00000000002A3ECC ""
 *   insn=0x00000000002A3ECC string=0x00000000002A3ED0 "h"
 *   insn=0x00000000002A3EF4 string=0x00000000002A3FC4 "\t""
 *   insn=0x00000000002A3F00 string=0x00000000002A3F04 "!"
 *   insn=0x00000000002A3F04 string=0x00000000002A3FE8 "\t""
 *   insn=0x00000000002A3F34 string=0x00000000002A3F38 ")=G"
 *   insn=0x00000000002A3F38 string=0x00000000002A3F3C "!"
 *   insn=0x00000000002A3F3C string=0x00000000002A3F40 "i"
 *   insn=0x00000000002A3F40 string=0x00000000002A3F44 "\t"
 *   insn=0x00000000002A3F40 string=0x00000000002A400C "\t"
 *   insn=0x00000000002A3F44 string=0x00000000002A3F48 "*"
 *   insn=0x00000000002A3F48 string=0x00000000002A3F4C "\n"
 *   insn=0x00000000002A3F50 string=0x00000000002A3F54 "1"
 *   insn=0x00000000002A3F54 string=0x00000000002A4018 "?"
 *   insn=0x00000000002A3F58 string=0x00000000002A3F5C ")=G"
 *   insn=0x00000000002A3F5C string=0x00000000002A3F60 "!"
 *   insn=0x00000000002A3F60 string=0x00000000002A3F64 "I"
 *   insn=0x00000000002A3F64 string=0x00000000002A3F68 "\t"
 *   insn=0x00000000002A3F64 string=0x00000000002A402C "\t"
 *   insn=0x00000000002A3F68 string=0x00000000002A3F6C "*"
 *   insn=0x00000000002A3F6C string=0x00000000002A3F70 "\n"
 *   insn=0x00000000002A3F74 string=0x00000000002A3F78 "0"
 *   insn=0x00000000002A3F78 string=0x00000000002A4038 "?"
 *   insn=0x00000000002A3F7C string=0x00000000002A3F80 ")=G"
 *   insn=0x00000000002A3F80 string=0x00000000002A3F84 "!"
 *   insn=0x00000000002A3F84 string=0x00000000002A3F88 ")"
 *   insn=0x00000000002A3F88 string=0x00000000002A3F8C "\t"
 *   insn=0x00000000002A3F88 string=0x00000000002A404C "\t"
 *   insn=0x00000000002A3F8C string=0x00000000002A3F90 "*"
 *   insn=0x00000000002A3F90 string=0x00000000002A3F94 "\n"
 *   insn=0x00000000002A3F98 string=0x00000000002A3F9C "/"
 *   insn=0x00000000002A3F9C string=0x00000000002A4058 "?"
 *   insn=0x00000000002A3FA0 string=0x00000000002A3FA4 ")=G"
 *   insn=0x00000000002A3FA4 string=0x00000000002A3FA8 "!"
 *   insn=0x00000000002A3FA8 string=0x00000000002A3FAC "\t"
 *   insn=0x00000000002A3FAC string=0x00000000002A3FB0 "\t"
 *   insn=0x00000000002A3FAC string=0x00000000002A406C "\t"
 *   insn=0x00000000002A3FB0 string=0x00000000002A3FB4 "*"
 *   insn=0x00000000002A3FB4 string=0x00000000002A3FB8 "\n"
 *   insn=0x00000000002A3FBC string=0x00000000002A3FC0 "."
 *   insn=0x00000000002A3FC0 string=0x00000000002A4078 "?"
 *   insn=0x00000000002A3FC4 string=0x00000000002A3FC8 ")=G"
 *   insn=0x00000000002A3FC8 string=0x00000000002A3FCC "!"
 *   insn=0x00000000002A3FD0 string=0x00000000002A3FD4 "\t"
 *   insn=0x00000000002A3FD0 string=0x00000000002A408C "\t"
 *   insn=0x00000000002A3FD4 string=0x00000000002A3FD8 "*"
 *   insn=0x00000000002A3FD8 string=0x00000000002A3FDC "\n"
 *   insn=0x00000000002A3FE0 string=0x00000000002A3FE4 "-"
 *   insn=0x00000000002A3FE4 string=0x00000000002A4098 "?"
 *   insn=0x00000000002A3FE8 string=0x00000000002A3FEC ")=G"
 *   insn=0x00000000002A3FEC string=0x00000000002A3FF0 "!"
 *   insn=0x00000000002A3FF4 string=0x00000000002A3FF8 "\t"
 *   insn=0x00000000002A3FF4 string=0x00000000002A40AC "\t"
 *   insn=0x00000000002A3FF8 string=0x00000000002A3FFC "*"
 *   insn=0x00000000002A3FFC string=0x00000000002A4000 "\n"
 *   insn=0x00000000002A4004 string=0x00000000002A4008 ","
 *   insn=0x00000000002A4008 string=0x00000000002A40B8 "?"
 *   insn=0x00000000002A400C string=0x00000000002A4010 "*"
 *   insn=0x00000000002A4010 string=0x00000000002A4014 "\n"
 *   insn=0x00000000002A4024 string=0x00000000002A4028 "\"
 *   insn=0x00000000002A402C string=0x00000000002A4030 "*"
 *   insn=0x00000000002A4030 string=0x00000000002A4034 "\n"
 *   insn=0x00000000002A4038 string=0x00000000002A403C "l"
 *   insn=0x00000000002A4044 string=0x00000000002A4048 "X"
 *   insn=0x00000000002A404C string=0x00000000002A4050 "*"
 *   insn=0x00000000002A4050 string=0x00000000002A4054 "\n"
 *   insn=0x00000000002A4064 string=0x00000000002A4068 "y"
 *   insn=0x00000000002A406C string=0x00000000002A4070 "*"
 *   insn=0x00000000002A4070 string=0x00000000002A4074 "\n"
 *   insn=0x00000000002A4084 string=0x00000000002A4088 "u"
 *   insn=0x00000000002A408C string=0x00000000002A4090 "*"
 *   insn=0x00000000002A4090 string=0x00000000002A4094 "\n"
 *   insn=0x00000000002A40AC string=0x00000000002A40B0 "*"
 *   insn=0x00000000002A40B0 string=0x00000000002A40B4 "\n"
 *   insn=0x00000000002A40B8 string=0x00000000002A40BC "l"
 *   insn=0x00000000002A40CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A40D4 string=0x00000000002A40D8 "(a"
 *   insn=0x00000000002A40E0 string=0x00000000002A40E4 "\n""
 *   insn=0x00000000002A40E4 string=0x00000000002A40E8 "J=G"
 *   insn=0x00000000002A40E8 string=0x00000000002A40EC ")!"
 *   insn=0x00000000002A40F0 string=0x00000000002A40F4 "*"
 *   insn=0x00000000002A40F0 string=0x00000000002A4108 "*"
 *   insn=0x00000000002A40F4 string=0x00000000002A40F8 "K"
 *   insn=0x00000000002A40F8 string=0x00000000002A40FC "+"
 *   insn=0x00000000002A4104 string=0x00000000002A4114 "_"
 *   insn=0x00000000002A4108 string=0x00000000002A410C "K"
 *   insn=0x00000000002A410C string=0x00000000002A4110 "+"
 *   insn=0x00000000002A413C string=0x00000000002A4140 "\t""
 *   insn=0x00000000002A4140 string=0x00000000002A4144 ")=G"
 *   insn=0x00000000002A4144 string=0x00000000002A4148 "!"
 *   insn=0x00000000002A4148 string=0x00000000002A414C "i"
 *   insn=0x00000000002A414C string=0x00000000002A4150 "\t"
 *   insn=0x00000000002A414C string=0x00000000002A42B8 "\t"
 *   insn=0x00000000002A4150 string=0x00000000002A4154 "*"
 *   insn=0x00000000002A4154 string=0x00000000002A4158 "\n"
 *   insn=0x00000000002A415C string=0x00000000002A4160 "P"
 *   insn=0x00000000002A4160 string=0x00000000002A42A0 "?"
 *   insn=0x00000000002A416C string=0x00000000002A4170 "(a"
 *   insn=0x00000000002A4178 string=0x00000000002A417C "\n""
 *   insn=0x00000000002A417C string=0x00000000002A4180 "J=G"
 *   insn=0x00000000002A4180 string=0x00000000002A4184 ")!"
 *   insn=0x00000000002A4188 string=0x00000000002A418C "*"
 *   insn=0x00000000002A4188 string=0x00000000002A41A0 "*"
 *   insn=0x00000000002A418C string=0x00000000002A4190 "K"
 *   insn=0x00000000002A4190 string=0x00000000002A4194 "+"
 *   insn=0x00000000002A419C string=0x00000000002A41AC "_"
 *   insn=0x00000000002A41A0 string=0x00000000002A41A4 "K"
 *   insn=0x00000000002A41A4 string=0x00000000002A41A8 "+"
 *   insn=0x00000000002A41B8 string=0x00000000002A41BC "z"
 *   insn=0x00000000002A41D4 string=0x00000000002A41D8 "\t""
 *   insn=0x00000000002A41D8 string=0x00000000002A41DC ")=G"
 *   insn=0x00000000002A41DC string=0x00000000002A41E0 "!"
 *   insn=0x00000000002A41E4 string=0x00000000002A41E8 "\t"
 *   insn=0x00000000002A41E8 string=0x00000000002A41EC "*"
 *   insn=0x00000000002A41EC string=0x00000000002A41F0 "\n"
 *   insn=0x00000000002A41F4 string=0x00000000002A41F8 "*"
 *   insn=0x00000000002A4200 string=0x00000000002A4204 "\n""
 *   insn=0x00000000002A4204 string=0x00000000002A4208 "J"
 *   insn=0x00000000002A420C string=0x00000000002A4210 "(a"
 *   insn=0x00000000002A4218 string=0x00000000002A421C "\n""
 *   insn=0x00000000002A421C string=0x00000000002A4220 "J=G"
 *   insn=0x00000000002A4220 string=0x00000000002A4224 ")!"
 *   insn=0x00000000002A4228 string=0x00000000002A422C "*"
 *   insn=0x00000000002A4228 string=0x00000000002A4240 "*"
 *   insn=0x00000000002A422C string=0x00000000002A4230 "K"
 *   insn=0x00000000002A4230 string=0x00000000002A4234 "+"
 *   insn=0x00000000002A423C string=0x00000000002A424C "_"
 *   insn=0x00000000002A4240 string=0x00000000002A4244 "K"
 *   insn=0x00000000002A4244 string=0x00000000002A4248 "+"
 *   insn=0x00000000002A4258 string=0x00000000002A425C "R"
 *   insn=0x00000000002A4268 string=0x00000000002A426C "\t""
 *   insn=0x00000000002A426C string=0x00000000002A4270 ")"
 *   insn=0x00000000002A427C string=0x00000000002A4280 "\t""
 *   insn=0x00000000002A4280 string=0x00000000002A4284 ")=G"
 *   insn=0x00000000002A4284 string=0x00000000002A4288 "!"
 *   insn=0x00000000002A4288 string=0x00000000002A428C "i"
 *   insn=0x00000000002A428C string=0x00000000002A4290 "\t"
 *   insn=0x00000000002A4290 string=0x00000000002A4294 "*"
 *   insn=0x00000000002A4294 string=0x00000000002A4298 "\n"
 *   insn=0x00000000002A42A0 string=0x00000000002A42A4 "l"
 *   insn=0x00000000002A42A8 string=0x00000000002A42AC ">"
 *   insn=0x00000000002A42B8 string=0x00000000002A42BC "*"
 *   insn=0x00000000002A42BC string=0x00000000002A42C0 "\n"
 *   insn=0x00000000002A42C0 string=0x00000000002A42C4 "?"
 *   insn=0x00000000002A42C4 string=0x00000000002A42C8 ""
 *   insn=0x00000000002A42D8 string=0x00000000001FD660 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OrbitControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x20
  void *v10; // x0
  void *v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  __int64 v24; // [xsp+8h] [xbp-78h] BYREF
  int v25; // [xsp+18h] [xbp-68h]
  __int64 v26; // [xsp+20h] [xbp-60h] BYREF
  __int64 v27; // [xsp+28h] [xbp-58h]
  int v28; // [xsp+30h] [xbp-50h]
  __int64 v29; // [xsp+38h] [xbp-48h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v24, "rotationAxis");
  v25 = 0;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x900000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v25;
    sub_56A528(v3 + 8, &v26);
    *(_DWORD *)(v3 + 24) = v28;
    *(_QWORD *)(v3 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v26 - 8);
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
      operator delete(v4);
  }
  v5 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v24, "rotationSpeed");
  v25 = 1;
  sub_56A528(&v26, &v24);
  v28 = 0;
  v27 = 0x500000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v25;
    sub_56A528(v6 + 8, &v26);
    *(_DWORD *)(v6 + 24) = v28;
    *(_QWORD *)(v6 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)&v24, "orbitDistance");
  v25 = 2;
  sub_56A528(&v26, &v24);
  v27 = 0x500000001LL;
  v28 = 0;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v25;
    sub_56A528(v9 + 8, &v26);
    *(_DWORD *)(v9 + 24) = v28;
    *(_QWORD *)(v9 + 16) = v27;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
      operator delete(v10);
  }
  v11 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v23 = __ldaxr(v22);
      while ( __stlxr(v23 - 1, v22) );
    }
    else
    {
      v23 = (*v22)--;
    }
    if ( v23 <= 0 )
      operator delete(v11);
  }
}

