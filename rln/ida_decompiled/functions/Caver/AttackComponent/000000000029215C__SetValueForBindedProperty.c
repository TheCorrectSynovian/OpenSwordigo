/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029215C
 * Mangled: _ZN5Caver15AttackComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::AttackComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F3490  Caver::AttackComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F3490  Caver::AttackComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 62
 *   insn=0x000000000029216C string=0x0000000000292170 "U"
 *   insn=0x0000000000292174 string=0x0000000000292178 "("
 *   insn=0x000000000029218C string=0x0000000000292194 "(y"
 *   insn=0x0000000000292194 string=0x0000000000292198 ""
 *   insn=0x000000000029219C string=0x0000000000292284 "H"
 *   insn=0x000000000029219C string=0x0000000000292294 "H"
 *   insn=0x000000000029219C string=0x00000000002922A4 "H"
 *   insn=0x000000000029219C string=0x00000000002922B4 "H"
 *   insn=0x000000000029219C string=0x00000000002922C4 "H"
 *   insn=0x000000000029219C string=0x00000000002922D4 "H"
 *   insn=0x000000000029219C string=0x00000000002922E4 "H"
 *   insn=0x000000000029219C string=0x00000000002922F4 "H"
 *   insn=0x00000000002921A8 string=0x00000000002921AC "`B"
 *   insn=0x00000000002921A8 string=0x00000000001F4540 "P'"
 *   insn=0x00000000002921B0 string=0x00000000002921B4 "=a"
 *   insn=0x00000000002921BC string=0x00000000002921C0 "\n"
 *   insn=0x00000000002921BC string=0x00000000002921CC "tr@"
 *   insn=0x00000000002921C0 string=0x00000000002921C4 "J"
 *   insn=0x00000000002921C4 string=0x00000000002921C8 "\n"
 *   insn=0x00000000002921CC string=0x00000000002921D0 "i"
 *   insn=0x00000000002921D0 string=0x00000000002921D4 "4"
 *   insn=0x00000000002921D8 string=0x00000000002921DC ""
 *   insn=0x00000000002921E8 string=0x00000000002921EC "\t@"
 *   insn=0x00000000002921F8 string=0x00000000002921FC ""
 *   insn=0x0000000000292208 string=0x000000000029220C "@"
 *   insn=0x000000000029221C string=0x0000000000292220 "\n"
 *   insn=0x000000000029221C string=0x000000000029222C "tz@"
 *   insn=0x0000000000292220 string=0x0000000000292224 "J"
 *   insn=0x0000000000292224 string=0x0000000000292228 "\n"
 *   insn=0x000000000029222C string=0x0000000000292230 "i"
 *   insn=0x0000000000292230 string=0x0000000000292234 "4"
 *   insn=0x0000000000292238 string=0x000000000029223C ""
 *   insn=0x0000000000292248 string=0x000000000029224C "\t@"
 *   insn=0x0000000000292258 string=0x000000000029225C ""
 *   insn=0x0000000000292268 string=0x000000000029226C "@"
 *   insn=0x0000000000292278 string=0x000000000029227C "="
 *   insn=0x000000000029227C string=0x0000000000292280 "#"
 *   insn=0x0000000000292284 string=0x0000000000292288 ""
 *   insn=0x0000000000292288 string=0x000000000029228C "h"
 *   insn=0x0000000000292294 string=0x0000000000292298 ""
 *   insn=0x0000000000292298 string=0x000000000029229C "h\n"
 *   insn=0x000000000029229C string=0x00000000002922A0 ""
 *   insn=0x00000000002922A4 string=0x00000000002922A8 ""
 *   insn=0x00000000002922A8 string=0x00000000002922AC "h"
 *   insn=0x00000000002922B4 string=0x00000000002922B8 ""
 *   insn=0x00000000002922B8 string=0x00000000002922BC "h*"
 *   insn=0x00000000002922C4 string=0x00000000002922C8 ""
 *   insn=0x00000000002922C8 string=0x00000000002922CC "h"
 *   insn=0x00000000002922D4 string=0x00000000002922D8 ""
 *   insn=0x00000000002922D8 string=0x00000000002922DC "h"
 *   insn=0x00000000002922DC string=0x00000000002922E0 ""
 *   insn=0x00000000002922E4 string=0x00000000002922E8 ""
 *   insn=0x00000000002922E8 string=0x00000000002922EC "h""
 *   insn=0x00000000002922EC string=0x00000000002922F0 ""
 *   insn=0x00000000002922F4 string=0x00000000002922F8 ""
 *   insn=0x00000000002922F8 string=0x00000000002922FC "h."
 *   insn=0x0000000000292308 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000292330 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000292338 string=0x000000000029233C ""
 *   insn=0x0000000000292340 string=0x0000000000292344 "`"
 *   insn=0x000000000029234C string=0x0000000000292350 "P"
 *   insn=0x0000000000292350 string=0x00000000001F3490 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AttackComponent::SetValueForBindedProperty(
        Caver::AttackComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x9
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v15; // [xsp+10h] [xbp-40h]
  __int64 v16; // [xsp+18h] [xbp-38h]
  __int64 v17; // [xsp+20h] [xbp-30h]
  __int64 v18; // [xsp+28h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 4:
      Caver::BindingValue::ProgramValue(v14, a3);
      sub_56A6A8((char *)this + 208);
      v5 = v14[1];
      v4 = v15;
      if ( v15 )
        ++*(_QWORD *)(v15 + 8);
      v6 = (_QWORD *)*((_QWORD *)this + 28);
      *((_QWORD *)this + 27) = v5;
      *((_QWORD *)this + 28) = v4;
      if ( v6 )
      {
        v7 = v6[1] - 1LL;
        v6[1] = v7;
        if ( !v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
          v8 = v6[2] - 1LL;
          v6[2] = v8;
          if ( !v8 )
            (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
        }
      }
      v10 = v16;
      v9 = v17;
      if ( v17 )
        ++*(_QWORD *)(v17 + 8);
      v11 = (_QWORD *)*((_QWORD *)this + 30);
      *((_QWORD *)this + 29) = v10;
      *((_QWORD *)this + 30) = v9;
      if ( v11 )
      {
        v12 = v11[1] - 1LL;
        v11[1] = v12;
        if ( !v12 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v13 = v11[2] - 1LL;
          v11[2] = v13;
          if ( !v13 )
            (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      Caver::Program::~Program((Caver::Program *)v14);
      break;
    case 5:
      *((_DWORD *)this + 65) = **((_DWORD **)a3 + 1);
      break;
    case 6:
      *((_DWORD *)this + 66) = **((_DWORD **)a3 + 1);
      break;
    case 7:
      *((_DWORD *)this + 69) = **((_DWORD **)a3 + 1);
      break;
    case 8:
      *((_DWORD *)this + 70) = **((_DWORD **)a3 + 1);
      break;
    case 9:
      *((_DWORD *)this + 71) = **((_DWORD **)a3 + 1);
      break;
    case 10:
      *((_DWORD *)this + 72) = **((_DWORD **)a3 + 1);
      break;
    case 11:
      *((_DWORD *)this + 74) = **((_DWORD **)a3 + 1);
      break;
    case 12:
      *((_DWORD *)this + 75) = **((_DWORD **)a3 + 1);
      break;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}

