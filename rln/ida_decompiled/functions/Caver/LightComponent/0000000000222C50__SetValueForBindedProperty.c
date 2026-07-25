/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000222C50
 * Mangled: _ZN5Caver14LightComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::LightComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F7B40  Caver::LightComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x0000000000222C6C string=0x0000000000222C70 "W"
 *   insn=0x0000000000222C7C string=0x0000000000222C80 "?"
 *   insn=0x0000000000222C84 string=0x0000000000222C88 "(\n"
 *   insn=0x0000000000222C88 string=0x0000000000222C8C "\t"
 *   insn=0x0000000000222C8C string=0x0000000000583F4C "X"
 *   insn=0x0000000000222C90 string=0x0000000000222C94 ")1="
 *   insn=0x0000000000222C94 string=0x0000000000222C98 "(y"
 *   insn=0x0000000000222C98 string=0x0000000000222C9C ""
 *   insn=0x0000000000222CA0 string=0x0000000000222CA4 "8&"
 *   insn=0x0000000000222CA8 string=0x0000000000222CAC ""
 *   insn=0x0000000000222CAC string=0x0000000000222CB0 ""
 *   insn=0x0000000000222CB0 string=0x0000000000222CB4 "h"
 *   insn=0x0000000000222CB4 string=0x0000000000222D80 "hr@"
 *   insn=0x0000000000222CB8 string=0x0000000000222CBC "&"
 *   insn=0x0000000000222CBC string=0x0000000000222CC0 "Z"
 *   insn=0x0000000000222CC0 string=0x0000000000222CC4 "{?G"
 *   insn=0x0000000000222CEC string=0x0000000000222CF0 "_"
 *   insn=0x0000000000222CF8 string=0x0000000000222CFC "%I"
 *   insn=0x0000000000222CFC string=0x00000000001F5190 "P'"
 *   insn=0x0000000000222D0C string=0x0000000000222D10 ""
 *   insn=0x0000000000222D20 string=0x0000000000222D24 "9"
 *   insn=0x0000000000222D20 string=0x0000000000222D7C "yr"
 *   insn=0x0000000000222D2C string=0x0000000000222D30 ""
 *   insn=0x0000000000222D40 string=0x0000000000222D44 "\t"
 *   insn=0x0000000000222D40 string=0x0000000000222D58 "\t"
 *   insn=0x0000000000222D44 string=0x0000000000222D48 "*"
 *   insn=0x0000000000222D48 string=0x0000000000222D4C "\n"
 *   insn=0x0000000000222D54 string=0x0000000000222D64 "?"
 *   insn=0x0000000000222D58 string=0x0000000000222D5C "*"
 *   insn=0x0000000000222D5C string=0x0000000000222D60 "\n"
 *   insn=0x0000000000222D74 string=0x0000000000222D78 "|"
 *   insn=0x0000000000222D84 string=0x0000000000222D88 "!"
 *   insn=0x0000000000222D88 string=0x0000000000222D8C ""
 *   insn=0x0000000000222D8C string=0x0000000000583F10 "333?"
 *   insn=0x0000000000222D94 string=0x0000000000222D98 "h"
 *   insn=0x0000000000222D98 string=0x0000000000222D9C "`B"
 *   insn=0x0000000000222D9C string=0x0000000000222DA0 "#"
 *   insn=0x0000000000222DA4 string=0x0000000000222DA8 ""
 *   insn=0x0000000000222DA8 string=0x0000000000222DAC "h"
 *   insn=0x0000000000222DB8 string=0x0000000000222DBC "Un"
 *   insn=0x0000000000222DC0 string=0x0000000000222DC4 "`"
 *   insn=0x0000000000222DD0 string=0x0000000000222DD4 "SY"
 *   insn=0x0000000000222DD4 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000222DDC string=0x0000000000222DE0 ""
 *   insn=0x0000000000222DE0 string=0x0000000000222DE4 "h"
 *   insn=0x0000000000222DEC string=0x0000000000222DF0 ""
 *   insn=0x0000000000222DF4 string=0x0000000000222DF8 "hv"
 *   insn=0x0000000000222E00 string=0x0000000000222E04 ""
 *   insn=0x0000000000222E04 string=0x0000000000222E08 "h"
 *   insn=0x0000000000222E08 string=0x0000000000222E0C ""
 *   insn=0x0000000000222E14 string=0x0000000000222E18 "&g"
 *   insn=0x0000000000222E18 string=0x00000000001FCAB0 "0'"
 *   insn=0x0000000000222E1C string=0x0000000000222E20 "hR"
 *   insn=0x0000000000222E24 string=0x0000000000222E28 "h"
 *   insn=0x0000000000222E34 string=0x0000000000222E38 "!"
 *   insn=0x0000000000222E5C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LightComponent::SetValueForBindedProperty(
        Caver::LightComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v5; // x25
  __int64 *v6; // x21
  char *v7; // x22
  const void *v8; // x0
  size_t v9; // x2
  __int64 *v10; // x21
  _BOOL4 v11; // w28
  unsigned int *v12; // x8
  int v13; // w9
  int v14; // w8
  void *v15[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v16; // [xsp+18h] [xbp-58h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      if ( *(_QWORD *)(Caver::typeStrings[0] - 24) )
      {
        v5 = 0;
        v6 = Caver::typeStrings;
        do
        {
          sub_56A528(v15, *((_QWORD *)a3 + 1));
          v7 = (char *)v15[0];
          v8 = (const void *)*v6;
          v9 = *(_QWORD *)(*v6 - 24);
          v10 = (__int64 *)((char *)v15[0] - 24);
          if ( v9 == *((_QWORD *)v15[0] - 3) )
          {
            v11 = memcmp(v8, v15[0], v9) == 0;
            if ( v10 == &qword_6FD2E0 )
              goto LABEL_8;
          }
          else
          {
            v11 = 0;
            if ( v10 == &qword_6FD2E0 )
              goto LABEL_8;
          }
          v12 = (unsigned int *)(v7 - 8);
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
          if ( v13 > 0 )
          {
LABEL_8:
            if ( v11 )
              goto LABEL_17;
            goto LABEL_9;
          }
          operator delete(v10);
          if ( v11 )
          {
LABEL_17:
            *((_DWORD *)this + 28) = v5;
            break;
          }
LABEL_9:
          v6 = &Caver::typeStrings[++v5];
        }
        while ( *(_QWORD *)(*v6 - 24) );
      }
      if ( *((_DWORD *)this + 28) == 4 )
      {
        *((_DWORD *)this + 33) = 1065353216;
        *(_OWORD *)((char *)this + 116) = xmmword_583F10;
      }
      return;
    case 1:
      v14 = **((_DWORD **)a3 + 1);
      *((_BYTE *)this + 144) = 0;
      *((_DWORD *)this + 29) = v14;
      return;
    case 2:
      Caver::BindingValue::FloatColorValue(a3);
      *(_OWORD *)((char *)this + 120) = *(_OWORD *)v15;
      return;
    case 3:
      *((_DWORD *)this + 37) = **((_DWORD **)a3 + 1);
      return;
    case 4:
      *((_DWORD *)this + 38) = **((_DWORD **)a3 + 1);
      return;
    case 5:
      *((_DWORD *)this + 39) = **((_DWORD **)a3 + 1);
      return;
    case 6:
      Caver::BindingValue::Vector3Value(a3);
      *((void **)this + 20) = v15[0];
      *((_DWORD *)this + 42) = v15[1];
      return;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      return;
  }
}

