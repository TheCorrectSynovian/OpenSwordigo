/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003ACD3C
 * Mangled: _ZN5Caver14CharacterState22HighestLevelItemOfTypeENS_8ItemTypeE
 * Demangled: Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *
 * Callers: 2
 *   0x00000000001F9F30  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *   0x00000000003AC900  Caver::CharacterState::AddItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD8A0  __gnu_cxx::new_allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>::destroy(std::pair<std::string const,Caver::CharacterState::ItemState>*)
 *   0x00000000001FDA10  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054CA60  sub_54CA60
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 84
 *   insn=0x00000000003ACD68 string=0x00000000003ACD6C "?"
 *   insn=0x00000000003ACD78 string=0x00000000003ACD7C ""
 *   insn=0x00000000003ACD80 string=0x00000000003ACD84 "\t"
 *   insn=0x00000000003ACD84 string=0x00000000003ACD88 "?"
 *   insn=0x00000000003ACD88 string=0x00000000003ACD8C "A"
 *   insn=0x00000000003ACD94 string=0x00000000003ACD98 "\t@"
 *   insn=0x00000000003ACD98 string=0x00000000003ACD9C ")"
 *   insn=0x00000000003ACD9C string=0x00000000003ACDA0 "\t"
 *   insn=0x00000000003ACDA4 string=0x00000000003ACDA8 "_"
 *   insn=0x00000000003ACDB0 string=0x00000000003ACDB4 "\t@"
 *   insn=0x00000000003ACDB0 string=0x00000000003ACDC0 "hb"
 *   insn=0x00000000003ACDB4 string=0x00000000003ACDB8 ")"
 *   insn=0x00000000003ACDB8 string=0x00000000003ACDBC "\t"
 *   insn=0x00000000003ACDC8 string=0x00000000003ACDCC ""
 *   insn=0x00000000003ACDD0 string=0x00000000003ACDD4 "!"
 *   insn=0x00000000003ACDD8 string=0x00000000003ACDDC "\t@"
 *   insn=0x00000000003ACDE8 string=0x00000000003ACDEC ""
 *   insn=0x00000000003ACE00 string=0x00000000003ACE10 "@"
 *   insn=0x00000000003ACE08 string=0x00000000003ACE0C "8"
 *   insn=0x00000000003ACE10 string=0x00000000003ACE14 ""
 *   insn=0x00000000003ACE14 string=0x00000000003ACE18 ""
 *   insn=0x00000000003ACE1C string=0x00000000003ACE20 ""
 *   insn=0x00000000003ACE20 string=0x00000000003ACE24 "\t@"
 *   insn=0x00000000003ACE2C string=0x00000000003ACE30 "@"
 *   insn=0x00000000003ACE30 string=0x00000000003ACE34 ""
 *   insn=0x00000000003ACE34 string=0x00000000003ACE38 ""
 *   insn=0x00000000003ACE3C string=0x00000000003ACE40 ""
 *   insn=0x00000000003ACE40 string=0x00000000003ACE44 "@"
 *   insn=0x00000000003ACE5C string=0x00000000003ACE60 "?"
 *   insn=0x00000000003ACE64 string=0x00000000003ACE68 ""
 *   insn=0x00000000003ACE6C string=0x00000000003ACE70 "@"
 *   insn=0x00000000003ACEA8 string=0x00000000003ACEAC "@"
 *   insn=0x00000000003ACEAC string=0x00000000003ACEB0 ""
 *   insn=0x00000000003ACEB0 string=0x00000000003ACEB4 ""
 *   insn=0x00000000003ACEB8 string=0x00000000003ACEBC ""
 *   insn=0x00000000003ACEBC string=0x00000000003ACEC0 "\t@"
 *   insn=0x00000000003ACEC8 string=0x00000000003ACECC "@"
 *   insn=0x00000000003ACECC string=0x00000000003ACED0 ""
 *   insn=0x00000000003ACED0 string=0x00000000003ACED4 ""
 *   insn=0x00000000003ACED8 string=0x00000000003ACEDC ""
 *   insn=0x00000000003ACEDC string=0x00000000003ACEE0 "@"
 *   insn=0x00000000003ACEFC string=0x00000000003ACF00 "6"
 *   insn=0x00000000003ACF04 string=0x00000000003ACF08 ""
 *   insn=0x00000000003ACF14 string=0x00000000003ACF18 "\t@"
 *   insn=0x00000000003ACF24 string=0x00000000003ACF28 ""
 *   insn=0x00000000003ACF34 string=0x00000000003ACF38 "@"
 *   insn=0x00000000003ACF44 string=0x00000000003ACF48 "_R"
 *   insn=0x00000000003ACF60 string=0x00000000003ACF64 "U"
 *   insn=0x00000000003ACF6C string=0x00000000003ACF70 "! "
 *   insn=0x00000000003ACF78 string=0x00000000003ACF7C "k"
 *   insn=0x00000000003ACF7C string=0x00000000003ACF80 "`B"
 *   insn=0x00000000003ACF88 string=0x00000000001FDA10 "0'"
 *   insn=0x00000000003ACF94 string=0x00000000003ACF98 ")"
 *   insn=0x00000000003ACFA4 string=0x00000000003ACFA8 "ab"
 *   insn=0x00000000003ACFA8 string=0x00000000003ACFAC "?"
 *   insn=0x00000000003ACFB4 string=0x00000000003ACFB8 ""
 *   insn=0x00000000003ACFD4 string=0x00000000003ACFD8 "2B"
 *   insn=0x00000000003ACFD8 string=0x00000000001FD8A0 "0'"
 *   insn=0x00000000003ACFE0 string=0x00000000003ACFE4 "h"
 *   insn=0x00000000003ACFE0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003ACFE4 string=0x00000000003ACFE8 ""
 *   insn=0x00000000003ACFE8 string=0x00000000003ACFEC "h"
 *   insn=0x00000000003AD014 string=0x00000000003AD018 ")=G"
 *   insn=0x00000000003AD018 string=0x00000000003AD01C "!"
 *   insn=0x00000000003AD020 string=0x00000000003AD024 "\t"
 *   insn=0x00000000003AD020 string=0x00000000003AD038 "\t"
 *   insn=0x00000000003AD024 string=0x00000000003AD028 "*"
 *   insn=0x00000000003AD028 string=0x00000000003AD02C "\n"
 *   insn=0x00000000003AD034 string=0x00000000003AD044 "?"
 *   insn=0x00000000003AD038 string=0x00000000003AD03C "*"
 *   insn=0x00000000003AD03C string=0x00000000003AD040 "\n"
 *   insn=0x00000000003AD058 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AD060 string=0x00000000003AD064 "J"
 *   insn=0x00000000003AD068 string=0x00000000003AD06C "(a"
 *   insn=0x00000000003AD078 string=0x00000000003AD07C "J=G"
 *   insn=0x00000000003AD07C string=0x00000000003AD080 ")!"
 *   insn=0x00000000003AD084 string=0x00000000003AD088 "*"
 *   insn=0x00000000003AD084 string=0x00000000003AD0B4 "*"
 *   insn=0x00000000003AD088 string=0x00000000003AD08C "K"
 *   insn=0x00000000003AD08C string=0x00000000003AD090 "+"
 *   insn=0x00000000003AD094 string=0x00000000003AD098 "_"
 *   insn=0x00000000003AD0B4 string=0x00000000003AD0B8 "K"
 *   insn=0x00000000003AD0B8 string=0x00000000003AD0BC "+"
 *   insn=0x00000000003AD0BC string=0x00000000003AD0C0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::CharacterState::HighestLevelItemOfType@<X0>(
        __int64 result@<X0>,
        int a2@<W1>,
        _QWORD *a3@<X8>)
{
  __int64 v4; // x21
  __int64 v5; // x25
  _QWORD *v7; // x23
  int v8; // w27
  _DWORD *v9; // x8
  _QWORD *v10; // x24
  int v11; // w26
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8

  *a3 = 0;
  a3[1] = 0;
  v4 = *(_QWORD *)(result + 40);
  v5 = result + 24;
  if ( result + 24 != v4 )
  {
    v7 = 0;
    v8 = -1;
    while ( 1 )
    {
      v9 = *(_DWORD **)(v4 + 40);
      if ( *v9 == a2 )
        break;
LABEL_20:
      result = sub_54C6A0(v4);
      v4 = result;
      if ( v5 == result )
        return result;
    }
    v10 = *(_QWORD **)(v4 + 48);
    if ( v10 )
      ++v10[1];
    v11 = v9[11];
    if ( v11 <= v8 )
    {
      v11 = v8;
    }
    else
    {
      if ( v10 )
        ++v10[1];
      *a3 = v9;
      a3[1] = v10;
      if ( !v7
        || (v12 = v7[1] - 1LL, (v7[1] = v12) != 0)
        || ((*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7), v13 = v7[2] - 1LL, (v7[2] = v13) != 0) )
      {
        v7 = v10;
        if ( !v10 )
          goto LABEL_19;
        goto LABEL_16;
      }
      (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      v7 = v10;
    }
    if ( !v10 )
    {
LABEL_19:
      v8 = v11;
      goto LABEL_20;
    }
LABEL_16:
    v14 = v10[1] - 1LL;
    v10[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v15 = v10[2] - 1LL;
      v10[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
    goto LABEL_19;
  }
  return result;
}

