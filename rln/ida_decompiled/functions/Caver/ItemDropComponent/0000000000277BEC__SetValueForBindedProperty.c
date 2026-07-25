/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000277BEC
 * Mangled: _ZN5Caver17ItemDropComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ItemDropComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FD110  Caver::ItemDropComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 92
 *   insn=0x0000000000277BFC string=0x0000000000277C00 "T"
 *   insn=0x0000000000277C08 string=0x0000000000277C0C "?"
 *   insn=0x0000000000277C14 string=0x0000000000277C18 "!"
 *   insn=0x0000000000277C14 string=0x0000000000277C2C "H"
 *   insn=0x0000000000277C18 string=0x0000000000277C1C "H"
 *   insn=0x0000000000277C18 string=0x0000000000277C3C "("
 *   insn=0x0000000000277C1C string=0x0000000000277C20 ""
 *   insn=0x0000000000277C20 string=0x0000000000277C24 "h"
 *   insn=0x0000000000277C24 string=0x0000000000277C28 "0"
 *   insn=0x0000000000277C2C string=0x0000000000277C30 ""
 *   insn=0x0000000000277C30 string=0x0000000000277C34 "h"
 *   insn=0x0000000000277C34 string=0x0000000000277C38 ","
 *   insn=0x0000000000277C3C string=0x0000000000277C40 ""
 *   insn=0x0000000000277C44 string=0x0000000000277C4C "})"
 *   insn=0x0000000000277C4C string=0x0000000000277C50 "\t"
 *   insn=0x0000000000277C50 string=0x0000000000277C54 ""
 *   insn=0x0000000000277C5C string=0x0000000000277C60 "("
 *   insn=0x0000000000277C60 string=0x0000000000277C64 ""
 *   insn=0x0000000000277C70 string=0x0000000000277C78 "(y"
 *   insn=0x0000000000277C78 string=0x0000000000277C7C ""
 *   insn=0x0000000000277C80 string=0x0000000000277C84 "A"
 *   insn=0x0000000000277C80 string=0x0000000000277D0C "H"
 *   insn=0x0000000000277C80 string=0x0000000000277D28 "H"
 *   insn=0x0000000000277C80 string=0x0000000000277D44 "H"
 *   insn=0x0000000000277C80 string=0x0000000000277D60 "A"
 *   insn=0x0000000000277C88 string=0x0000000000277C8C "'"
 *   insn=0x0000000000277C8C string=0x0000000000277C90 "hJ@"
 *   insn=0x0000000000277CA4 string=0x0000000000277CA8 "i#"
 *   insn=0x0000000000277CA8 string=0x0000000000277CAC ")"
 *   insn=0x0000000000277CB8 string=0x0000000000277CBC "i#"
 *   insn=0x0000000000277CBC string=0x0000000000277CC0 ")=G"
 *   insn=0x0000000000277CC0 string=0x0000000000277CC4 "!"
 *   insn=0x0000000000277CC8 string=0x0000000000277CCC "\t"
 *   insn=0x0000000000277CC8 string=0x0000000000277DC0 "\t"
 *   insn=0x0000000000277CCC string=0x0000000000277CD0 "*"
 *   insn=0x0000000000277CD0 string=0x0000000000277CD4 "\n"
 *   insn=0x0000000000277CD8 string=0x0000000000277CDC "<"
 *   insn=0x0000000000277CDC string=0x0000000000277DCC "?"
 *   insn=0x0000000000277CE4 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000277CF0 string=0x0000000000277CF4 "a"
 *   insn=0x0000000000277CF4 string=0x0000000000277DE0 "<"
 *   insn=0x0000000000277D0C string=0x0000000000277D10 "iJ@"
 *   insn=0x0000000000277D14 string=0x0000000000277D18 ""
 *   insn=0x0000000000277D18 string=0x0000000000277D1C ")"
 *   insn=0x0000000000277D1C string=0x0000000000277D20 "("
 *   insn=0x0000000000277D28 string=0x0000000000277D2C "iJ@"
 *   insn=0x0000000000277D30 string=0x0000000000277D34 ""
 *   insn=0x0000000000277D34 string=0x0000000000277D38 ")"
 *   insn=0x0000000000277D38 string=0x0000000000277D3C "("
 *   insn=0x0000000000277D44 string=0x0000000000277D48 "iJ@"
 *   insn=0x0000000000277D4C string=0x0000000000277D50 ""
 *   insn=0x0000000000277D50 string=0x0000000000277D54 ")"
 *   insn=0x0000000000277D54 string=0x0000000000277D58 "("
 *   insn=0x0000000000277D68 string=0x0000000000277D6C "hJ@"
 *   insn=0x0000000000277D70 string=0x0000000000277D74 ""
 *   insn=0x0000000000277D7C string=0x0000000000277D80 "J"
 *   insn=0x0000000000277D84 string=0x0000000000277D88 "i#"
 *   insn=0x0000000000277D88 string=0x0000000000277D8C ")"
 *   insn=0x0000000000277D98 string=0x0000000000277D9C "i#"
 *   insn=0x0000000000277D9C string=0x0000000000277DA0 ")=G"
 *   insn=0x0000000000277DA0 string=0x0000000000277DA4 "!"
 *   insn=0x0000000000277DA8 string=0x0000000000277DAC "\t"
 *   insn=0x0000000000277DAC string=0x0000000000277DB0 "*"
 *   insn=0x0000000000277DB0 string=0x0000000000277DB4 "\n"
 *   insn=0x0000000000277DC0 string=0x0000000000277DC4 "*"
 *   insn=0x0000000000277DC4 string=0x0000000000277DC8 "\n"
 *   insn=0x0000000000277DD4 string=0x0000000000277DD8 "s"
 *   insn=0x0000000000277DE0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000277DE4 string=0x0000000000277DE8 "j#"
 *   insn=0x0000000000277DE8 string=0x0000000000277DEC "J"
 *   insn=0x0000000000277DF0 string=0x0000000000277DF4 "(a"
 *   insn=0x0000000000277DFC string=0x0000000000277E00 "j#"
 *   insn=0x0000000000277E00 string=0x0000000000277E04 "J=G"
 *   insn=0x0000000000277E04 string=0x0000000000277E08 ")!"
 *   insn=0x0000000000277E0C string=0x0000000000277E10 "*"
 *   insn=0x0000000000277E0C string=0x0000000000277E7C "*"
 *   insn=0x0000000000277E10 string=0x0000000000277E14 "K"
 *   insn=0x0000000000277E14 string=0x0000000000277E18 "+"
 *   insn=0x0000000000277E20 string=0x0000000000277E60 "_"
 *   insn=0x0000000000277E24 string=0x0000000000277E28 "j#"
 *   insn=0x0000000000277E28 string=0x0000000000277E2C "J"
 *   insn=0x0000000000277E30 string=0x0000000000277E34 "(a"
 *   insn=0x0000000000277E3C string=0x0000000000277E40 "j#"
 *   insn=0x0000000000277E40 string=0x0000000000277E44 "J=G"
 *   insn=0x0000000000277E44 string=0x0000000000277E48 ")!"
 *   insn=0x0000000000277E4C string=0x0000000000277E50 "*"
 *   insn=0x0000000000277E50 string=0x0000000000277E54 "K"
 *   insn=0x0000000000277E54 string=0x0000000000277E58 "+"
 *   insn=0x0000000000277E6C string=0x0000000000277E70 "M"
 *   insn=0x0000000000277E7C string=0x0000000000277E80 "K"
 *   insn=0x0000000000277E80 string=0x0000000000277E84 "+"
 *   insn=0x0000000000277E84 string=0x0000000000277E88 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemDropComponent::SetValueForBindedProperty(
        Caver::ItemDropComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  int v4; // w8
  int v5; // w21
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  _QWORD v9[3]; // [xsp+8h] [xbp-38h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 1 )
  {
    *((_BYTE *)this + 113) = **((_BYTE **)a3 + 1);
  }
  else if ( a2 )
  {
    v4 = a2 - 4;
    if ( a2 < 4 )
    {
LABEL_11:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
    }
    else
    {
      v5 = v4 / 5;
      switch ( a2 - 5 * (v4 / 5) )
      {
        case 4:
          sub_56A528(v9, *((_QWORD *)a3 + 1));
          sub_56A6A8(*((_QWORD *)this + 18) + 32LL * v5);
          v6 = (void *)(v9[0] - 24LL);
          if ( (__int64 *)(v9[0] - 24LL) == &qword_6FD2E0 )
            return;
          v7 = (unsigned int *)(v9[0] - 8LL);
          if ( !&pthread_create )
            goto LABEL_20;
          do
            v8 = __ldaxr(v7);
          while ( __stlxr(v8 - 1, v7) );
          break;
        case 5:
          sub_56A528(v9, *((_QWORD *)a3 + 1));
          sub_56A6A8(*((_QWORD *)this + 18) + 32LL * v5 + 8);
          v6 = (void *)(v9[0] - 24LL);
          if ( (__int64 *)(v9[0] - 24LL) == &qword_6FD2E0 )
            return;
          v7 = (unsigned int *)(v9[0] - 8LL);
          if ( &pthread_create )
          {
            do
              v8 = __ldaxr(v7);
            while ( __stlxr(v8 - 1, v7) );
          }
          else
          {
LABEL_20:
            v8 = (*v7)--;
          }
          break;
        case 6:
          *(_DWORD *)(*((_QWORD *)this + 18) + 32LL * v5 + 16) = **((_DWORD **)a3 + 1);
          return;
        case 7:
          *(_DWORD *)(*((_QWORD *)this + 18) + 32LL * v5 + 20) = **((_DWORD **)a3 + 1);
          return;
        case 8:
          *(_DWORD *)(*((_QWORD *)this + 18) + 32LL * v5 + 24) = **((_DWORD **)a3 + 1);
          return;
        default:
          goto LABEL_11;
      }
      if ( v8 <= 0 )
        operator delete(v6);
    }
  }
  else
  {
    *((_BYTE *)this + 112) = **((_BYTE **)a3 + 1);
  }
}

