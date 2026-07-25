/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000225A10
 * Mangled: _ZN5Caver14ModelComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F9DD0  Caver::ModelComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 14
 *   0x00000000001F34B0  Caver::ModelLibrary::ModelForName(std::string const&)
 *   0x00000000001F5F50  Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB5B0  Caver::ModelComponent::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *   0x00000000001FCE60  Caver::ModelLibrary::sharedLibrary(void)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x00000000002033F0  Caver::ModelComponent::UpdateBounds(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 81
 *   insn=0x0000000000225A1C string=0x0000000000225A20 "T"
 *   insn=0x0000000000225A28 string=0x0000000000225A2C "?"
 *   insn=0x0000000000225A30 string=0x0000000000225A34 ""
 *   insn=0x0000000000225A3C string=0x0000000000225A40 ")A"
 *   insn=0x0000000000225A40 string=0x0000000000225A44 "(y"
 *   insn=0x0000000000225A44 string=0x0000000000225A48 ""
 *   insn=0x0000000000225A4C string=0x0000000000225A50 "A"
 *   insn=0x0000000000225A4C string=0x0000000000225B14 "H"
 *   insn=0x0000000000225A4C string=0x0000000000225B24 "H"
 *   insn=0x0000000000225A4C string=0x0000000000225B40 "H"
 *   insn=0x0000000000225A4C string=0x0000000000225BE8 "H"
 *   insn=0x0000000000225A60 string=0x0000000000225A64 "\t"
 *   insn=0x0000000000225A68 string=0x0000000000225AE0 "\t&"
 *   insn=0x0000000000225A6C string=0x00000000001FCE60 "0'"
 *   insn=0x0000000000225A78 string=0x00000000001F34B0 "P'"
 *   insn=0x0000000000225A8C string=0x00000000001FB5B0 "0'"
 *   insn=0x0000000000225A90 string=0x0000000000225A94 "3"
 *   insn=0x0000000000225A94 string=0x0000000000225A98 "h"
 *   insn=0x0000000000225A98 string=0x0000000000225A9C ""
 *   insn=0x0000000000225A9C string=0x0000000000225AA0 "h"
 *   insn=0x0000000000225AA4 string=0x0000000000225AA8 "h"
 *   insn=0x0000000000225AA8 string=0x0000000000225AAC "\t@"
 *   insn=0x0000000000225AB4 string=0x0000000000225AB8 "h\n@"
 *   insn=0x0000000000225AB8 string=0x0000000000225ABC ""
 *   insn=0x0000000000225ABC string=0x0000000000225AC0 "h\n"
 *   insn=0x0000000000225AC4 string=0x0000000000225AC8 "h"
 *   insn=0x0000000000225AC8 string=0x0000000000225ACC "@"
 *   insn=0x0000000000225AE0 string=0x0000000000225AE4 ")"
 *   insn=0x0000000000225AE8 string=0x0000000000225AEC "@"
 *   insn=0x0000000000225AF0 string=0x0000000000225AF4 ")=G"
 *   insn=0x0000000000225AF4 string=0x0000000000225AF8 "!"
 *   insn=0x0000000000225AFC string=0x0000000000225B00 "\t"
 *   insn=0x0000000000225AFC string=0x0000000000225C14 "\t"
 *   insn=0x0000000000225B00 string=0x0000000000225B04 "*"
 *   insn=0x0000000000225B04 string=0x0000000000225B08 "\n"
 *   insn=0x0000000000225B0C string=0x0000000000225B10 "D"
 *   insn=0x0000000000225B10 string=0x0000000000225C20 "?"
 *   insn=0x0000000000225B14 string=0x0000000000225B18 ""
 *   insn=0x0000000000225B18 string=0x0000000000225B1C "h"
 *   insn=0x0000000000225B1C string=0x0000000000225B20 "5"
 *   insn=0x0000000000225B28 string=0x0000000000225B2C "!"
 *   insn=0x0000000000225B28 string=0x0000000000584004 "5"
 *   insn=0x0000000000225B34 string=0x0000000000225B38 "`"
 *   insn=0x0000000000225B44 string=0x0000000000225B48 "!"
 *   insn=0x0000000000225B50 string=0x0000000000225B54 "`"
 *   insn=0x0000000000225B68 string=0x0000000000225B6C "`*"
 *   insn=0x0000000000225B6C string=0x0000000000225B70 "!"
 *   insn=0x0000000000225B7C string=0x00000000001FCAB0 "0'"
 *   insn=0x0000000000225B88 string=0x0000000000225B8C "L"
 *   insn=0x0000000000225B90 string=0x0000000000225B94 "h"
 *   insn=0x0000000000225B98 string=0x0000000000583734 "o"
 *   insn=0x0000000000225B9C string=0x0000000000225BA0 "!"
 *   insn=0x0000000000225BA4 string=0x00000000001F5F50 "P'"
 *   insn=0x0000000000225BA8 string=0x0000000000225BAC ""
 *   insn=0x0000000000225BAC string=0x0000000000225BB0 "h"
 *   insn=0x0000000000225BD8 string=0x0000000000225BDC "i"
 *   insn=0x0000000000225BDC string=0x0000000000225BE0 "("
 *   insn=0x0000000000225BE8 string=0x0000000000225BEC ""
 *   insn=0x0000000000225BEC string=0x0000000000225BF0 "hr"
 *   insn=0x0000000000225C14 string=0x0000000000225C18 "*"
 *   insn=0x0000000000225C18 string=0x0000000000225C1C "\n"
 *   insn=0x0000000000225C34 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000225C44 string=0x0000000000225C48 ""
 *   insn=0x0000000000225C54 string=0x0000000000225C58 "\t@"
 *   insn=0x0000000000225C64 string=0x0000000000225C68 ""
 *   insn=0x0000000000225C74 string=0x0000000000225C78 "@"
 *   insn=0x0000000000225C90 string=0x0000000000225C94 "\t&"
 *   insn=0x0000000000225C94 string=0x0000000000225C98 ")"
 *   insn=0x0000000000225CA8 string=0x0000000000225CAC ")=G"
 *   insn=0x0000000000225CAC string=0x0000000000225CB0 "!"
 *   insn=0x0000000000225CB0 string=0x0000000000225CB4 "i"
 *   insn=0x0000000000225CB4 string=0x0000000000225CB8 "\t"
 *   insn=0x0000000000225CB4 string=0x0000000000225CE0 "\t"
 *   insn=0x0000000000225CB8 string=0x0000000000225CBC "*"
 *   insn=0x0000000000225CBC string=0x0000000000225CC0 "\n"
 *   insn=0x0000000000225CC4 string=0x0000000000225CC8 "?"
 *   insn=0x0000000000225CC8 string=0x0000000000225CCC "l"
 *   insn=0x0000000000225CE0 string=0x0000000000225CE4 "*"
 *   insn=0x0000000000225CE4 string=0x0000000000225CE8 "\n"
 *   insn=0x0000000000225CE8 string=0x0000000000225CEC "?"
 *   insn=0x0000000000225CEC string=0x0000000000225CF0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelComponent::SetValueForBindedProperty(
        Caver::ModelComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v4; // x8
  Caver::ModelLibrary *v5; // x0
  __int64 v6; // x8
  __int64 v7; // x8
  unsigned int *v8; // x8
  int v9; // w9
  __int128 v10; // [xsp+0h] [xbp-30h]
  _QWORD v11[2]; // [xsp+10h] [xbp-20h] BYREF

  v11[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      sub_56A528(v11, *((_QWORD *)a3 + 1));
      v4 = v11[0];
      v5 = (Caver::ModelLibrary *)(v11[0] - 24LL);
      if ( *(_QWORD *)(v11[0] - 24LL) )
      {
        Caver::ModelLibrary::sharedLibrary(v5);
        Caver::ModelLibrary::ModelForName();
        if ( (_QWORD)v10 )
          Caver::ModelComponent::InitWithModel();
        if ( *((_QWORD *)&v10 + 1) )
        {
          v6 = *(_QWORD *)(*((_QWORD *)&v10 + 1) + 8LL) - 1LL;
          *(_QWORD *)(*((_QWORD *)&v10 + 1) + 8LL) = v6;
          if ( !v6 )
          {
            (*(void (__fastcall **)())(**((_QWORD **)&v10 + 1) + 16LL))();
            v7 = *(_QWORD *)(*((_QWORD *)&v10 + 1) + 16LL) - 1LL;
            *(_QWORD *)(*((_QWORD *)&v10 + 1) + 16LL) = v7;
            if ( !v7 )
              (*(void (__fastcall **)())(**((_QWORD **)&v10 + 1) + 24LL))();
          }
        }
        v4 = v11[0];
        v5 = (Caver::ModelLibrary *)(v11[0] - 24LL);
      }
      if ( v5 != (Caver::ModelLibrary *)&qword_6FD2E0 )
      {
        v8 = (unsigned int *)(v4 - 8);
        if ( &pthread_create )
        {
          do
            v9 = __ldaxr(v8);
          while ( __stlxr(v9 - 1, v8) );
        }
        else
        {
          v9 = (*v8)--;
        }
        if ( v9 <= 0 )
          operator delete(v5);
      }
      return;
    case 1:
      Caver::BindingValue::Vector3Value(a3);
      *(_QWORD *)((char *)this + 196) = v10;
      *((_DWORD *)this + 51) = DWORD2(v10);
      *((_BYTE *)this + 192) = (Caver::Vector3::IsClose(
                                  (Caver::ModelComponent *)((char *)this + 196),
                                  (const Caver::Vector3 *)&Caver::Vector3Zero,
                                  0.001)
                              & 1) == 0;
      goto LABEL_19;
    case 2:
      *((float *)this + 52) = **((float **)a3 + 1) * 0.017453;
      goto LABEL_19;
    case 3:
      *((float *)this + 53) = **((float **)a3 + 1) * 0.017453;
LABEL_19:
      Caver::ModelComponent::UpdateBounds(this);
      break;
    case 4:
      *((_DWORD *)this + 38) = **((_DWORD **)a3 + 1);
      break;
    case 5:
      Caver::BindingValue::FloatColorValue(a3);
      Caver::Color::FromFloatColor();
      *(_DWORD *)((char *)this + 314) = v11[0];
      break;
    case 6:
      *((_BYTE *)this + 156) = **((_BYTE **)a3 + 1);
      break;
    case 7:
      Caver::BindingValue::FloatColorValue(a3);
      *((_OWORD *)this + 10) = v10;
      break;
    default:
      return;
  }
}

