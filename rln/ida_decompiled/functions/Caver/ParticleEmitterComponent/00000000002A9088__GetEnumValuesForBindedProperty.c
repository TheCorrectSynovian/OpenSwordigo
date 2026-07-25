/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A9088
 * Mangled: _ZN5Caver24ParticleEmitterComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::ParticleEmitterComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001FC640  Caver::ParticleEmitterComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7900  Caver::ParticleEmitter::TitleForType(Caver::ParticleEmitter::Type)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 77
 *   insn=0x00000000002A909C string=0x00000000002A90A0 "X"
 *   insn=0x00000000002A90A0 string=0x00000000002A90A4 ""
 *   insn=0x00000000002A90A8 string=0x00000000002A90AC "?0"
 *   insn=0x00000000002A90D4 string=0x00000000002A90D8 "_"
 *   insn=0x00000000002A90D8 string=0x00000000002A9254 ""
 *   insn=0x00000000002A90E0 string=0x00000000002A90E4 "\t"
 *   insn=0x00000000002A90E0 string=0x00000000002A90F8 "\t"
 *   insn=0x00000000002A90E4 string=0x00000000002A90E8 "*"
 *   insn=0x00000000002A90E8 string=0x00000000002A90EC "\n"
 *   insn=0x00000000002A90F4 string=0x00000000002A9104 "?"
 *   insn=0x00000000002A90F8 string=0x00000000002A90FC "*"
 *   insn=0x00000000002A90FC string=0x00000000002A9100 "\n"
 *   insn=0x00000000002A9110 string=0x00000000002A9114 "M"
 *   insn=0x00000000002A9120 string=0x00000000001F7900 "0'"
 *   insn=0x00000000002A9130 string=0x00000000002A9134 "a"
 *   insn=0x00000000002A9134 string=0x00000000002A9138 "?"
 *   insn=0x00000000002A9140 string=0x00000000002A9144 "("
 *   insn=0x00000000002A9148 string=0x00000000002A914C "("
 *   insn=0x00000000002A9150 string=0x00000000002A9154 "("
 *   insn=0x00000000002A9158 string=0x00000000002A915C "\t"
 *   insn=0x00000000002A915C string=0x00000000002A9160 ")"
 *   insn=0x00000000002A9160 string=0x00000000002A9164 "\t"
 *   insn=0x00000000002A9168 string=0x00000000002A916C "("
 *   insn=0x00000000002A9170 string=0x00000000002A9174 "("
 *   insn=0x00000000002A9178 string=0x00000000002A917C "\t"
 *   insn=0x00000000002A9178 string=0x00000000002A9188 "("
 *   insn=0x00000000002A917C string=0x00000000002A9180 ")"
 *   insn=0x00000000002A9180 string=0x00000000002A9184 "\t"
 *   insn=0x00000000002A9188 string=0x00000000002A918C "h"
 *   insn=0x00000000002A91A8 string=0x00000000002A91AC "5"
 *   insn=0x00000000002A91B0 string=0x00000000002A91B4 ""
 *   insn=0x00000000002A91C0 string=0x00000000002A91C4 "\t@"
 *   insn=0x00000000002A91D0 string=0x00000000002A91D4 ""
 *   insn=0x00000000002A91E0 string=0x00000000002A91E4 "@"
 *   insn=0x00000000002A91F0 string=0x00000000002A91F4 "5"
 *   insn=0x00000000002A91F8 string=0x00000000002A91FC ""
 *   insn=0x00000000002A9208 string=0x00000000002A920C "\t@"
 *   insn=0x00000000002A9218 string=0x00000000002A921C ""
 *   insn=0x00000000002A9228 string=0x00000000002A922C "@"
 *   insn=0x00000000002A9244 string=0x00000000002A90DC "!"
 *   insn=0x00000000002A924C string=0x00000000002A9250 "C"
 *   insn=0x00000000002A927C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A9284 string=0x00000000002A9288 "t\n"
 *   insn=0x00000000002A928C string=0x00000000002A9290 ""
 *   insn=0x00000000002A929C string=0x00000000002A92A0 "\t@"
 *   insn=0x00000000002A92AC string=0x00000000002A92B0 ""
 *   insn=0x00000000002A92BC string=0x00000000002A92C0 "@"
 *   insn=0x00000000002A92C8 string=0x00000000002A92CC "B"
 *   insn=0x00000000002A92D8 string=0x00000000002A92DC "4"
 *   insn=0x00000000002A92E0 string=0x00000000002A92E4 ""
 *   insn=0x00000000002A92F0 string=0x00000000002A92F4 "\t@"
 *   insn=0x00000000002A9300 string=0x00000000002A9304 ""
 *   insn=0x00000000002A9310 string=0x00000000002A9314 "@"
 *   insn=0x00000000002A9328 string=0x00000000002A932C ""
 *   insn=0x00000000002A9338 string=0x00000000002A933C "\t@"
 *   insn=0x00000000002A9348 string=0x00000000002A934C ""
 *   insn=0x00000000002A9358 string=0x00000000002A935C "@"
 *   insn=0x00000000002A9364 string=0x00000000002A9368 ""
 *   insn=0x00000000002A937C string=0x00000000002A9380 "4"
 *   insn=0x00000000002A9384 string=0x00000000002A9388 ""
 *   insn=0x00000000002A9394 string=0x00000000002A9398 "\t@"
 *   insn=0x00000000002A93A4 string=0x00000000002A93A8 ""
 *   insn=0x00000000002A93B4 string=0x00000000002A93B8 "@"
 *   insn=0x00000000002A93DC string=0x00000000002A93E0 "`"
 *   insn=0x00000000002A93E0 string=0x00000000002A93E4 "!"
 *   insn=0x00000000002A93E4 string=0x00000000002A93E8 "v"
 *   insn=0x00000000002A93E8 string=0x00000000002A93EC "\t"
 *   insn=0x00000000002A93E8 string=0x00000000002A9414 "\t"
 *   insn=0x00000000002A93EC string=0x00000000002A93F0 "*"
 *   insn=0x00000000002A93F0 string=0x00000000002A93F4 "\n"
 *   insn=0x00000000002A93F8 string=0x00000000002A93FC "?"
 *   insn=0x00000000002A93FC string=0x00000000002A9400 "l"
 *   insn=0x00000000002A940C string=0x00000000002A9410 "-a"
 *   insn=0x00000000002A9414 string=0x00000000002A9418 "*"
 *   insn=0x00000000002A9418 string=0x00000000002A941C "\n"
 *   insn=0x00000000002A941C string=0x00000000002A9420 "?"
 *   insn=0x00000000002A9420 string=0x00000000002A9424 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleEmitterComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
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
  if ( a2 == 12 )
  {
    v4 = 0;
    while ( 1 )
    {
      Caver::ParticleEmitter::TitleForType();
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
      if ( v4++ >= 5 )
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

