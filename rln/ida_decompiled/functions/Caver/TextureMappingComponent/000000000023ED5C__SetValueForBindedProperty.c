/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023ED5C
 * Mangled: _ZN5Caver23TextureMappingComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F44B0  Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000023F07C  `non-virtual thunk to'Caver::TextureMappingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 98
 *   insn=0x000000000023ED6C string=0x000000000023ED70 "V"
 *   insn=0x000000000023ED7C string=0x000000000023ED80 "?"
 *   insn=0x000000000023ED84 string=0x000000000023ED88 "\t"
 *   insn=0x000000000023ED88 string=0x000000000023ED8C ")"
 *   insn=0x000000000023ED8C string=0x0000000000584A38 "l"
 *   insn=0x000000000023ED90 string=0x000000000023ED94 ")"
 *   insn=0x000000000023ED94 string=0x000000000023ED98 "(y"
 *   insn=0x000000000023ED98 string=0x000000000023ED9C ""
 *   insn=0x000000000023EDA0 string=0x000000000023EDA4 "k"
 *   insn=0x000000000023EDA4 string=0x00000000001FA350 "0'"
 *   insn=0x000000000023EDCC string=0x000000000023EDD0 "5%"
 *   insn=0x000000000023EDDC string=0x000000000023EDE0 "a"
 *   insn=0x000000000023EDE0 string=0x000000000023EECC ")%"
 *   insn=0x000000000023EDE4 string=0x000000000023EDE8 ""
 *   insn=0x000000000023EDF4 string=0x000000000023EDF8 "`"
 *   insn=0x000000000023EDFC string=0x000000000023EE00 "*"
 *   insn=0x000000000023EE10 string=0x000000000023EEF0 ")%"
 *   insn=0x000000000023EE18 string=0x000000000023EE1C "@"
 *   insn=0x000000000023EE18 string=0x000000000023EE28 "h>@"
 *   insn=0x000000000023EE1C string=0x000000000023EE20 ""
 *   insn=0x000000000023EE20 string=0x000000000023EE24 ""
 *   insn=0x000000000023EE28 string=0x000000000023EE2C "`>"
 *   insn=0x000000000023EE2C string=0x000000000023EE30 "H"
 *   insn=0x000000000023EE30 string=0x000000000023EE34 "\t\t@"
 *   insn=0x000000000023EE34 string=0x000000000023EE38 ")"
 *   insn=0x000000000023EE38 string=0x000000000023EE3C "\t\t"
 *   insn=0x000000000023EE40 string=0x000000000023EE44 "\t"
 *   insn=0x000000000023EE44 string=0x000000000023EE48 ")"
 *   insn=0x000000000023EE4C string=0x000000000023EE50 " "
 *   insn=0x000000000023EE58 string=0x000000000023EE5C "@"
 *   insn=0x000000000023EE5C string=0x000000000023EE60 ""
 *   insn=0x000000000023EE60 string=0x000000000023EE64 ""
 *   insn=0x000000000023EE68 string=0x000000000023EE6C ""
 *   insn=0x000000000023EE6C string=0x000000000023EE70 ""
 *   insn=0x000000000023EE7C string=0x000000000023EE80 ""
 *   insn=0x000000000023EE80 string=0x000000000023EE84 "h"
 *   insn=0x000000000023EE84 string=0x000000000023EE88 ""
 *   insn=0x000000000023EE8C string=0x000000000023EE90 ""
 *   insn=0x000000000023EE90 string=0x000000000023EE94 "h"
 *   insn=0x000000000023EE9C string=0x000000000023EEA0 ""
 *   insn=0x000000000023EEA0 string=0x000000000023EEA4 "h"
 *   insn=0x000000000023EECC string=0x000000000023EED0 ")=G"
 *   insn=0x000000000023EED0 string=0x000000000023EED4 "!"
 *   insn=0x000000000023EED8 string=0x000000000023EEDC "\t"
 *   insn=0x000000000023EED8 string=0x000000000023EF14 "\t"
 *   insn=0x000000000023EEDC string=0x000000000023EEE0 "*"
 *   insn=0x000000000023EEE0 string=0x000000000023EEE4 "\n"
 *   insn=0x000000000023EEE8 string=0x000000000023EEEC ""
 *   insn=0x000000000023EEEC string=0x000000000023EF20 "?"
 *   insn=0x000000000023EEF0 string=0x000000000023EEF4 ")=G"
 *   insn=0x000000000023EEF4 string=0x000000000023EEF8 "!"
 *   insn=0x000000000023EEF8 string=0x000000000023EEFC "\t"
 *   insn=0x000000000023EEFC string=0x000000000023EF00 "\t"
 *   insn=0x000000000023EEFC string=0x000000000023EF3C "\t"
 *   insn=0x000000000023EF00 string=0x000000000023EF04 "*"
 *   insn=0x000000000023EF04 string=0x000000000023EF08 "\n"
 *   insn=0x000000000023EF10 string=0x000000000023EF48 "?"
 *   insn=0x000000000023EF14 string=0x000000000023EF18 "*"
 *   insn=0x000000000023EF18 string=0x000000000023EF1C "\n"
 *   insn=0x000000000023EF3C string=0x000000000023EF40 "*"
 *   insn=0x000000000023EF40 string=0x000000000023EF44 "\n"
 *   insn=0x000000000023EF48 string=0x000000000023EF4C "L"
 *   insn=0x000000000023EF64 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023EF70 string=0x000000000023EF74 "(a"
 *   insn=0x000000000023EF7C string=0x000000000023EF80 "*%"
 *   insn=0x000000000023EF80 string=0x000000000023EF84 "J=G"
 *   insn=0x000000000023EF84 string=0x000000000023EF88 ")!"
 *   insn=0x000000000023EF8C string=0x000000000023EF90 "*"
 *   insn=0x000000000023EF8C string=0x000000000023EFC0 "*"
 *   insn=0x000000000023EF90 string=0x000000000023EF94 "K"
 *   insn=0x000000000023EF94 string=0x000000000023EF98 "+"
 *   insn=0x000000000023EF9C string=0x000000000023EFA0 "_"
 *   insn=0x000000000023EFB4 string=0x000000000023EFB8 "`"
 *   insn=0x000000000023EFB8 string=0x000000000023EFBC "."
 *   insn=0x000000000023EFB8 string=0x000000000023EFE4 "@"
 *   insn=0x000000000023EFC0 string=0x000000000023EFC4 "K"
 *   insn=0x000000000023EFC4 string=0x000000000023EFC8 "+"
 *   insn=0x000000000023EFC8 string=0x000000000023EFCC "_"
 *   insn=0x000000000023EFE4 string=0x000000000023EFE8 ""
 *   insn=0x000000000023EFE8 string=0x000000000023EFEC ""
 *   insn=0x000000000023EFEC string=0x000000000023EFF0 "!"
 *   insn=0x000000000023EFF0 string=0x000000000023EFF4 ""
 *   insn=0x000000000023EFF4 string=0x000000000023EFF8 ""
 *   insn=0x000000000023F008 string=0x000000000023F00C "*%"
 *   insn=0x000000000023F00C string=0x000000000023F010 "J"
 *   insn=0x000000000023F014 string=0x000000000023F018 "(a"
 *   insn=0x000000000023F020 string=0x000000000023F024 "*%"
 *   insn=0x000000000023F024 string=0x000000000023F028 "J=G"
 *   insn=0x000000000023F028 string=0x000000000023F02C ")!"
 *   insn=0x000000000023F030 string=0x000000000023F034 "*"
 *   insn=0x000000000023F030 string=0x000000000023F060 "*"
 *   insn=0x000000000023F034 string=0x000000000023F038 "K"
 *   insn=0x000000000023F038 string=0x000000000023F03C "+"
 *   insn=0x000000000023F040 string=0x000000000023F044 "_"
 *   insn=0x000000000023F044 string=0x000000000023F048 "l"
 *   insn=0x000000000023F060 string=0x000000000023F064 "K"
 *   insn=0x000000000023F064 string=0x000000000023F068 "+"
 *   insn=0x000000000023F068 string=0x000000000023F06C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TextureMappingComponent::SetValueForBindedProperty(
        Caver::TextureMappingComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  void *v5; // x0
  void *v6; // x0
  _DWORD *v7; // x0
  _DWORD *v8; // x8
  int v9; // w9
  int v10; // w8
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  __int64 v15; // [xsp+0h] [xbp-40h] BYREF
  _DWORD *v16; // [xsp+8h] [xbp-38h]
  __int64 v17; // [xsp+18h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      Caver::TextureLibrary::sharedLibrary(this);
      sub_56A528(&v15, *((_QWORD *)a3 + 1));
      Caver::TextureLibrary::TextureForName();
      v5 = (void *)(v15 - 24);
      if ( (__int64 *)(v15 - 24) == &qword_6FD2E0 )
        goto LABEL_3;
      v11 = (unsigned int *)(v15 - 8);
      if ( &pthread_create )
      {
        do
          v12 = __ldaxr(v11);
        while ( __stlxr(v12 - 1, v11) );
      }
      else
      {
        v12 = (*v11)--;
      }
      if ( v12 > 0 )
      {
LABEL_3:
        if ( !v16 )
          return;
      }
      else
      {
        operator delete(v5);
        if ( !v16 )
          return;
      }
      sub_56A528(&v15, *((_QWORD *)a3 + 1));
      sub_56A6A8((char *)this + 112);
      v6 = (void *)(v15 - 24);
      if ( (__int64 *)(v15 - 24) == &qword_6FD2E0 )
        goto LABEL_5;
      v13 = (unsigned int *)(v15 - 8);
      if ( &pthread_create )
      {
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
      }
      else
      {
        v14 = (*v13)--;
      }
      if ( v14 > 0 )
      {
LABEL_5:
        v7 = v16;
        if ( !v16 )
          goto LABEL_7;
        goto LABEL_6;
      }
      operator delete(v6);
      v7 = v16;
      if ( v16 )
LABEL_6:
        ++v7[2];
LABEL_7:
      v8 = (_DWORD *)*((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = v7;
      if ( v8 )
      {
        v9 = v8[2] - 1;
        v8[2] = v9;
        if ( !v9 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
          v7 = v16;
        }
      }
      if ( v7 )
      {
        v10 = v7[2] - 1;
        v7[2] = v10;
        if ( !v10 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      return;
    case 1:
      *((_DWORD *)this + 32) = **((_DWORD **)a3 + 1);
      return;
    case 2:
      *((_DWORD *)this + 33) = **((_DWORD **)a3 + 1);
      return;
    case 3:
      *((_DWORD *)this + 34) = **((_DWORD **)a3 + 1);
      return;
    default:
      return;
  }
}

