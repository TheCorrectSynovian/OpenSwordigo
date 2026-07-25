/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002627F8
 * Mangled: _ZN5Caver24CollectableItemComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::CollectableItemComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001FA050  Caver::CollectableItemComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA050  Caver::CollectableItemComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x000000000026280C string=0x0000000000262810 "V"
 *   insn=0x0000000000262820 string=0x0000000000262830 "4$"
 *   insn=0x0000000000262828 string=0x000000000026282C "M"
 *   insn=0x0000000000262844 string=0x0000000000262848 ">u"
 *   insn=0x0000000000262848 string=0x000000000026284C "a"
 *   insn=0x000000000026284C string=0x0000000000262850 "?"
 *   insn=0x0000000000262858 string=0x000000000026285C "("
 *   insn=0x0000000000262860 string=0x0000000000262864 "("
 *   insn=0x0000000000262868 string=0x000000000026286C "("
 *   insn=0x0000000000262870 string=0x0000000000262874 "\t"
 *   insn=0x0000000000262874 string=0x0000000000262878 ")"
 *   insn=0x0000000000262878 string=0x000000000026287C "\t"
 *   insn=0x0000000000262880 string=0x0000000000262884 "("
 *   insn=0x0000000000262888 string=0x000000000026288C "("
 *   insn=0x0000000000262890 string=0x0000000000262894 "\t"
 *   insn=0x0000000000262890 string=0x00000000002628A0 "("
 *   insn=0x0000000000262894 string=0x0000000000262898 ")"
 *   insn=0x0000000000262898 string=0x000000000026289C "\t"
 *   insn=0x00000000002628A0 string=0x00000000002628A4 "h"
 *   insn=0x00000000002628C0 string=0x00000000002628C4 "5"
 *   insn=0x00000000002628C8 string=0x00000000002628CC ""
 *   insn=0x00000000002628D8 string=0x00000000002628DC "\t@"
 *   insn=0x00000000002628E8 string=0x00000000002628EC ""
 *   insn=0x00000000002628F8 string=0x00000000002628FC "@"
 *   insn=0x0000000000262908 string=0x000000000026290C "5"
 *   insn=0x0000000000262910 string=0x0000000000262914 ""
 *   insn=0x0000000000262924 string=0x0000000000262928 "\t@"
 *   insn=0x0000000000262930 string=0x0000000000262934 ""
 *   insn=0x0000000000262944 string=0x0000000000262948 "@"
 *   insn=0x000000000026296C string=0x0000000000262988 "RN"
 *   insn=0x0000000000262988 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000262998 string=0x000000000026299C ""
 *   insn=0x00000000002629A8 string=0x00000000002629AC "\t@"
 *   insn=0x00000000002629B8 string=0x00000000002629BC ""
 *   insn=0x00000000002629C8 string=0x00000000002629CC "@"
 *   insn=0x00000000002629D4 string=0x00000000002629D8 "'"
 *   insn=0x00000000002629E4 string=0x00000000002629E8 "4"
 *   insn=0x00000000002629EC string=0x00000000002629F0 ""
 *   insn=0x00000000002629FC string=0x0000000000262A00 "\t@"
 *   insn=0x0000000000262A0C string=0x0000000000262A10 ""
 *   insn=0x0000000000262A1C string=0x0000000000262A20 "@"
 *   insn=0x0000000000262A2C string=0x0000000000262A30 "4"
 *   insn=0x0000000000262A34 string=0x0000000000262A38 ""
 *   insn=0x0000000000262A44 string=0x0000000000262A48 "\t@"
 *   insn=0x0000000000262A54 string=0x0000000000262A58 ""
 *   insn=0x0000000000262A64 string=0x0000000000262A68 "@"
 *   insn=0x0000000000262A80 string=0x0000000000262A84 "2"
 *   insn=0x0000000000262A8C string=0x0000000000262A90 "4"
 *   insn=0x0000000000262A94 string=0x0000000000262A98 ""
 *   insn=0x0000000000262AA4 string=0x0000000000262AA8 "\t@"
 *   insn=0x0000000000262AB4 string=0x0000000000262AB8 ""
 *   insn=0x0000000000262AC4 string=0x0000000000262AC8 "@"
 *   insn=0x0000000000262AE0 string=0x0000000000262AE4 "[]"
 *   insn=0x0000000000262AE4 string=0x00000000001FA050 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollectableItemComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  __int64 *v4; // x20
  unsigned __int64 v5; // x23
  __int64 v6; // x1
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  int v12; // [xsp+0h] [xbp-60h]
  __int64 v13; // [xsp+8h] [xbp-58h]
  _QWORD *v14; // [xsp+10h] [xbp-50h]
  __int64 v15; // [xsp+18h] [xbp-48h]
  _QWORD *v16; // [xsp+20h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  if ( !a2 )
  {
    v4 = &Caver::bindingTypeStrings;
    v5 = -1;
    while ( 1 )
    {
      Caver::BindingValue::ValueWithInt();
      v6 = *(_QWORD *)(a3 + 8);
      if ( v6 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v7 = v16;
      if ( v16 )
        goto LABEL_12;
LABEL_15:
      if ( v14 )
      {
        v10 = v14[1] - 1LL;
        v14[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)())(*v14 + 16LL))();
          v11 = v14[2] - 1LL;
          v14[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)())(*v14 + 24LL))();
        }
      }
      ++v5;
      ++v4;
      if ( v5 >= 5 )
        return;
    }
    *(_DWORD *)v6 = v12;
    *(_QWORD *)(v6 + 8) = v13;
    *(_QWORD *)(v6 + 16) = v14;
    if ( v14 )
      ++v14[1];
    *(_QWORD *)(v6 + 24) = v15;
    *(_QWORD *)(v6 + 32) = v16;
    if ( v16 )
      ++v16[1];
    *(_QWORD *)(a3 + 8) = v6 + 40;
    v7 = v16;
    if ( !v16 )
      goto LABEL_15;
LABEL_12:
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
    goto LABEL_15;
  }
  Caver::Component::GetEnumValuesForBindedProperty();
}

