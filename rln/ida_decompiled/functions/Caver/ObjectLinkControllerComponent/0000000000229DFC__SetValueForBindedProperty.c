/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000229DFC
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F9F20  Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 12
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F90  Caver::ObjectLinkControllerComponent::UpdateLocalTransform(void)
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *   0x0000000000201540  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *   0x0000000000568CB8  sub_568CB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 90
 *   insn=0x0000000000229E18 string=0x0000000000229E1C "X"
 *   insn=0x0000000000229E1C string=0x0000000000229E20 ""
 *   insn=0x0000000000229E28 string=0x0000000000229E2C "?"
 *   insn=0x0000000000229E30 string=0x0000000000229E34 "("
 *   insn=0x0000000000229E38 string=0x0000000000584220 "0\"
 *   insn=0x0000000000229E3C string=0x0000000000229E40 ")"
 *   insn=0x0000000000229E40 string=0x0000000000229E44 "(y"
 *   insn=0x0000000000229E44 string=0x0000000000229E48 ""
 *   insn=0x0000000000229E4C string=0x0000000000229F30 "h>@"
 *   insn=0x0000000000229E6C string=0x0000000000229E70 "("
 *   insn=0x0000000000229E70 string=0x0000000000229E74 "_"
 *   insn=0x0000000000229E80 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000229E88 string=0x0000000000229E8C "H"
 *   insn=0x0000000000229E98 string=0x00000000001FCAB0 "0'"
 *   insn=0x0000000000229E9C string=0x0000000000229EA0 "i"
 *   insn=0x0000000000229EA0 string=0x0000000000229EA4 "("
 *   insn=0x0000000000229EA8 string=0x0000000000229EAC "h"
 *   insn=0x0000000000229EAC string=0x0000000000229EB0 "V"
 *   insn=0x0000000000229EB0 string=0x000000000022A008 ""
 *   insn=0x0000000000229EC0 string=0x0000000000229EC4 "h"
 *   insn=0x0000000000229EC8 string=0x0000000000229ECC "h"
 *   insn=0x0000000000229ECC string=0x0000000000229ED0 "N"
 *   insn=0x0000000000229EE0 string=0x0000000000584004 "5"
 *   insn=0x0000000000229EE4 string=0x0000000000229EE8 ""
 *   insn=0x0000000000229EF4 string=0x0000000000229EF8 "`"
 *   insn=0x0000000000229F0C string=0x0000000000229F10 "`"
 *   insn=0x0000000000229F20 string=0x0000000000229F24 "`"
 *   insn=0x0000000000229F28 string=0x0000000000229F2C "7"
 *   insn=0x0000000000229F28 string=0x00000000001F6F90 "0'"
 *   insn=0x0000000000229F38 string=0x0000000000229F3C "`"
 *   insn=0x0000000000229F48 string=0x0000000000229F4C "w"
 *   insn=0x0000000000229F4C string=0x0000000000229F50 "`B"
 *   insn=0x0000000000229F60 string=0x0000000000229F64 ")"
 *   insn=0x0000000000229F74 string=0x0000000000229F78 ")=G"
 *   insn=0x0000000000229F78 string=0x0000000000229F7C "!"
 *   insn=0x0000000000229F80 string=0x0000000000229F84 "\t"
 *   insn=0x0000000000229F80 string=0x000000000022A0B4 "\t"
 *   insn=0x0000000000229F84 string=0x0000000000229F88 "*"
 *   insn=0x0000000000229F88 string=0x0000000000229F8C "\n"
 *   insn=0x0000000000229F90 string=0x0000000000229F94 "K"
 *   insn=0x0000000000229F94 string=0x000000000022A0C0 "?"
 *   insn=0x0000000000229FA0 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000229FAC string=0x0000000000229FB0 "9"
 *   insn=0x0000000000229FB8 string=0x0000000000229FBC "h"
 *   insn=0x0000000000229FC4 string=0x0000000000229FC8 "X"
 *   insn=0x0000000000229FE0 string=0x0000000000229FE4 "a"
 *   insn=0x0000000000229FE8 string=0x0000000000229FEC ""
 *   insn=0x0000000000229FF8 string=0x0000000000229FFC "/"
 *   insn=0x000000000022A000 string=0x000000000022A004 "O]"
 *   insn=0x000000000022A014 string=0x000000000022A0F4 "w0"
 *   insn=0x000000000022A03C string=0x000000000022A040 ")=G"
 *   insn=0x000000000022A048 string=0x000000000022A04C "\t"
 *   insn=0x000000000022A048 string=0x000000000022A060 "\t"
 *   insn=0x000000000022A04C string=0x000000000022A050 "*"
 *   insn=0x000000000022A050 string=0x000000000022A054 "\n"
 *   insn=0x000000000022A060 string=0x000000000022A064 "*"
 *   insn=0x000000000022A064 string=0x000000000022A068 "\n"
 *   insn=0x000000000022A06C string=0x000000000022A070 "?"
 *   insn=0x000000000022A070 string=0x000000000022A074 "L"
 *   insn=0x000000000022A090 string=0x000000000022A094 ")=G"
 *   insn=0x000000000022A094 string=0x000000000022A098 "!"
 *   insn=0x000000000022A09C string=0x000000000022A0A0 "\t"
 *   insn=0x000000000022A09C string=0x000000000022A0D4 "\t"
 *   insn=0x000000000022A0A0 string=0x000000000022A0A4 "*"
 *   insn=0x000000000022A0A4 string=0x000000000022A0A8 "\n"
 *   insn=0x000000000022A0B0 string=0x000000000022A0E0 "?"
 *   insn=0x000000000022A0B4 string=0x000000000022A0B8 "*"
 *   insn=0x000000000022A0B8 string=0x000000000022A0BC "\n"
 *   insn=0x000000000022A0D4 string=0x000000000022A0D8 "*"
 *   insn=0x000000000022A0D8 string=0x000000000022A0DC "\n"
 *   insn=0x000000000022A0E0 string=0x000000000022A0E4 ","
 *   insn=0x000000000022A0F4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022A0FC string=0x000000000022A100 "(a"
 *   insn=0x000000000022A10C string=0x000000000022A110 "J=G"
 *   insn=0x000000000022A110 string=0x000000000022A114 ")!"
 *   insn=0x000000000022A118 string=0x000000000022A11C "*"
 *   insn=0x000000000022A118 string=0x000000000022A188 "*"
 *   insn=0x000000000022A11C string=0x000000000022A120 "K"
 *   insn=0x000000000022A120 string=0x000000000022A124 "+"
 *   insn=0x000000000022A12C string=0x000000000022A16C "_"
 *   insn=0x000000000022A134 string=0x000000000022A138 "J"
 *   insn=0x000000000022A13C string=0x000000000022A140 "(a"
 *   insn=0x000000000022A14C string=0x000000000022A150 "J=G"
 *   insn=0x000000000022A150 string=0x000000000022A154 ")!"
 *   insn=0x000000000022A158 string=0x000000000022A15C "*"
 *   insn=0x000000000022A15C string=0x000000000022A160 "K"
 *   insn=0x000000000022A160 string=0x000000000022A164 "+"
 *   insn=0x000000000022A188 string=0x000000000022A18C "K"
 *   insn=0x000000000022A18C string=0x000000000022A190 "+"
 *   insn=0x000000000022A190 string=0x000000000022A194 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(
        Caver::ObjectLinkControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  _QWORD *v5; // x1
  char *v6; // x23
  size_t v7; // x2
  __int64 *v8; // x22
  _BOOL4 v9; // w8
  char *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9
  char *v13; // x0
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  _BOOL4 v18; // [xsp+Ch] [xbp-94h]
  float v19; // [xsp+18h] [xbp-88h]
  float v20; // [xsp+24h] [xbp-7Ch]
  float v21; // [xsp+30h] [xbp-70h]
  void *v22; // [xsp+40h] [xbp-60h] BYREF
  int v23; // [xsp+48h] [xbp-58h]
  __int64 v24; // [xsp+58h] [xbp-48h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      sub_56A528(&v22, *((_QWORD *)a3 + 1));
      v5 = (_QWORD *)*((_QWORD *)this + 14);
      v6 = (char *)v22;
      v8 = (__int64 *)((char *)v22 - 24);
      v7 = *((_QWORD *)v22 - 3);
      v9 = v7 != *(v5 - 3) || memcmp(v22, v5, v7) != 0;
      if ( v8 == &qword_6FD2E0 )
        goto LABEL_15;
      v18 = v9;
      v14 = (unsigned int *)(v6 - 8);
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
      v9 = v18;
      if ( v15 > 0 )
      {
LABEL_15:
        if ( !v9 )
          return;
LABEL_16:
        sub_56A528(&v22, *((_QWORD *)a3 + 1));
        sub_56A6A8((char *)this + 112);
        v13 = (char *)v22 - 24;
        if ( (char *)v22 - 24 != (char *)&qword_6FD2E0 )
        {
          v16 = (unsigned int *)((char *)v22 - 8);
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
            operator delete(v13);
        }
        sub_568CB8((char *)this + 144, 0, *(_QWORD *)(*((_QWORD *)this + 18) - 24LL), 0);
        goto LABEL_18;
      }
      operator delete(v8);
      if ( v18 )
        goto LABEL_16;
      return;
    case 1:
      if ( *((_QWORD *)this + 15) )
      {
        sub_56A6A8((char *)this + 112);
        sub_56A528(&v22, *((_QWORD *)a3 + 1));
        sub_56A6A8((char *)this + 144);
        v10 = (char *)v22 - 24;
        if ( (char *)v22 - 24 != (char *)&qword_6FD2E0 )
        {
          v11 = (unsigned int *)((char *)v22 - 8);
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
          if ( v12 <= 0 )
            operator delete(v10);
        }
LABEL_18:
        Caver::ObjectLinkControllerComponent::CreateLink(this);
      }
      return;
    case 2:
      Caver::BindingValue::Vector3Value(a3);
      *(_QWORD *)((char *)this + 236) = v22;
      *((_DWORD *)this + 61) = v23;
      return;
    case 3:
      Caver::BindingValue::Vector3Value(a3);
      *((float *)this + 62) = v21 * 0.017453;
      Caver::BindingValue::Vector3Value(a3);
      *((float *)this + 63) = v20 * 0.017453;
      Caver::BindingValue::Vector3Value(a3);
      *((float *)this + 64) = v19 * 0.017453;
      Caver::ObjectLinkControllerComponent::UpdateLocalTransform(this);
      return;
    case 4:
      Caver::BindingValue::Vector3Value(a3);
      *(_QWORD *)((char *)this + 260) = v22;
      *((_DWORD *)this + 67) = v23;
      return;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      return;
  }
}

