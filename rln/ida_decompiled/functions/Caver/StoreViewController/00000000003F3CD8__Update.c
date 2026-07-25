/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F3CD8
 * Mangled: _ZN5Caver19StoreViewController6UpdateEf
 * Demangled: Caver::StoreViewController::Update(float)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F56F0  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7060  Caver::StripeView::SetTitle(std::string const&)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x0000000000202490  Caver::GUIViewController::Update(float)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 160
 *   insn=0x00000000003F3CEC string=0x00000000003F3CF0 "U"
 *   insn=0x00000000003F3CF4 string=0x00000000003F3CF8 ""
 *   insn=0x00000000003F3D00 string=0x00000000003F3D04 "[-"
 *   insn=0x00000000003F3D04 string=0x00000000003F3D08 ""
 *   insn=0x00000000003F3D08 string=0x00000000003F3D0C ")@"
 *   insn=0x00000000003F3D10 string=0x00000000003F3D14 "jNC9iBC9"
 *   insn=0x00000000003F3D14 string=0x00000000003F3D18 "iBC9"
 *   insn=0x00000000003F3D18 string=0x00000000003F3D1C ""
 *   insn=0x00000000003F3D1C string=0x00000000003F3D20 "hF"
 *   insn=0x00000000003F3D28 string=0x00000000003F3D2C "jJC9?"
 *   insn=0x00000000003F3D28 string=0x00000000003F3D38 "j.@"
 *   insn=0x00000000003F3D2C string=0x00000000003F3D30 "?"
 *   insn=0x00000000003F3D38 string=0x00000000003F3D3C "iJ"
 *   insn=0x00000000003F3D3C string=0x00000000003F3D40 "hN"
 *   insn=0x00000000003F3D40 string=0x00000000003F3D44 "T"
 *   insn=0x00000000003F3D44 string=0x00000000003F3D48 ")"
 *   insn=0x00000000003F3D48 string=0x00000000003F3DAC "1-"
 *   insn=0x00000000003F3D6C string=0x00000000001F7060 "0'"
 *   insn=0x00000000003F3D74 string=0x00000000003F3D78 ")"
 *   insn=0x00000000003F3D84 string=0x00000000003F3E94 "h&G"
 *   insn=0x00000000003F3D88 string=0x00000000003F3D8C ")=G"
 *   insn=0x00000000003F3D8C string=0x00000000003F3D90 "!"
 *   insn=0x00000000003F3D94 string=0x00000000003F3D98 "\t"
 *   insn=0x00000000003F3D94 string=0x00000000003F3F70 "\t"
 *   insn=0x00000000003F3D98 string=0x00000000003F3D9C "*"
 *   insn=0x00000000003F3D9C string=0x00000000003F3DA0 "\n"
 *   insn=0x00000000003F3DA4 string=0x00000000003F3DA8 "u"
 *   insn=0x00000000003F3DA8 string=0x00000000003F3F7C "?"
 *   insn=0x00000000003F3DAC string=0x00000000003F3DB0 ""
 *   insn=0x00000000003F3DB0 string=0x00000000003F3DB4 "\t\t@"
 *   insn=0x00000000003F3DB8 string=0x00000000003F3DBC " "
 *   insn=0x00000000003F3DC0 string=0x000000000059334F "Connecting to "
 *   insn=0x00000000003F3DE0 string=0x000000000059335E " Store..."
 *   insn=0x00000000003F3DE8 string=0x00000000003F3DEC """
 *   insn=0x00000000003F3DEC string=0x00000000003F3DF0 "y"
 *   insn=0x00000000003F3E20 string=0x00000000003F3E24 "!"
 *   insn=0x00000000003F3E38 string=0x00000000003F3E3C ")=G"
 *   insn=0x00000000003F3E3C string=0x00000000003F3E40 "!"
 *   insn=0x00000000003F3E40 string=0x00000000003F3E44 "I\n"
 *   insn=0x00000000003F3E44 string=0x00000000003F3E48 "\t"
 *   insn=0x00000000003F3E44 string=0x00000000003F3F8C "\t"
 *   insn=0x00000000003F3E48 string=0x00000000003F3E4C "*"
 *   insn=0x00000000003F3E4C string=0x00000000003F3E50 "\n"
 *   insn=0x00000000003F3E54 string=0x00000000003F3E58 "P"
 *   insn=0x00000000003F3E58 string=0x00000000003F3F98 "?"
 *   insn=0x00000000003F3E5C string=0x00000000005934CF "Checking your purchases..."
 *   insn=0x00000000003F3E68 string=0x00000000003F3E6C "S"
 *   insn=0x00000000003F3E74 string=0x00000000003F3E78 "z"
 *   insn=0x00000000003F3E80 string=0x00000000003F3E84 ")"
 *   insn=0x00000000003F3E94 string=0x00000000003F3E98 "?"
 *   insn=0x00000000003F3EB0 string=0x00000000003F3EB4 "h&G"
 *   insn=0x00000000003F3EB0 string=0x00000000001F56F0 "P'"
 *   insn=0x00000000003F3EBC string=0x00000000003F3EC0 ")"
 *   insn=0x00000000003F3EC0 string=0x00000000003F3EC4 ")"
 *   insn=0x00000000003F3EC4 string=0x00000000003F3EC8 "?"
 *   insn=0x00000000003F3ED4 string=0x00000000003F3ED8 "n9"
 *   insn=0x00000000003F3EE4 string=0x00000000003F3EE8 "!"
 *   insn=0x00000000003F3F04 string=0x00000000003F3F08 ")=G"
 *   insn=0x00000000003F3F08 string=0x00000000003F3F0C "!"
 *   insn=0x00000000003F3F10 string=0x00000000003F3F14 "\t"
 *   insn=0x00000000003F3F10 string=0x00000000003F3FAC "\t"
 *   insn=0x00000000003F3F14 string=0x00000000003F3F18 "*"
 *   insn=0x00000000003F3F18 string=0x00000000003F3F1C "\n"
 *   insn=0x00000000003F3F20 string=0x00000000003F3F24 "%"
 *   insn=0x00000000003F3F24 string=0x00000000003F3FB8 "?"
 *   insn=0x00000000003F3F28 string=0x00000000003F3F2C ")=G"
 *   insn=0x00000000003F3F2C string=0x00000000003F3F30 "!"
 *   insn=0x00000000003F3F34 string=0x00000000003F3F38 "\t"
 *   insn=0x00000000003F3F34 string=0x00000000003F3FCC "\t"
 *   insn=0x00000000003F3F38 string=0x00000000003F3F3C "*"
 *   insn=0x00000000003F3F3C string=0x00000000003F3F40 "\n"
 *   insn=0x00000000003F3F44 string=0x00000000003F3F48 "$"
 *   insn=0x00000000003F3F48 string=0x00000000003F3FD8 "?"
 *   insn=0x00000000003F3F4C string=0x00000000003F3F50 ")=G"
 *   insn=0x00000000003F3F50 string=0x00000000003F3F54 "!"
 *   insn=0x00000000003F3F58 string=0x00000000003F3F5C "\t"
 *   insn=0x00000000003F3F5C string=0x00000000003F3F60 "*"
 *   insn=0x00000000003F3F60 string=0x00000000003F3F64 "\n"
 *   insn=0x00000000003F3F70 string=0x00000000003F3F74 "*"
 *   insn=0x00000000003F3F74 string=0x00000000003F3F78 "\n"
 *   insn=0x00000000003F3F84 string=0x00000000003F3F88 ""
 *   insn=0x00000000003F3F8C string=0x00000000003F3F90 "*"
 *   insn=0x00000000003F3F90 string=0x00000000003F3F94 "\n"
 *   insn=0x00000000003F3FAC string=0x00000000003F3FB0 "*"
 *   insn=0x00000000003F3FB0 string=0x00000000003F3FB4 "\n"
 *   insn=0x00000000003F3FCC string=0x00000000003F3FD0 "*"
 *   insn=0x00000000003F3FD0 string=0x00000000003F3FD4 "\n"
 *   insn=0x00000000003F3FD8 string=0x00000000003F3FDC "l"
 *   insn=0x00000000003F3FEC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003F3FF4 string=0x00000000003F3FF8 "J"
 *   insn=0x00000000003F3FFC string=0x00000000003F4000 "(a"
 *   insn=0x00000000003F4004 string=0x00000000003F4008 "@"
 *   insn=0x00000000003F400C string=0x00000000003F4010 "J=G"
 *   insn=0x00000000003F4010 string=0x00000000003F4014 ")!"
 *   insn=0x00000000003F4014 string=0x00000000003F4018 "J"
 *   insn=0x00000000003F4018 string=0x00000000003F401C "*"
 *   insn=0x00000000003F4018 string=0x00000000003F4080 "*"
 *   insn=0x00000000003F401C string=0x00000000003F4020 "K"
 *   insn=0x00000000003F4020 string=0x00000000003F4024 "+"
 *   insn=0x00000000003F402C string=0x00000000003F406C "_"
 *   insn=0x00000000003F4034 string=0x00000000003F4038 "J"
 *   insn=0x00000000003F403C string=0x00000000003F4040 "(a"
 *   insn=0x00000000003F4044 string=0x00000000003F4048 "@"
 *   insn=0x00000000003F404C string=0x00000000003F4050 "J=G"
 *   insn=0x00000000003F4050 string=0x00000000003F4054 ")!"
 *   insn=0x00000000003F4054 string=0x00000000003F4058 "J"
 *   insn=0x00000000003F4058 string=0x00000000003F405C "*"
 *   insn=0x00000000003F405C string=0x00000000003F4060 "K"
 *   insn=0x00000000003F4060 string=0x00000000003F4064 "+"
 *   insn=0x00000000003F4078 string=0x00000000003F407C "\"
 *   insn=0x00000000003F407C string=0x00000000003F41EC "n"
 *   insn=0x00000000003F4080 string=0x00000000003F4084 "K"
 *   insn=0x00000000003F4084 string=0x00000000003F4088 "+"
 *   insn=0x00000000003F4088 string=0x00000000003F408C "_"
 *   insn=0x00000000003F408C string=0x00000000003F4090 "-"
 *   insn=0x00000000003F4090 string=0x00000000003F4094 "W"
 *   insn=0x00000000003F4098 string=0x00000000003F409C "\n6"
 *   insn=0x00000000003F40A4 string=0x00000000003F40A8 "J"
 *   insn=0x00000000003F40AC string=0x00000000003F40B0 "(a"
 *   insn=0x00000000003F40BC string=0x00000000003F40C0 "J=G"
 *   insn=0x00000000003F40C0 string=0x00000000003F40C4 ")!"
 *   insn=0x00000000003F40C8 string=0x00000000003F40CC "*"
 *   insn=0x00000000003F40C8 string=0x00000000003F4120 "*"
 *   insn=0x00000000003F40CC string=0x00000000003F40D0 "K"
 *   insn=0x00000000003F40D0 string=0x00000000003F40D4 "+"
 *   insn=0x00000000003F40DC string=0x00000000003F412C "_"
 *   insn=0x00000000003F40E4 string=0x00000000003F40E8 "J"
 *   insn=0x00000000003F40EC string=0x00000000003F40F0 "(a"
 *   insn=0x00000000003F40FC string=0x00000000003F4100 "J=G"
 *   insn=0x00000000003F4100 string=0x00000000003F4104 ")!"
 *   insn=0x00000000003F4108 string=0x00000000003F410C "*"
 *   insn=0x00000000003F410C string=0x00000000003F4110 "K"
 *   insn=0x00000000003F4110 string=0x00000000003F4114 "+"
 *   insn=0x00000000003F4120 string=0x00000000003F4124 "K"
 *   insn=0x00000000003F4124 string=0x00000000003F4128 "+"
 *   insn=0x00000000003F414C string=0x00000000003F4150 ")"
 *   insn=0x00000000003F4158 string=0x00000000003F415C "`"
 *   insn=0x00000000003F4160 string=0x00000000003F4164 ")=G"
 *   insn=0x00000000003F4164 string=0x00000000003F4168 "!"
 *   insn=0x00000000003F416C string=0x00000000003F4170 "\t"
 *   insn=0x00000000003F416C string=0x00000000003F4184 "\t"
 *   insn=0x00000000003F4170 string=0x00000000003F4174 "*"
 *   insn=0x00000000003F4174 string=0x00000000003F4178 "\n"
 *   insn=0x00000000003F4180 string=0x00000000003F4190 "?"
 *   insn=0x00000000003F4184 string=0x00000000003F4188 "*"
 *   insn=0x00000000003F4188 string=0x00000000003F418C "\n"
 *   insn=0x00000000003F41AC string=0x00000000003F41B0 ")"
 *   insn=0x00000000003F41C0 string=0x00000000003F41C4 ")=G"
 *   insn=0x00000000003F41C4 string=0x00000000003F41C8 "!"
 *   insn=0x00000000003F41C8 string=0x00000000003F41CC "i"
 *   insn=0x00000000003F41CC string=0x00000000003F41D0 "\t"
 *   insn=0x00000000003F41CC string=0x00000000003F41F8 "\t"
 *   insn=0x00000000003F41D0 string=0x00000000003F41D4 "*"
 *   insn=0x00000000003F41D4 string=0x00000000003F41D8 "\n"
 *   insn=0x00000000003F41DC string=0x00000000003F41E0 "?"
 *   insn=0x00000000003F41E0 string=0x00000000003F41E4 "l"
 *   insn=0x00000000003F41F8 string=0x00000000003F41FC "*"
 *   insn=0x00000000003F41FC string=0x00000000003F4200 "\n"
 *   insn=0x00000000003F4200 string=0x00000000003F4204 "?"
 *   insn=0x00000000003F4204 string=0x00000000003F4208 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreViewController::Update(Caver::StoreViewController *this, float a2)
{
  __int64 v4; // x0
  Caver::StoreController *v5; // x0
  int v6; // w10
  int v7; // w9
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  __int64 v11; // x0
  void *v12; // x0
  void *v13; // x0
  unsigned int *v14; // x8
  int v15; // w9
  __int64 v16; // x20
  unsigned __int64 v17; // x22
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  __int64 v22; // [xsp+8h] [xbp-58h] BYREF
  __int64 v23; // [xsp+10h] [xbp-50h] BYREF
  _QWORD v24[3]; // [xsp+18h] [xbp-48h] BYREF

  v24[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = Caver::StoreController::SharedController(this);
  v5 = (Caver::StoreController *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  v6 = *((unsigned __int8 *)this + 211);
  v7 = *((unsigned __int8 *)this + 208);
  *((_BYTE *)this + 209) = (unsigned __int8)v5 & 1;
  if ( ((unsigned __int8)v5 & 1) == v6 && v7 == *((unsigned __int8 *)this + 210) )
    goto LABEL_19;
  *((_BYTE *)this + 210) = v7;
  *((_BYTE *)this + 211) = (unsigned __int8)v5 & 1;
  if ( v7 )
  {
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      sub_566BB8((int)v24, "");
      Caver::StripeView::SetTitle();
      v8 = (void *)(v24[0] - 24LL);
      if ( (__int64 *)(v24[0] - 24LL) == &qword_6FD2E0 )
        goto LABEL_16;
      v9 = (unsigned int *)(v24[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
        goto LABEL_30;
      }
    }
    else
    {
      sub_566BB8((int)v24, "Checking your purchases...");
      Caver::StripeView::SetTitle();
      v8 = (void *)(v24[0] - 24LL);
      if ( (__int64 *)(v24[0] - 24LL) == &qword_6FD2E0 )
        goto LABEL_16;
      v9 = (unsigned int *)(v24[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
LABEL_30:
        if ( v10 > 0 )
          goto LABEL_16;
        goto LABEL_34;
      }
    }
    v10 = (*v9)--;
    goto LABEL_30;
  }
  v11 = Caver::StoreController::SharedController(v5);
  (*(void (__fastcall **)(__int64 *__return_ptr))(*(_QWORD *)v11 + 16LL))(&v22);
  ((void (__fastcall *)(__int64 *__return_ptr, const char *, __int64 *))loc_25A030)(&v23, "Connecting to ", &v22);
  sub_56A528(v24, &v23);
  sub_5677D4(v24, " Store...", 9);
  Caver::StripeView::SetTitle();
  v12 = (void *)(v24[0] - 24LL);
  if ( (__int64 *)(v24[0] - 24LL) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v24[0] - 8LL);
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
      operator delete(v12);
  }
  v13 = (void *)(v23 - 24);
  if ( (__int64 *)(v23 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v23 - 8);
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
      operator delete(v13);
  }
  v8 = (void *)(v22 - 24);
  if ( (__int64 *)(v22 - 24) == &qword_6FD2E0 )
    goto LABEL_16;
  v14 = (unsigned int *)(v22 - 8);
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
  if ( v15 > 0 )
    goto LABEL_16;
LABEL_34:
  operator delete(v8);
LABEL_16:
  if ( *((_QWORD *)this + 15) != *((_QWORD *)this + 14) )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      Caver::StoreViewController::UpdateProductBuyButton();
      ++v17;
      v16 += 8;
    }
    while ( (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3 > v17 );
  }
LABEL_19:
  Caver::GUIViewController::Update(this, a2);
}

