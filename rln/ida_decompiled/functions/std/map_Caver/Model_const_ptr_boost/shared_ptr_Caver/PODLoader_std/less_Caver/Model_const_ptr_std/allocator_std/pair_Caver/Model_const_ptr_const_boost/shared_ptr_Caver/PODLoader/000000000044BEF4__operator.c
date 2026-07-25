/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044BEF4
 * Mangled: _ZNSt3mapIPKN5Caver5ModelEN5boost10shared_ptrINS0_9PODLoaderEEESt4lessIS3_ESaISt4pairIKS3_S7_EEEixERSB_
 * Demangled: std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *
 * Callers: 1
 *   0x00000000001F5EF0  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *
 * Callees: 17
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5F30  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE050  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *   0x00000000001FE8D0  std::map<std::string,boost::shared_ptr<Caver::KeyframeAnimation const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::operator[](std::string const&)
 *   0x00000000001FFBA0  std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,Caver::Model const* const&)
 *   0x0000000000202A20  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::find(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000567614  sub_567614
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 207
 *   insn=0x000000000044BF08 string=0x000000000044BF0C "X"
 *   insn=0x000000000044BF0C string=0x000000000044BF10 ""
 *   insn=0x000000000044BF20 string=0x000000000044BF24 "H"
 *   insn=0x000000000044BF24 string=0x000000000044BF28 ")"
 *   insn=0x000000000044BF2C string=0x000000000044BF30 "\n"
 *   insn=0x000000000044BF30 string=0x000000000044BF34 "a"
 *   insn=0x000000000044BF38 string=0x000000000044BF3C "_"
 *   insn=0x000000000044BF3C string=0x000000000044BF40 "j1"
 *   insn=0x000000000044BF40 string=0x000000000044BF44 "s2"
 *   insn=0x000000000044BF44 string=0x000000000044BF48 "H"
 *   insn=0x000000000044BF48 string=0x000000000044BF4C "("
 *   insn=0x000000000044BF50 string=0x000000000044BF54 " "
 *   insn=0x000000000044BF54 string=0x000000000044BF58 "("
 *   insn=0x000000000044BF54 string=0x000000000044BF78 "("
 *   insn=0x000000000044BF58 string=0x000000000044BF5C "i"
 *   insn=0x000000000044BF64 string=0x000000000044BF68 ";"
 *   insn=0x000000000044BF68 string=0x000000000044C054 ""
 *   insn=0x000000000044BF70 string=0x000000000044BF74 "!"
 *   insn=0x000000000044BFC4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044BFD0 string=0x000000000044BFD4 "`\n"
 *   insn=0x000000000044BFD4 string=0x000000000044BFD8 "h"
 *   insn=0x000000000044BFDC string=0x000000000044BFE0 "\t"
 *   insn=0x000000000044BFE0 string=0x000000000044BFE4 ")"
 *   insn=0x000000000044BFE4 string=0x000000000044BFE8 "\t"
 *   insn=0x000000000044BFF8 string=0x000000000044BFFC ")"
 *   insn=0x000000000044C000 string=0x000000000044C004 ""
 *   insn=0x000000000044C00C string=0x000000000044C010 "4"
 *   insn=0x000000000044C014 string=0x000000000044C018 ""
 *   insn=0x000000000044C024 string=0x000000000044C028 "\t@"
 *   insn=0x000000000044C034 string=0x000000000044C038 ""
 *   insn=0x000000000044C044 string=0x000000000044C048 "@"
 *   insn=0x000000000044C060 string=0x000000000044C064 "`"
 *   insn=0x000000000044C080 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044C08C string=0x000000000044C090 "4"
 *   insn=0x000000000044C094 string=0x000000000044C098 ""
 *   insn=0x000000000044C0A4 string=0x000000000044C0A8 "\t@"
 *   insn=0x000000000044C0B4 string=0x000000000044C0B8 ""
 *   insn=0x000000000044C0C4 string=0x000000000044C0C8 "@"
 *   insn=0x000000000044C0F8 string=0x000000000044C0FC "Y"
 *   insn=0x000000000044C100 string=0x000000000044C104 "("
 *   insn=0x000000000044C11C string=0x000000000044C120 "A\n"
 *   insn=0x000000000044C120 string=0x0000000000595253 "|"
 *   insn=0x000000000044C144 string=0x000000000044C148 "3m"
 *   insn=0x000000000044C15C string=0x000000000044C160 "a"
 *   insn=0x000000000044C16C string=0x000000000044C170 ","
 *   insn=0x000000000044C178 string=0x000000000044C17C "@"
 *   insn=0x000000000044C17C string=0x000000000044C180 ""
 *   insn=0x000000000044C180 string=0x000000000044C184 "h"
 *   insn=0x000000000044C184 string=0x000000000044C188 ""
 *   insn=0x000000000044C188 string=0x000000000044C18C "h"
 *   insn=0x000000000044C18C string=0x000000000044C190 ""
 *   insn=0x000000000044C190 string=0x000000000044C194 "\t"
 *   insn=0x000000000044C194 string=0x000000000044C198 ")"
 *   insn=0x000000000044C198 string=0x000000000044C19C "\t"
 *   insn=0x000000000044C19C string=0x000000000044C1A0 "\"
 *   insn=0x000000000044C1AC string=0x000000000044C1B0 "*"
 *   insn=0x000000000044C1B0 string=0x000000000044C1B4 "K"
 *   insn=0x000000000044C1B0 string=0x000000000044C1D4 "?"
 *   insn=0x000000000044C1B4 string=0x000000000044C1B8 "La"
 *   insn=0x000000000044C1B8 string=0x000000000044C1BC "MA"
 *   insn=0x000000000044C1C4 string=0x000000000044C1C8 ")1"
 *   insn=0x000000000044C1C8 string=0x000000000044C1CC "j"
 *   insn=0x000000000044C1CC string=0x000000000044C1D0 "*"
 *   insn=0x000000000044C1D8 string=0x000000000044C1DC "*"
 *   insn=0x000000000044C1DC string=0x000000000044C1E0 "_"
 *   insn=0x000000000044C1E0 string=0x000000000044C1E4 "\t"
 *   insn=0x000000000044C1E4 string=0x000000000044C1E8 "?"
 *   insn=0x000000000044C1EC string=0x000000000044C1F0 "6"
 *   insn=0x000000000044C1F0 string=0x000000000044C1F4 "A\n"
 *   insn=0x000000000044C1F4 string=0x000000000059524F "POD"
 *   insn=0x000000000044C200 string=0x000000000044C204 "mj"
 *   insn=0x000000000044C210 string=0x000000000044C214 "G"
 *   insn=0x000000000044C214 string=0x00000000001F5F30 "P'"
 *   insn=0x000000000044C268 string=0x000000000044C26C "\n"
 *   insn=0x000000000044C26C string=0x000000000044C270 "J"
 *   insn=0x000000000044C270 string=0x000000000044C274 "\n"
 *   insn=0x000000000044C278 string=0x000000000044C27C "\t "
 *   insn=0x000000000044C27C string=0x000000000044C280 "4"
 *   insn=0x000000000044C284 string=0x000000000044C288 ""
 *   insn=0x000000000044C294 string=0x000000000044C298 "\t@"
 *   insn=0x000000000044C2A4 string=0x000000000044C2A8 ""
 *   insn=0x000000000044C2B4 string=0x000000000044C2B8 "@"
 *   insn=0x000000000044C2C4 string=0x000000000044C2C8 "hR"
 *   insn=0x000000000044C2C8 string=0x000000000044C2CC "4"
 *   insn=0x000000000044C2D8 string=0x000000000044C2DC "\t@"
 *   insn=0x000000000044C2E8 string=0x000000000044C2EC ""
 *   insn=0x000000000044C2F8 string=0x000000000044C2FC "@"
 *   insn=0x000000000044C31C string=0x000000000044C320 "("
 *   insn=0x000000000044C34C string=0x000000000044C350 ")=G"
 *   insn=0x000000000044C350 string=0x000000000044C354 "!"
 *   insn=0x000000000044C358 string=0x000000000044C35C "\t"
 *   insn=0x000000000044C358 string=0x000000000044C394 "\t"
 *   insn=0x000000000044C35C string=0x000000000044C360 "*"
 *   insn=0x000000000044C360 string=0x000000000044C364 "\n"
 *   insn=0x000000000044C368 string=0x000000000044C36C ""
 *   insn=0x000000000044C36C string=0x000000000044C3A0 "?"
 *   insn=0x000000000044C370 string=0x000000000044C374 ")=G"
 *   insn=0x000000000044C374 string=0x000000000044C378 "!"
 *   insn=0x000000000044C37C string=0x000000000044C380 "\t"
 *   insn=0x000000000044C37C string=0x000000000044C3B4 "\t"
 *   insn=0x000000000044C380 string=0x000000000044C384 "*"
 *   insn=0x000000000044C384 string=0x000000000044C388 "\n"
 *   insn=0x000000000044C390 string=0x000000000044C3C0 "?"
 *   insn=0x000000000044C394 string=0x000000000044C398 "*"
 *   insn=0x000000000044C398 string=0x000000000044C39C "\n"
 *   insn=0x000000000044C3AC string=0x000000000044C3B0 "m"
 *   insn=0x000000000044C3B4 string=0x000000000044C3B8 "*"
 *   insn=0x000000000044C3B8 string=0x000000000044C3BC "\n"
 *   insn=0x000000000044C3D4 string=0x000000000044C3D8 ")=G"
 *   insn=0x000000000044C3D8 string=0x000000000044C3DC "!"
 *   insn=0x000000000044C3E0 string=0x000000000044C3E4 "\t"
 *   insn=0x000000000044C3E0 string=0x000000000044C41C "\t"
 *   insn=0x000000000044C3E4 string=0x000000000044C3E8 "*"
 *   insn=0x000000000044C3E8 string=0x000000000044C3EC "\n"
 *   insn=0x000000000044C3F0 string=0x000000000044C3F4 ""
 *   insn=0x000000000044C3F4 string=0x000000000044C428 "?"
 *   insn=0x000000000044C3F8 string=0x000000000044C3FC ")=G"
 *   insn=0x000000000044C3FC string=0x000000000044C400 "!"
 *   insn=0x000000000044C404 string=0x000000000044C408 "\t"
 *   insn=0x000000000044C404 string=0x000000000044C43C "\t"
 *   insn=0x000000000044C408 string=0x000000000044C40C "*"
 *   insn=0x000000000044C40C string=0x000000000044C410 "\n"
 *   insn=0x000000000044C418 string=0x000000000044C448 "?"
 *   insn=0x000000000044C41C string=0x000000000044C420 "*"
 *   insn=0x000000000044C420 string=0x000000000044C424 "\n"
 *   insn=0x000000000044C428 string=0x000000000044C42C "l"
 *   insn=0x000000000044C43C string=0x000000000044C440 "*"
 *   insn=0x000000000044C440 string=0x000000000044C444 "\n"
 *   insn=0x000000000044C470 string=0x000000000044C474 "(a"
 *   insn=0x000000000044C480 string=0x000000000044C484 "J=G"
 *   insn=0x000000000044C484 string=0x000000000044C488 ")!"
 *   insn=0x000000000044C48C string=0x000000000044C490 "*"
 *   insn=0x000000000044C48C string=0x000000000044C4A4 "*"
 *   insn=0x000000000044C490 string=0x000000000044C494 "K"
 *   insn=0x000000000044C494 string=0x000000000044C498 "+"
 *   insn=0x000000000044C4A0 string=0x000000000044C4B0 "_"
 *   insn=0x000000000044C4A4 string=0x000000000044C4A8 "K"
 *   insn=0x000000000044C4A8 string=0x000000000044C4AC "+"
 *   insn=0x000000000044C4D4 string=0x000000000044C4D8 " "
 *   insn=0x000000000044C4DC string=0x000000000044C4E0 ")=G"
 *   insn=0x000000000044C4E0 string=0x000000000044C4E4 "!"
 *   insn=0x000000000044C4E8 string=0x000000000044C4EC "\t"
 *   insn=0x000000000044C4E8 string=0x000000000044C500 "\t"
 *   insn=0x000000000044C4EC string=0x000000000044C4F0 "*"
 *   insn=0x000000000044C4F0 string=0x000000000044C4F4 "\n"
 *   insn=0x000000000044C4FC string=0x000000000044C50C "?"
 *   insn=0x000000000044C500 string=0x000000000044C504 "*"
 *   insn=0x000000000044C504 string=0x000000000044C508 "\n"
 *   insn=0x000000000044C50C string=0x000000000044C510 "l"
 *   insn=0x000000000044C530 string=0x000000000044C534 ""
 *   insn=0x000000000044C540 string=0x000000000044C544 "\t@"
 *   insn=0x000000000044C550 string=0x000000000044C554 ""
 *   insn=0x000000000044C560 string=0x000000000044C564 "@"
 *   insn=0x000000000044C584 string=0x000000000044C588 " "
 *   insn=0x000000000044C58C string=0x000000000044C590 ")=G"
 *   insn=0x000000000044C590 string=0x000000000044C594 "!"
 *   insn=0x000000000044C594 string=0x000000000044C598 ")"
 *   insn=0x000000000044C598 string=0x000000000044C59C "\t"
 *   insn=0x000000000044C598 string=0x000000000044C5BC "\t"
 *   insn=0x000000000044C59C string=0x000000000044C5A0 "*"
 *   insn=0x000000000044C5A0 string=0x000000000044C5A4 "\n"
 *   insn=0x000000000044C5A8 string=0x000000000044C5AC "?"
 *   insn=0x000000000044C5B4 string=0x000000000044C5B8 "L"
 *   insn=0x000000000044C5B8 string=0x000000000044C6E8 "/w"
 *   insn=0x000000000044C5BC string=0x000000000044C5C0 "*"
 *   insn=0x000000000044C5C0 string=0x000000000044C5C4 "\n"
 *   insn=0x000000000044C5C4 string=0x000000000044C5C8 "?"
 *   insn=0x000000000044C5C8 string=0x000000000044C5CC "M"
 *   insn=0x000000000044C5CC string=0x000000000044C5D0 "G"
 *   insn=0x000000000044C5D8 string=0x000000000044C5DC "J"
 *   insn=0x000000000044C5E0 string=0x000000000044C5E4 "(a"
 *   insn=0x000000000044C5F0 string=0x000000000044C5F4 "J=G"
 *   insn=0x000000000044C5F4 string=0x000000000044C5F8 ")!"
 *   insn=0x000000000044C5FC string=0x000000000044C600 "*"
 *   insn=0x000000000044C5FC string=0x000000000044C614 "*"
 *   insn=0x000000000044C600 string=0x000000000044C604 "K"
 *   insn=0x000000000044C604 string=0x000000000044C608 "+"
 *   insn=0x000000000044C610 string=0x000000000044C620 "_"
 *   insn=0x000000000044C614 string=0x000000000044C618 "K"
 *   insn=0x000000000044C618 string=0x000000000044C61C "+"
 *   insn=0x000000000044C62C string=0x000000000044C630 "]w"
 *   insn=0x000000000044C640 string=0x000000000044C644 ")"
 *   insn=0x000000000044C654 string=0x000000000044C658 ")=G"
 *   insn=0x000000000044C658 string=0x000000000044C65C "!"
 *   insn=0x000000000044C65C string=0x000000000044C660 ")"
 *   insn=0x000000000044C660 string=0x000000000044C664 "\t"
 *   insn=0x000000000044C660 string=0x000000000044C684 "\t"
 *   insn=0x000000000044C664 string=0x000000000044C668 "*"
 *   insn=0x000000000044C668 string=0x000000000044C66C "\n"
 *   insn=0x000000000044C670 string=0x000000000044C674 "?"
 *   insn=0x000000000044C684 string=0x000000000044C688 "*"
 *   insn=0x000000000044C688 string=0x000000000044C68C "\n"
 *   insn=0x000000000044C68C string=0x000000000044C690 "?"
 *   insn=0x000000000044C690 string=0x000000000044C694 "M"
 *   insn=0x000000000044C6A0 string=0x000000000044C6A4 "J"
 *   insn=0x000000000044C6A8 string=0x000000000044C6AC "(a"
 *   insn=0x000000000044C6B8 string=0x000000000044C6BC "J=G"
 *   insn=0x000000000044C6BC string=0x000000000044C6C0 ")!"
 *   insn=0x000000000044C6C4 string=0x000000000044C6C8 "*"
 *   insn=0x000000000044C6C4 string=0x000000000044C6F4 "*"
 *   insn=0x000000000044C6C8 string=0x000000000044C6CC "K"
 *   insn=0x000000000044C6CC string=0x000000000044C6D0 "+"
 *   insn=0x000000000044C6D4 string=0x000000000044C6D8 "_"
 *   insn=0x000000000044C6EC string=0x000000000044C6F0 "u"
 *   insn=0x000000000044C6F4 string=0x000000000044C6F8 "K"
 *   insn=0x000000000044C6F8 string=0x000000000044C6FC "+"
 *   insn=0x000000000044C6FC string=0x000000000044C700 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>>::operator[](
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 v3; // x21
  _QWORD *v4; // x8
  unsigned __int64 v5; // x9
  __int64 v6; // x19
  unsigned __int64 v7; // x10
  bool v8; // cf
  _QWORD *v9; // x10
  unsigned __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  _BOOL4 v14; // w23
  __int128 v16; // [xsp+88h] [xbp-50h]

  v3 = a1 + 8;
  _ReadStatusReg(TPIDR_EL0);
  v4 = *(_QWORD **)(a1 + 16);
  if ( !v4 )
    goto LABEL_13;
  v5 = *a2;
  v6 = a1 + 8;
  do
  {
    v7 = v4[4];
    v8 = v7 >= v5;
    if ( v7 >= v5 )
      v9 = v4 + 2;
    else
      v9 = v4 + 3;
    if ( v8 )
      v6 = (__int64)v4;
    v4 = (_QWORD *)*v9;
  }
  while ( *v9 );
  if ( v6 == v3 )
  {
LABEL_13:
    v10 = *a2;
  }
  else
  {
    v10 = *a2;
    if ( *a2 >= *(_QWORD *)(v6 + 32) )
      return v6 + 40;
  }
  v16 = v10;
  std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_get_insert_hint_unique_pos();
  v6 = v11;
  v13 = v12;
  if ( v12 )
  {
    v14 = 1;
    if ( !v11 && v3 != v12 )
      v14 = (unsigned __int64)v16 < *(_QWORD *)(v12 + 32);
    v6 = operator new(0x38u);
    *(_OWORD *)(v6 + 32) = v16;
    *(_QWORD *)(v6 + 48) = 0;
    sub_54C8A0(v14, v6, v13, v3);
    ++*(_QWORD *)(a1 + 40);
  }
  return v6 + 40;
}

