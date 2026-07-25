/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000254FF4
 * Mangled: _ZN5Caver24BreakableObjectComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::BreakableObjectComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001FC530  Caver::BreakableObjectComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 9
 *   0x00000000001F3CC0  Caver::StringForSpecialDamageType(Caver::SpecialDamageType)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 82
 *   insn=0x0000000000255008 string=0x000000000025500C "X"
 *   insn=0x000000000025500C string=0x0000000000255010 ""
 *   insn=0x0000000000255014 string=0x0000000000255018 "?"
 *   insn=0x0000000000255024 string=0x0000000000255028 "v$"
 *   insn=0x0000000000255040 string=0x0000000000255044 "_"
 *   insn=0x0000000000255044 string=0x00000000002551C0 ""
 *   insn=0x000000000025504C string=0x0000000000255050 "\t"
 *   insn=0x000000000025504C string=0x0000000000255064 "\t"
 *   insn=0x0000000000255050 string=0x0000000000255054 "*"
 *   insn=0x0000000000255054 string=0x0000000000255058 "\n"
 *   insn=0x0000000000255060 string=0x0000000000255070 "?"
 *   insn=0x0000000000255064 string=0x0000000000255068 "*"
 *   insn=0x0000000000255068 string=0x000000000025506C "\n"
 *   insn=0x000000000025507C string=0x0000000000255080 "M"
 *   insn=0x0000000000255088 string=0x000000000025508C "{"
 *   insn=0x000000000025508C string=0x00000000001F3CC0 "P'"
 *   insn=0x0000000000255098 string=0x000000000025509C ")"
 *   insn=0x000000000025509C string=0x00000000002550A0 "a"
 *   insn=0x00000000002550A0 string=0x00000000002550A4 "?"
 *   insn=0x00000000002550AC string=0x00000000002550B0 "("
 *   insn=0x00000000002550B4 string=0x00000000002550B8 "("
 *   insn=0x00000000002550BC string=0x00000000002550C0 "("
 *   insn=0x00000000002550C4 string=0x00000000002550C8 "\t"
 *   insn=0x00000000002550C8 string=0x00000000002550CC ")"
 *   insn=0x00000000002550CC string=0x00000000002550D0 "\t"
 *   insn=0x00000000002550D4 string=0x00000000002550D8 "("
 *   insn=0x00000000002550DC string=0x00000000002550E0 "("
 *   insn=0x00000000002550E4 string=0x00000000002550E8 "\t"
 *   insn=0x00000000002550E4 string=0x00000000002550F4 "("
 *   insn=0x00000000002550E8 string=0x00000000002550EC ")"
 *   insn=0x00000000002550EC string=0x00000000002550F0 "\t"
 *   insn=0x00000000002550F4 string=0x00000000002550F8 "h"
 *   insn=0x0000000000255114 string=0x0000000000255118 "5"
 *   insn=0x000000000025511C string=0x0000000000255120 ""
 *   insn=0x000000000025512C string=0x0000000000255130 "\t@"
 *   insn=0x000000000025513C string=0x0000000000255140 ""
 *   insn=0x000000000025514C string=0x0000000000255150 "@"
 *   insn=0x000000000025515C string=0x0000000000255160 "5"
 *   insn=0x0000000000255164 string=0x0000000000255168 ""
 *   insn=0x0000000000255174 string=0x0000000000255178 "\t@"
 *   insn=0x0000000000255184 string=0x0000000000255188 ""
 *   insn=0x0000000000255194 string=0x0000000000255198 "@"
 *   insn=0x00000000002551B0 string=0x0000000000255048 "!"
 *   insn=0x00000000002551B8 string=0x00000000002551BC "C"
 *   insn=0x00000000002551CC string=0x00000000002551E8 ":"
 *   insn=0x00000000002551E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002551F0 string=0x00000000002551F4 "t\n"
 *   insn=0x00000000002551F8 string=0x00000000002551FC ""
 *   insn=0x0000000000255208 string=0x000000000025520C "\t@"
 *   insn=0x0000000000255218 string=0x000000000025521C ""
 *   insn=0x0000000000255228 string=0x000000000025522C "@"
 *   insn=0x0000000000255234 string=0x0000000000255238 "B"
 *   insn=0x0000000000255244 string=0x0000000000255248 "4"
 *   insn=0x000000000025524C string=0x0000000000255250 ""
 *   insn=0x000000000025525C string=0x0000000000255260 "\t@"
 *   insn=0x000000000025526C string=0x0000000000255270 ""
 *   insn=0x000000000025527C string=0x0000000000255280 "@"
 *   insn=0x0000000000255294 string=0x0000000000255298 ""
 *   insn=0x00000000002552A4 string=0x00000000002552A8 "\t@"
 *   insn=0x00000000002552B4 string=0x00000000002552B8 ""
 *   insn=0x00000000002552C4 string=0x00000000002552C8 "@"
 *   insn=0x00000000002552D0 string=0x00000000002552D4 ""
 *   insn=0x00000000002552DC string=0x00000000002552E0 ""
 *   insn=0x00000000002552E8 string=0x00000000002552EC "4"
 *   insn=0x00000000002552F0 string=0x00000000002552F4 ""
 *   insn=0x0000000000255300 string=0x0000000000255304 "\t@"
 *   insn=0x0000000000255310 string=0x0000000000255314 ""
 *   insn=0x0000000000255320 string=0x0000000000255324 "@"
 *   insn=0x0000000000255348 string=0x000000000025534C "`"
 *   insn=0x000000000025534C string=0x0000000000255350 "!"
 *   insn=0x0000000000255350 string=0x0000000000255354 "v"
 *   insn=0x0000000000255354 string=0x0000000000255358 "\t"
 *   insn=0x0000000000255354 string=0x0000000000255380 "\t"
 *   insn=0x0000000000255358 string=0x000000000025535C "*"
 *   insn=0x000000000025535C string=0x0000000000255360 "\n"
 *   insn=0x0000000000255364 string=0x0000000000255368 "?"
 *   insn=0x0000000000255368 string=0x000000000025536C "l"
 *   insn=0x0000000000255378 string=0x000000000025537C "R"
 *   insn=0x0000000000255380 string=0x0000000000255384 "*"
 *   insn=0x0000000000255384 string=0x0000000000255388 "\n"
 *   insn=0x0000000000255388 string=0x000000000025538C "?"
 *   insn=0x000000000025538C string=0x0000000000255390 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BreakableObjectComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
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
  if ( a2 == 2 )
  {
    v4 = 0;
    while ( 1 )
    {
      Caver::StringForSpecialDamageType();
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
      if ( v4++ >= 2 )
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

