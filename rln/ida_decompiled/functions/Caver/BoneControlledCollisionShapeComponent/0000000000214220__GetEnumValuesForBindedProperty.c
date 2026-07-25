/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000214220
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001F6DC0  Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F7F10  boost::detail::shared_count::shared_count<std::string>(std::string *)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002029C0  Caver::CollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002147CC  Caver::BindingValue::~BindingValue()
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 103
 *   insn=0x0000000000214234 string=0x0000000000214238 "V"
 *   insn=0x0000000000214244 string=0x0000000000214248 "?"
 *   insn=0x000000000021424C string=0x0000000000214250 "a"
 *   insn=0x0000000000214264 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000214278 string=0x000000000021427C "h"
 *   insn=0x000000000021427C string=0x0000000000214280 "@"
 *   insn=0x0000000000214280 string=0x0000000000214284 "("
 *   insn=0x0000000000214294 string=0x0000000000214298 "*"
 *   insn=0x00000000002142D4 string=0x00000000002142D8 "!@"
 *   insn=0x00000000002142E0 string=0x00000000002142E4 "("
 *   insn=0x00000000002142E8 string=0x00000000002142EC "u"
 *   insn=0x000000000021430C string=0x0000000000214310 "!@"
 *   insn=0x0000000000214318 string=0x000000000021431C "@"
 *   insn=0x000000000021431C string=0x0000000000214320 "H"
 *   insn=0x0000000000214338 string=0x000000000021433C "h"
 *   insn=0x0000000000214344 string=0x0000000000214348 "!@"
 *   insn=0x000000000021436C string=0x0000000000214384 "@"
 *   insn=0x0000000000214374 string=0x0000000000214378 "!@"
 *   insn=0x00000000002143A8 string=0x00000000002143AC "e"
 *   insn=0x00000000002143AC string=0x00000000002143B0 "a"
 *   insn=0x00000000002143B0 string=0x00000000002143B4 "?"
 *   insn=0x00000000002143BC string=0x00000000002143C0 "("
 *   insn=0x00000000002143C4 string=0x00000000002143C8 "("
 *   insn=0x00000000002143CC string=0x00000000002143D0 "("
 *   insn=0x00000000002143D4 string=0x00000000002143D8 "\t"
 *   insn=0x00000000002143D8 string=0x00000000002143DC ")"
 *   insn=0x00000000002143DC string=0x00000000002143E0 "\t"
 *   insn=0x00000000002143E4 string=0x00000000002143E8 "("
 *   insn=0x00000000002143EC string=0x00000000002143F0 "("
 *   insn=0x00000000002143F4 string=0x00000000002143F8 "\t"
 *   insn=0x00000000002143F4 string=0x0000000000214404 "("
 *   insn=0x00000000002143F8 string=0x00000000002143FC ")"
 *   insn=0x00000000002143FC string=0x0000000000214400 "\t"
 *   insn=0x0000000000214404 string=0x0000000000214408 "h"
 *   insn=0x000000000021441C string=0x0000000000214420 ","
 *   insn=0x0000000000214424 string=0x0000000000214428 "4"
 *   insn=0x000000000021442C string=0x0000000000214430 ""
 *   insn=0x000000000021443C string=0x0000000000214440 "\t@"
 *   insn=0x000000000021444C string=0x0000000000214450 ""
 *   insn=0x000000000021445C string=0x0000000000214460 "@"
 *   insn=0x000000000021446C string=0x0000000000214470 "4"
 *   insn=0x0000000000214474 string=0x0000000000214478 ""
 *   insn=0x0000000000214488 string=0x000000000021448C "\t@"
 *   insn=0x0000000000214494 string=0x0000000000214498 ""
 *   insn=0x00000000002144A8 string=0x00000000002144AC "@"
 *   insn=0x00000000002144C4 string=0x00000000002144C8 "x"
 *   insn=0x00000000002144CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002144DC string=0x00000000002144E0 ""
 *   insn=0x00000000002144EC string=0x00000000002144F0 "\t@"
 *   insn=0x00000000002144FC string=0x0000000000214500 ""
 *   insn=0x000000000021450C string=0x0000000000214510 "@"
 *   insn=0x0000000000214518 string=0x000000000021451C "'"
 *   insn=0x0000000000214528 string=0x000000000021452C "4"
 *   insn=0x0000000000214530 string=0x0000000000214534 ""
 *   insn=0x0000000000214540 string=0x0000000000214544 "\t@"
 *   insn=0x0000000000214550 string=0x0000000000214554 ""
 *   insn=0x0000000000214560 string=0x0000000000214564 "@"
 *   insn=0x0000000000214570 string=0x0000000000214574 "4"
 *   insn=0x0000000000214578 string=0x000000000021457C ""
 *   insn=0x0000000000214588 string=0x000000000021458C "\t@"
 *   insn=0x0000000000214598 string=0x000000000021459C ""
 *   insn=0x00000000002145A8 string=0x00000000002145AC "@"
 *   insn=0x00000000002145C4 string=0x00000000002145C8 "a"
 *   insn=0x00000000002145D0 string=0x00000000002145D4 "4"
 *   insn=0x00000000002145D8 string=0x00000000002145DC ""
 *   insn=0x00000000002145E8 string=0x00000000002145EC "\t@"
 *   insn=0x00000000002145F8 string=0x00000000002145FC ""
 *   insn=0x0000000000214608 string=0x000000000021460C "@"
 *   insn=0x0000000000214618 string=0x000000000021461C "L"
 *   insn=0x000000000021461C string=0x0000000000214620 "K"
 *   insn=0x0000000000214634 string=0x0000000000214638 "V"
 *   insn=0x0000000000214650 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021466C string=0x0000000000214670 "("
 *   insn=0x0000000000214670 string=0x00000000001F7F10 "0'"
 *   insn=0x0000000000214690 string=0x0000000000214694 "h"
 *   insn=0x0000000000214694 string=0x0000000000214698 "j"
 *   insn=0x0000000000214698 string=0x000000000021469C "("
 *   insn=0x00000000002146A4 string=0x00000000002146A8 "A"
 *   insn=0x00000000002146AC string=0x00000000002146B0 "\t@"
 *   insn=0x00000000002146BC string=0x00000000002146C0 ""
 *   insn=0x00000000002146C4 string=0x00000000002146C8 "A"
 *   insn=0x00000000002146CC string=0x00000000002146D0 "@"
 *   insn=0x00000000002146E4 string=0x00000000002146E8 "i"
 *   insn=0x00000000002146E8 string=0x00000000002146EC "h"
 *   insn=0x00000000002146F0 string=0x00000000002146F4 "3"
 *   insn=0x00000000002146F4 string=0x00000000002146F8 "h"
 *   insn=0x00000000002146F8 string=0x00000000002146FC ""
 *   insn=0x00000000002146FC string=0x0000000000214700 "h"
 *   insn=0x0000000000214704 string=0x0000000000214708 "h"
 *   insn=0x000000000021470C string=0x0000000000214710 "\t@"
 *   insn=0x0000000000214714 string=0x0000000000214718 "h\n@"
 *   insn=0x0000000000214718 string=0x000000000021471C ""
 *   insn=0x000000000021471C string=0x0000000000214720 "h\n"
 *   insn=0x0000000000214724 string=0x0000000000214728 "h"
 *   insn=0x000000000021472C string=0x0000000000214730 "@"
 *   insn=0x0000000000214764 string=0x0000000000214768 "4"
 *   insn=0x000000000021476C string=0x0000000000214770 ""
 *   insn=0x000000000021477C string=0x0000000000214780 "\t@"
 *   insn=0x000000000021478C string=0x0000000000214790 ""
 *   insn=0x000000000021479C string=0x00000000002147A0 "@"
 *   insn=0x00000000002147AC string=0x00000000002147B0 "E"
 *   insn=0x00000000002147C0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002147C4 string=0x00000000002147C8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(
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
  int v18; // [xsp+48h] [xbp-60h]
  __int64 v19; // [xsp+50h] [xbp-58h]
  _QWORD *v20; // [xsp+58h] [xbp-50h]
  __int64 v21; // [xsp+60h] [xbp-48h]
  _QWORD *v22; // [xsp+68h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 != 301 )
  {
    Caver::CollisionShapeComponent::GetEnumValuesForBindedProperty();
    return;
  }
  v5 = (_QWORD *)*((_QWORD *)a1 + 60);
  if ( v5
    || (Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 464), a1),
        (v5 = (_QWORD *)*((_QWORD *)a1 + 60)) != 0) )
  {
    if ( v5[17] )
      goto LABEL_5;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 64LL))(v5);
    if ( !v5[17] )
      return;
    v5 = (_QWORD *)*((_QWORD *)a1 + 60);
    if ( v5 )
    {
LABEL_5:
      v6 = v5[17];
      if ( !v6 )
        goto LABEL_15;
    }
    else
    {
      Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 464), a1);
      v5 = (_QWORD *)*((_QWORD *)a1 + 60);
      v6 = v5[17];
      if ( !v6 )
      {
LABEL_15:
        (*(void (__fastcall **)(_QWORD *))(*v5 + 64LL))(v5);
        if ( !*(_QWORD *)(v5[17] + 24LL) )
          return;
LABEL_7:
        v7 = (_QWORD *)*((_QWORD *)a1 + 60);
        if ( v7 )
        {
          if ( v7[17] )
            goto LABEL_20;
        }
        else
        {
          Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 464), a1);
          v7 = (_QWORD *)*((_QWORD *)a1 + 60);
          if ( v7[17] )
            goto LABEL_20;
        }
        (*(void (__fastcall **)(_QWORD *))(*v7 + 64LL))(v7);
        v7 = (_QWORD *)*((_QWORD *)a1 + 60);
        if ( !v7 )
        {
          Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 464), a1);
          v7 = (_QWORD *)*((_QWORD *)a1 + 60);
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

