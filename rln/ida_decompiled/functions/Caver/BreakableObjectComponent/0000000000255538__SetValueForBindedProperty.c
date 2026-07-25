/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000255538
 * Mangled: _ZN5Caver24BreakableObjectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::BreakableObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FD5D0  Caver::BreakableObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FD5D0  Caver::BreakableObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 42
 *   insn=0x000000000025554C string=0x0000000000255550 "W"
 *   insn=0x0000000000255574 string=0x0000000000255578 ")q"
 *   insn=0x0000000000255578 string=0x000000000025557C "(y"
 *   insn=0x000000000025557C string=0x0000000000255580 ""
 *   insn=0x0000000000255588 string=0x000000000025558C ""
 *   insn=0x000000000025558C string=0x0000000000255590 "h"
 *   insn=0x0000000000255590 string=0x0000000000255594 "E"
 *   insn=0x0000000000255598 string=0x000000000025559C ""
 *   insn=0x000000000025559C string=0x00000000002555A0 "hz"
 *   insn=0x00000000002555A0 string=0x00000000002555A4 "A"
 *   insn=0x00000000002555B0 string=0x00000000002555B4 "`"
 *   insn=0x00000000002555B0 string=0x00000000001F4540 "P'"
 *   insn=0x00000000002555B8 string=0x00000000002555BC ";T"
 *   insn=0x00000000002555C4 string=0x00000000002555C8 "\n"
 *   insn=0x00000000002555C4 string=0x00000000002555D4 "vJ@"
 *   insn=0x00000000002555C8 string=0x00000000002555CC "J"
 *   insn=0x00000000002555CC string=0x00000000002555D0 "\n"
 *   insn=0x00000000002555D4 string=0x00000000002555D8 "i"
 *   insn=0x00000000002555D8 string=0x00000000002555DC "6"
 *   insn=0x00000000002555E0 string=0x00000000002555E4 ""
 *   insn=0x00000000002555F0 string=0x00000000002555F4 "\t@"
 *   insn=0x0000000000255600 string=0x0000000000255604 ""
 *   insn=0x0000000000255610 string=0x0000000000255614 "@"
 *   insn=0x0000000000255624 string=0x0000000000255628 "\n"
 *   insn=0x0000000000255624 string=0x0000000000255634 "vR@"
 *   insn=0x0000000000255628 string=0x000000000025562C "J"
 *   insn=0x000000000025562C string=0x0000000000255630 "\n"
 *   insn=0x0000000000255634 string=0x0000000000255638 "i"
 *   insn=0x0000000000255638 string=0x000000000025563C "6"
 *   insn=0x0000000000255640 string=0x0000000000255644 ""
 *   insn=0x0000000000255650 string=0x0000000000255654 "\t@"
 *   insn=0x0000000000255660 string=0x0000000000255664 ""
 *   insn=0x0000000000255670 string=0x0000000000255674 "@"
 *   insn=0x0000000000255680 string=0x0000000000255684 ";"
 *   insn=0x0000000000255690 string=0x0000000000255694 "#"
 *   insn=0x0000000000255694 string=0x00000000001F9320 "0'"
 *   insn=0x000000000025569C string=0x00000000002556A0 ""
 *   insn=0x00000000002556A0 string=0x00000000002556A4 "hv"
 *   insn=0x00000000002556D0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002556D8 string=0x00000000002556DC "%"
 *   insn=0x00000000002556E0 string=0x00000000002556E4 "x"
 *   insn=0x00000000002556F0 string=0x00000000001FD5D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BreakableObjectComponent::SetValueForBindedProperty(
        __int64 this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::Component *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x9
  _QWORD *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x9
  _QWORD *v13; // x22
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16[2]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v17; // [xsp+10h] [xbp-50h]
  __int64 v18; // [xsp+18h] [xbp-48h]
  __int64 v19; // [xsp+20h] [xbp-40h]
  __int64 v20; // [xsp+28h] [xbp-38h]

  v5 = (Caver::Component *)this;
  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      *(_BYTE *)(this + 113) = **((_BYTE **)a3 + 1);
      break;
    case 1:
      *(_DWORD *)(this + 116) = **((_DWORD **)a3 + 1);
      break;
    case 2:
      *(_DWORD *)(this + 120) = **((_DWORD **)a3 + 1);
      break;
    case 3:
      Caver::BindingValue::ProgramValue(v16, a3);
      sub_56A6A8((char *)v5 + 128);
      v7 = v16[1];
      v6 = v17;
      if ( v17 )
        ++*(_QWORD *)(v17 + 8);
      v8 = (_QWORD *)*((_QWORD *)v5 + 18);
      *((_QWORD *)v5 + 17) = v7;
      *((_QWORD *)v5 + 18) = v6;
      if ( v8 )
      {
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
      }
      v12 = v18;
      v11 = v19;
      if ( v19 )
        ++*(_QWORD *)(v19 + 8);
      v13 = (_QWORD *)*((_QWORD *)v5 + 20);
      *((_QWORD *)v5 + 19) = v12;
      *((_QWORD *)v5 + 20) = v11;
      if ( v13 )
      {
        v14 = v13[1] - 1LL;
        v13[1] = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v15 = v13[2] - 1LL;
          v13[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
      }
      Caver::Program::~Program((Caver::Program *)v16);
      goto LABEL_17;
    default:
LABEL_17:
      this = Caver::Component::SetValueForBindedProperty(v5, a2, a3);
      break;
  }
  return this;
}

