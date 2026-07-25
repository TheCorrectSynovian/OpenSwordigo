/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000231FC8
 * Mangled: _ZN5Caver16ProgramComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::ProgramComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x0000000000201FC0  Caver::ProgramComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F92E0  Caver::StringForTrigger(Caver::ProgramComponent::Trigger)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 78
 *   insn=0x0000000000231FDC string=0x0000000000231FE0 "X"
 *   insn=0x0000000000231FE0 string=0x0000000000231FE4 ""
 *   insn=0x0000000000231FF8 string=0x0000000000231FFC ""
 *   insn=0x0000000000232008 string=0x00000000002321B8 "F"
 *   insn=0x0000000000232040 string=0x0000000000232044 "\t"
 *   insn=0x0000000000232040 string=0x0000000000232058 "\t"
 *   insn=0x0000000000232044 string=0x0000000000232048 "*"
 *   insn=0x0000000000232048 string=0x000000000023204C "\n"
 *   insn=0x0000000000232054 string=0x0000000000232064 "?"
 *   insn=0x0000000000232058 string=0x000000000023205C "*"
 *   insn=0x000000000023205C string=0x0000000000232060 "\n"
 *   insn=0x0000000000232070 string=0x0000000000232074 "M"
 *   insn=0x0000000000232080 string=0x00000000001F92E0 "0'"
 *   insn=0x000000000023208C string=0x0000000000232090 ",7"
 *   insn=0x0000000000232090 string=0x0000000000232094 "a"
 *   insn=0x0000000000232094 string=0x0000000000232098 "?"
 *   insn=0x00000000002320A0 string=0x00000000002320A4 "("
 *   insn=0x00000000002320A8 string=0x00000000002320AC "("
 *   insn=0x00000000002320B0 string=0x00000000002320B4 "("
 *   insn=0x00000000002320B8 string=0x00000000002320BC "\t"
 *   insn=0x00000000002320BC string=0x00000000002320C0 ")"
 *   insn=0x00000000002320C0 string=0x00000000002320C4 "\t"
 *   insn=0x00000000002320C8 string=0x00000000002320CC "("
 *   insn=0x00000000002320D0 string=0x00000000002320D4 "("
 *   insn=0x00000000002320D8 string=0x00000000002320DC "\t"
 *   insn=0x00000000002320D8 string=0x00000000002320E8 "("
 *   insn=0x00000000002320DC string=0x00000000002320E0 ")"
 *   insn=0x00000000002320E0 string=0x00000000002320E4 "\t"
 *   insn=0x00000000002320E8 string=0x00000000002320EC "h"
 *   insn=0x0000000000232108 string=0x000000000023210C "5"
 *   insn=0x0000000000232110 string=0x0000000000232114 ""
 *   insn=0x0000000000232120 string=0x0000000000232124 "\t@"
 *   insn=0x0000000000232130 string=0x0000000000232134 ""
 *   insn=0x0000000000232140 string=0x0000000000232144 "@"
 *   insn=0x0000000000232150 string=0x0000000000232154 "5"
 *   insn=0x0000000000232158 string=0x000000000023215C ""
 *   insn=0x0000000000232168 string=0x000000000023216C "\t@"
 *   insn=0x0000000000232178 string=0x000000000023217C ""
 *   insn=0x0000000000232188 string=0x000000000023218C "@"
 *   insn=0x00000000002321A4 string=0x000000000023203C "!"
 *   insn=0x00000000002321AC string=0x00000000002321B0 "C"
 *   insn=0x00000000002321B8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002321C0 string=0x00000000002321C4 "t\n"
 *   insn=0x00000000002321C8 string=0x00000000002321CC ""
 *   insn=0x00000000002321D8 string=0x00000000002321DC "\t@"
 *   insn=0x00000000002321E8 string=0x00000000002321EC ""
 *   insn=0x00000000002321F8 string=0x00000000002321FC "@"
 *   insn=0x0000000000232204 string=0x0000000000232208 "B"
 *   insn=0x0000000000232214 string=0x0000000000232218 "4"
 *   insn=0x000000000023221C string=0x0000000000232220 ""
 *   insn=0x000000000023222C string=0x0000000000232230 "\t@"
 *   insn=0x000000000023223C string=0x0000000000232240 ""
 *   insn=0x000000000023224C string=0x0000000000232250 "@"
 *   insn=0x0000000000232264 string=0x0000000000232268 ""
 *   insn=0x0000000000232274 string=0x0000000000232278 "\t@"
 *   insn=0x0000000000232284 string=0x0000000000232288 ""
 *   insn=0x0000000000232294 string=0x0000000000232298 "@"
 *   insn=0x00000000002322A0 string=0x00000000002322A4 ""
 *   insn=0x00000000002322AC string=0x00000000002322B0 "'p"
 *   insn=0x00000000002322B8 string=0x00000000002322BC "4"
 *   insn=0x00000000002322C0 string=0x00000000002322C4 ""
 *   insn=0x00000000002322D0 string=0x00000000002322D4 "\t@"
 *   insn=0x00000000002322E0 string=0x00000000002322E4 ""
 *   insn=0x00000000002322F0 string=0x00000000002322F4 "@"
 *   insn=0x0000000000232318 string=0x000000000023231C "`"
 *   insn=0x000000000023231C string=0x0000000000232320 "!"
 *   insn=0x0000000000232320 string=0x0000000000232324 "v"
 *   insn=0x0000000000232324 string=0x0000000000232328 "\t"
 *   insn=0x0000000000232324 string=0x0000000000232350 "\t"
 *   insn=0x0000000000232328 string=0x000000000023232C "*"
 *   insn=0x000000000023232C string=0x0000000000232330 "\n"
 *   insn=0x0000000000232334 string=0x0000000000232338 "?"
 *   insn=0x0000000000232338 string=0x000000000023233C "l"
 *   insn=0x0000000000232348 string=0x000000000023234C "^="
 *   insn=0x0000000000232350 string=0x0000000000232354 "*"
 *   insn=0x0000000000232354 string=0x0000000000232358 "\n"
 *   insn=0x0000000000232358 string=0x000000000023235C "?"
 *   insn=0x000000000023235C string=0x0000000000232360 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
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
  if ( !a2 )
  {
    v4 = 0;
    while ( 1 )
    {
      Caver::StringForTrigger();
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
      if ( v4++ >= 0xA )
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

