/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026AED8
 * Mangled: _ZN5Caver25EntityControllerComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::EntityControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001FFBC0  Caver::EntityControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7770  Caver::StringForMovementBehavior(Caver::EntityControllerComponent::MovementBehavior)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 83
 *   insn=0x000000000026AEEC string=0x000000000026AEF0 "X"
 *   insn=0x000000000026AEF0 string=0x000000000026AEF4 ""
 *   insn=0x000000000026AEF8 string=0x000000000026AEFC "?"
 *   insn=0x000000000026AF20 string=0x000000000026AF24 "S]"
 *   insn=0x000000000026AF24 string=0x000000000026AF28 "_"
 *   insn=0x000000000026AF28 string=0x000000000026B0A4 ""
 *   insn=0x000000000026AF30 string=0x000000000026AF34 "\t"
 *   insn=0x000000000026AF30 string=0x000000000026AF48 "\t"
 *   insn=0x000000000026AF34 string=0x000000000026AF38 "*"
 *   insn=0x000000000026AF38 string=0x000000000026AF3C "\n"
 *   insn=0x000000000026AF44 string=0x000000000026AF54 "?"
 *   insn=0x000000000026AF48 string=0x000000000026AF4C "*"
 *   insn=0x000000000026AF4C string=0x000000000026AF50 "\n"
 *   insn=0x000000000026AF60 string=0x000000000026AF64 "M"
 *   insn=0x000000000026AF70 string=0x00000000001F7770 "0'"
 *   insn=0x000000000026AF7C string=0x000000000026AF80 "pS"
 *   insn=0x000000000026AF80 string=0x000000000026AF84 "a"
 *   insn=0x000000000026AF84 string=0x000000000026AF88 "?"
 *   insn=0x000000000026AF90 string=0x000000000026AF94 "("
 *   insn=0x000000000026AF98 string=0x000000000026AF9C "("
 *   insn=0x000000000026AFA0 string=0x000000000026AFA4 "("
 *   insn=0x000000000026AFA8 string=0x000000000026AFAC "\t"
 *   insn=0x000000000026AFAC string=0x000000000026AFB0 ")"
 *   insn=0x000000000026AFB0 string=0x000000000026AFB4 "\t"
 *   insn=0x000000000026AFB8 string=0x000000000026AFBC "("
 *   insn=0x000000000026AFC0 string=0x000000000026AFC4 "("
 *   insn=0x000000000026AFC8 string=0x000000000026AFCC "\t"
 *   insn=0x000000000026AFC8 string=0x000000000026AFD8 "("
 *   insn=0x000000000026AFCC string=0x000000000026AFD0 ")"
 *   insn=0x000000000026AFD0 string=0x000000000026AFD4 "\t"
 *   insn=0x000000000026AFD8 string=0x000000000026AFDC "h"
 *   insn=0x000000000026AFF0 string=0x000000000026AFF4 "7V"
 *   insn=0x000000000026AFF8 string=0x000000000026AFFC "5"
 *   insn=0x000000000026B000 string=0x000000000026B004 ""
 *   insn=0x000000000026B010 string=0x000000000026B014 "\t@"
 *   insn=0x000000000026B020 string=0x000000000026B024 ""
 *   insn=0x000000000026B030 string=0x000000000026B034 "@"
 *   insn=0x000000000026B040 string=0x000000000026B044 "5"
 *   insn=0x000000000026B048 string=0x000000000026B04C ""
 *   insn=0x000000000026B058 string=0x000000000026B05C "\t@"
 *   insn=0x000000000026B068 string=0x000000000026B06C ""
 *   insn=0x000000000026B078 string=0x000000000026B07C "@"
 *   insn=0x000000000026B094 string=0x000000000026AF2C "!"
 *   insn=0x000000000026B09C string=0x000000000026B0A0 "C"
 *   insn=0x000000000026B0CC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026B0D4 string=0x000000000026B0D8 "t\n"
 *   insn=0x000000000026B0DC string=0x000000000026B0E0 ""
 *   insn=0x000000000026B0EC string=0x000000000026B0F0 "\t@"
 *   insn=0x000000000026B0FC string=0x000000000026B100 ""
 *   insn=0x000000000026B10C string=0x000000000026B110 "@"
 *   insn=0x000000000026B118 string=0x000000000026B11C "B"
 *   insn=0x000000000026B128 string=0x000000000026B12C "4"
 *   insn=0x000000000026B130 string=0x000000000026B134 ""
 *   insn=0x000000000026B140 string=0x000000000026B144 "\t@"
 *   insn=0x000000000026B150 string=0x000000000026B154 ""
 *   insn=0x000000000026B160 string=0x000000000026B164 "@"
 *   insn=0x000000000026B178 string=0x000000000026B17C ""
 *   insn=0x000000000026B188 string=0x000000000026B18C "\t@"
 *   insn=0x000000000026B198 string=0x000000000026B19C ""
 *   insn=0x000000000026B1A8 string=0x000000000026B1AC "@"
 *   insn=0x000000000026B1B4 string=0x000000000026B1B8 ""
 *   insn=0x000000000026B1C0 string=0x000000000026B1C4 "b"
 *   insn=0x000000000026B1CC string=0x000000000026B1D0 "4"
 *   insn=0x000000000026B1D4 string=0x000000000026B1D8 ""
 *   insn=0x000000000026B1E4 string=0x000000000026B1E8 "\t@"
 *   insn=0x000000000026B1F4 string=0x000000000026B1F8 ""
 *   insn=0x000000000026B204 string=0x000000000026B208 "@"
 *   insn=0x000000000026B214 string=0x000000000026B218 "M"
 *   insn=0x000000000026B218 string=0x000000000026B21C "L"
 *   insn=0x000000000026B22C string=0x000000000026B230 "`"
 *   insn=0x000000000026B230 string=0x000000000026B234 "!"
 *   insn=0x000000000026B234 string=0x000000000026B238 "v"
 *   insn=0x000000000026B238 string=0x000000000026B23C "\t"
 *   insn=0x000000000026B238 string=0x000000000026B264 "\t"
 *   insn=0x000000000026B23C string=0x000000000026B240 "*"
 *   insn=0x000000000026B240 string=0x000000000026B244 "\n"
 *   insn=0x000000000026B248 string=0x000000000026B24C "?"
 *   insn=0x000000000026B24C string=0x000000000026B250 "l"
 *   insn=0x000000000026B254 string=0x000000000026B258 "S"
 *   insn=0x000000000026B264 string=0x000000000026B268 "*"
 *   insn=0x000000000026B268 string=0x000000000026B26C "\n"
 *   insn=0x000000000026B26C string=0x000000000026B270 "?"
 *   insn=0x000000000026B270 string=0x000000000026B274 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityControllerComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // w20
  unsigned int *v5; // x8
  int v6; // w9
  __int64 v7; // x1
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v14; // [xsp+0h] [xbp-70h]
  int v15; // [xsp+8h] [xbp-68h]
  __int64 v16; // [xsp+10h] [xbp-60h]
  _QWORD *v17; // [xsp+18h] [xbp-58h]
  __int64 v18; // [xsp+20h] [xbp-50h]
  _QWORD *v19; // [xsp+28h] [xbp-48h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 6 )
  {
    v4 = 0;
    while ( 1 )
    {
      Caver::StringForMovementBehavior();
      Caver::BindingValue::ValueWithInt();
      v7 = *(_QWORD *)(a3 + 8);
      if ( v7 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v8 = v19;
      if ( v19 )
        goto LABEL_18;
LABEL_21:
      if ( v17 )
      {
        v11 = v17[1] - 1LL;
        v17[1] = v11;
        if ( !v11 )
        {
          (*(void (__fastcall **)())(*v17 + 16LL))();
          v12 = v17[2] - 1LL;
          v17[2] = v12;
          if ( !v12 )
            (*(void (__fastcall **)())(*v17 + 24LL))();
        }
      }
      if ( (__int64 *)(v14 - 24) != &qword_6FD2E0 )
      {
        v5 = (unsigned int *)(v14 - 8);
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
          operator delete((void *)(v14 - 24));
      }
      if ( v4++ >= 3 )
        return;
    }
    *(_DWORD *)v7 = v15;
    *(_QWORD *)(v7 + 8) = v16;
    *(_QWORD *)(v7 + 16) = v17;
    if ( v17 )
      ++v17[1];
    *(_QWORD *)(v7 + 24) = v18;
    *(_QWORD *)(v7 + 32) = v19;
    if ( v19 )
      ++v19[1];
    *(_QWORD *)(a3 + 8) = v7 + 40;
    v8 = v19;
    if ( !v19 )
      goto LABEL_21;
LABEL_18:
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
    goto LABEL_21;
  }
  Caver::Component::GetEnumValuesForBindedProperty();
}

