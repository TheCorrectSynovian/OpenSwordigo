/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C82F0
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::SwingableWeaponControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x0000000000200760  Caver::SwingableWeaponControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x0000000000200760  Caver::SwingableWeaponControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 69
 *   insn=0x00000000002C8304 string=0x00000000002C8308 "V"
 *   insn=0x00000000002C8314 string=0x00000000002C8318 "?"
 *   insn=0x00000000002C831C string=0x00000000002C8320 "a"
 *   insn=0x00000000002C8334 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C8348 string=0x00000000002C834C "h"
 *   insn=0x00000000002C834C string=0x00000000002C8350 "@"
 *   insn=0x00000000002C8350 string=0x00000000002C8354 "("
 *   insn=0x00000000002C8364 string=0x00000000002C8368 "*"
 *   insn=0x00000000002C8370 string=0x00000000002C8374 "?"
 *   insn=0x00000000002C8384 string=0x00000000002C859C "M"
 *   insn=0x00000000002C83A4 string=0x00000000002C83A8 "!@"
 *   insn=0x00000000002C83B0 string=0x00000000002C83B4 "("
 *   insn=0x00000000002C83B8 string=0x00000000002C83BC "u"
 *   insn=0x00000000002C83DC string=0x00000000002C83E0 "!@"
 *   insn=0x00000000002C83E8 string=0x00000000002C83EC "@"
 *   insn=0x00000000002C83EC string=0x00000000002C83F0 "H"
 *   insn=0x00000000002C8408 string=0x00000000002C840C "h"
 *   insn=0x00000000002C8414 string=0x00000000002C8418 "!@"
 *   insn=0x00000000002C843C string=0x00000000002C8454 "@"
 *   insn=0x00000000002C8444 string=0x00000000002C8448 "!@"
 *   insn=0x00000000002C8478 string=0x00000000002C847C "1"
 *   insn=0x00000000002C847C string=0x00000000002C8480 "a"
 *   insn=0x00000000002C8480 string=0x00000000002C8484 "?"
 *   insn=0x00000000002C848C string=0x00000000002C8490 "("
 *   insn=0x00000000002C8494 string=0x00000000002C8498 "("
 *   insn=0x00000000002C849C string=0x00000000002C84A0 "("
 *   insn=0x00000000002C84A4 string=0x00000000002C84A8 "\t"
 *   insn=0x00000000002C84A8 string=0x00000000002C84AC ")"
 *   insn=0x00000000002C84AC string=0x00000000002C84B0 "\t"
 *   insn=0x00000000002C84B4 string=0x00000000002C84B8 "("
 *   insn=0x00000000002C84BC string=0x00000000002C84C0 "("
 *   insn=0x00000000002C84C4 string=0x00000000002C84C8 "\t"
 *   insn=0x00000000002C84C4 string=0x00000000002C84D4 "("
 *   insn=0x00000000002C84C8 string=0x00000000002C84CC ")"
 *   insn=0x00000000002C84CC string=0x00000000002C84D0 "\t"
 *   insn=0x00000000002C84D4 string=0x00000000002C84D8 "h"
 *   insn=0x00000000002C84F4 string=0x00000000002C84F8 "4"
 *   insn=0x00000000002C84FC string=0x00000000002C8500 ""
 *   insn=0x00000000002C850C string=0x00000000002C8510 "\t@"
 *   insn=0x00000000002C851C string=0x00000000002C8520 ""
 *   insn=0x00000000002C852C string=0x00000000002C8530 "@"
 *   insn=0x00000000002C853C string=0x00000000002C8540 "4"
 *   insn=0x00000000002C8544 string=0x00000000002C8548 ""
 *   insn=0x00000000002C8558 string=0x00000000002C855C "\t@"
 *   insn=0x00000000002C8564 string=0x00000000002C8568 ""
 *   insn=0x00000000002C8578 string=0x00000000002C857C "@"
 *   insn=0x00000000002C8594 string=0x00000000002C8598 "x"
 *   insn=0x00000000002C859C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C85AC string=0x00000000002C85B0 ""
 *   insn=0x00000000002C85BC string=0x00000000002C85C0 "\t@"
 *   insn=0x00000000002C85CC string=0x00000000002C85D0 ""
 *   insn=0x00000000002C85DC string=0x00000000002C85E0 "@"
 *   insn=0x00000000002C85E8 string=0x00000000002C85EC "'"
 *   insn=0x00000000002C85F8 string=0x00000000002C85FC "4"
 *   insn=0x00000000002C8600 string=0x00000000002C8604 ""
 *   insn=0x00000000002C8610 string=0x00000000002C8614 "\t@"
 *   insn=0x00000000002C8620 string=0x00000000002C8624 ""
 *   insn=0x00000000002C8630 string=0x00000000002C8634 "@"
 *   insn=0x00000000002C8640 string=0x00000000002C8644 "4"
 *   insn=0x00000000002C8648 string=0x00000000002C864C ""
 *   insn=0x00000000002C8658 string=0x00000000002C865C "\t@"
 *   insn=0x00000000002C8668 string=0x00000000002C866C ""
 *   insn=0x00000000002C8678 string=0x00000000002C867C "@"
 *   insn=0x00000000002C8694 string=0x00000000002C8698 "-"
 *   insn=0x00000000002C86A0 string=0x00000000002C86A4 "4"
 *   insn=0x00000000002C86A8 string=0x00000000002C86AC ""
 *   insn=0x00000000002C86B8 string=0x00000000002C86BC "\t@"
 *   insn=0x00000000002C86C8 string=0x00000000002C86CC ""
 *   insn=0x00000000002C86D8 string=0x00000000002C86DC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponControllerComponent::GetEnumValuesForBindedProperty(
        Caver::Component *a1,
        int a2,
        __int64 a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x8
  _QWORD *v7; // x21
  __int64 v8; // x8
  int *v9; // x21
  __int64 v10; // x23
  __int64 v11; // x24
  __int64 v12; // x1
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  int v18; // [xsp+0h] [xbp-60h]
  __int64 v19; // [xsp+8h] [xbp-58h]
  _QWORD *v20; // [xsp+10h] [xbp-50h]
  __int64 v21; // [xsp+18h] [xbp-48h]
  _QWORD *v22; // [xsp+20h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 != 1 )
  {
    Caver::Component::GetEnumValuesForBindedProperty();
    return;
  }
  v5 = (_QWORD *)*((_QWORD *)a1 + 16);
  if ( v5
    || (Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 112), a1),
        (v5 = (_QWORD *)*((_QWORD *)a1 + 16)) != 0) )
  {
    if ( v5[17] )
      goto LABEL_5;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 64LL))(v5);
    if ( !v5[17] )
      return;
    v5 = (_QWORD *)*((_QWORD *)a1 + 16);
    if ( v5 )
    {
LABEL_5:
      v6 = v5[17];
      if ( !v6 )
        goto LABEL_15;
    }
    else
    {
      Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 112), a1);
      v5 = (_QWORD *)*((_QWORD *)a1 + 16);
      v6 = v5[17];
      if ( !v6 )
      {
LABEL_15:
        (*(void (__fastcall **)(_QWORD *))(*v5 + 64LL))(v5);
        if ( !*(_QWORD *)(v5[17] + 24LL) )
          return;
LABEL_7:
        v7 = (_QWORD *)*((_QWORD *)a1 + 16);
        if ( v7 )
        {
          if ( v7[17] )
            goto LABEL_20;
        }
        else
        {
          Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 112), a1);
          v7 = (_QWORD *)*((_QWORD *)a1 + 16);
          if ( v7[17] )
            goto LABEL_20;
        }
        (*(void (__fastcall **)(_QWORD *))(*v7 + 64LL))(v7);
        v7 = (_QWORD *)*((_QWORD *)a1 + 16);
        if ( !v7 )
        {
          Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 112), a1);
          v7 = (_QWORD *)*((_QWORD *)a1 + 16);
        }
LABEL_20:
        v8 = v7[17];
        if ( !v8 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v7 + 64LL))(v7);
          v8 = v7[17];
        }
        v9 = **(int ***)(v8 + 24);
        if ( *v9 >= 1 )
        {
          v10 = 0;
          v11 = 0;
          while ( 1 )
          {
            Caver::BindingValue::ValueWithString();
            v12 = *(_QWORD *)(a3 + 8);
            if ( v12 != *(_QWORD *)(a3 + 16) )
              break;
            std::vector<Caver::BindingValue>::_M_insert_aux();
            v13 = v22;
            if ( v22 )
              goto LABEL_32;
LABEL_35:
            if ( v20 )
            {
              v16 = v20[1] - 1LL;
              v20[1] = v16;
              if ( !v16 )
              {
                (*(void (__fastcall **)())(*v20 + 16LL))();
                v17 = v20[2] - 1LL;
                v20[2] = v17;
                if ( !v17 )
                  (*(void (__fastcall **)())(*v20 + 24LL))();
              }
            }
            ++v11;
            v10 += 144;
            if ( v11 >= *v9 )
              return;
          }
          *(_DWORD *)v12 = v18;
          *(_QWORD *)(v12 + 8) = v19;
          *(_QWORD *)(v12 + 16) = v20;
          if ( v20 )
            ++v20[1];
          *(_QWORD *)(v12 + 24) = v21;
          *(_QWORD *)(v12 + 32) = v22;
          if ( v22 )
            ++v22[1];
          *(_QWORD *)(a3 + 8) = v12 + 40;
          v13 = v22;
          if ( !v22 )
            goto LABEL_35;
LABEL_32:
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
          goto LABEL_35;
        }
        return;
      }
    }
    if ( !*(_QWORD *)(v6 + 24) )
      return;
    goto LABEL_7;
  }
}

