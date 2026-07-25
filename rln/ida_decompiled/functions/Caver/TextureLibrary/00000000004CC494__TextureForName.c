/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC494
 * Mangled: _ZN5Caver14TextureLibrary14TextureForNameERKSsb
 * Demangled: Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *
 * Callers: 1
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *
 * Callees: 20
 *   0x00000000001F3860  Caver::Texture::Load(void)
 *   0x00000000001F3990  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>> const&)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7170  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7470  Caver::Texture::Texture(void)
 *   0x00000000001FD440  std::map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::operator[](std::string const&)
 *   0x00000000001FD880  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::find(std::string const&)
 *   0x00000000001FDCC0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::string const&)
 *   0x0000000000201EB0  Caver::Texture::InitWithResource(std::string const&,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 176
 *   insn=0x00000000004CC4A8 string=0x00000000004CC4AC "X"
 *   insn=0x00000000004CC4B0 string=0x00000000004CC4B4 ""
 *   insn=0x00000000004CC4D4 string=0x00000000001FD880 "0'"
 *   insn=0x00000000004CC4EC string=0x00000000004CC4F0 ""
 *   insn=0x00000000004CC4EC string=0x00000000001FD440 "0'"
 *   insn=0x00000000004CC4F4 string=0x00000000004CC4F8 "\t\t@"
 *   insn=0x00000000004CC4F4 string=0x00000000004CC504 "h"
 *   insn=0x00000000004CC4F8 string=0x00000000004CC4FC ")"
 *   insn=0x00000000004CC4FC string=0x00000000004CC500 "\t\t"
 *   insn=0x00000000004CC508 string=0x00000000004CC50C "3"
 *   insn=0x00000000004CC508 string=0x00000000004CC5C4 "`"
 *   insn=0x00000000004CC50C string=0x00000000004CC5D8 ""
 *   insn=0x00000000004CC510 string=0x00000000004CC514 "3"
 *   insn=0x00000000004CC514 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004CC520 string=0x00000000001F7470 "0'"
 *   insn=0x00000000004CC528 string=0x00000000004CC52C "w"
 *   insn=0x00000000004CC52C string=0x00000000004CC530 ""
 *   insn=0x00000000004CC538 string=0x00000000004CC53C "[x"
 *   insn=0x00000000004CC550 string=0x00000000004CC554 "A"
 *   insn=0x00000000004CC554 string=0x0000000000597CF3 "_2x"
 *   insn=0x00000000004CC570 string=0x00000000004CC574 "O"
 *   insn=0x00000000004CC580 string=0x00000000004CC584 ")"
 *   insn=0x00000000004CC594 string=0x00000000004CC598 "w"
 *   insn=0x00000000004CC5A4 string=0x00000000004CC5A8 "B"
 *   insn=0x00000000004CC5BC string=0x00000000001F7170 "0'"
 *   insn=0x00000000004CC5C8 string=0x00000000004CC5CC "8@"
 *   insn=0x00000000004CC5CC string=0x00000000004CC5D0 "H"
 *   insn=0x00000000004CC5D4 string=0x00000000001F3860 "P'"
 *   insn=0x00000000004CC608 string=0x00000000004CC60C ""
 *   insn=0x00000000004CC610 string=0x00000000004CC614 "a"
 *   insn=0x00000000004CC618 string=0x00000000004CC61C ""
 *   insn=0x00000000004CC62C string=0x00000000004CC630 ")=G"
 *   insn=0x00000000004CC630 string=0x00000000004CC634 "!"
 *   insn=0x00000000004CC638 string=0x00000000004CC63C "\t"
 *   insn=0x00000000004CC638 string=0x00000000004CC650 "\t"
 *   insn=0x00000000004CC63C string=0x00000000004CC640 "*"
 *   insn=0x00000000004CC640 string=0x00000000004CC644 "\n"
 *   insn=0x00000000004CC64C string=0x00000000004CC65C "?"
 *   insn=0x00000000004CC650 string=0x00000000004CC654 "*"
 *   insn=0x00000000004CC654 string=0x00000000004CC658 "\n"
 *   insn=0x00000000004CC664 string=0x00000000004CC668 "Ow"
 *   insn=0x00000000004CC668 string=0x00000000004CC66C "w"
 *   insn=0x00000000004CC674 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004CC67C string=0x00000000004CC680 "J"
 *   insn=0x00000000004CC684 string=0x00000000004CC688 "(a"
 *   insn=0x00000000004CC690 string=0x00000000004CC750 "`"
 *   insn=0x00000000004CC694 string=0x00000000004CC698 "J=G"
 *   insn=0x00000000004CC698 string=0x00000000004CC69C ")!"
 *   insn=0x00000000004CC6A0 string=0x00000000004CC6A4 "*"
 *   insn=0x00000000004CC6A0 string=0x00000000004CC714 "*"
 *   insn=0x00000000004CC6A4 string=0x00000000004CC6A8 "K"
 *   insn=0x00000000004CC6A8 string=0x00000000004CC6AC "+"
 *   insn=0x00000000004CC6B4 string=0x00000000004CC6F4 "_"
 *   insn=0x00000000004CC6BC string=0x00000000004CC6C0 "J"
 *   insn=0x00000000004CC6C4 string=0x00000000004CC6C8 "(a"
 *   insn=0x00000000004CC6D4 string=0x00000000004CC6D8 "J=G"
 *   insn=0x00000000004CC6D8 string=0x00000000004CC6DC ")!"
 *   insn=0x00000000004CC6E0 string=0x00000000004CC6E4 "*"
 *   insn=0x00000000004CC6E4 string=0x00000000004CC6E8 "K"
 *   insn=0x00000000004CC6E8 string=0x00000000004CC6EC "+"
 *   insn=0x00000000004CC700 string=0x00000000004CC704 "(w"
 *   insn=0x00000000004CC704 string=0x00000000004CC708 "`"
 *   insn=0x00000000004CC708 string=0x00000000004CC70C "`"
 *   insn=0x00000000004CC70C string=0x00000000004CC758 "@"
 *   insn=0x00000000004CC714 string=0x00000000004CC718 "K"
 *   insn=0x00000000004CC718 string=0x00000000004CC71C "+"
 *   insn=0x00000000004CC71C string=0x00000000004CC720 "_"
 *   insn=0x00000000004CC724 string=0x00000000004CC728 "\n"
 *   insn=0x00000000004CC738 string=0x00000000004CC73C "`"
 *   insn=0x00000000004CC738 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004CC758 string=0x00000000004CC75C ""
 *   insn=0x00000000004CC75C string=0x00000000004CC760 ""
 *   insn=0x00000000004CC764 string=0x00000000004CC768 ""
 *   insn=0x00000000004CC768 string=0x00000000004CC76C ""
 *   insn=0x00000000004CC774 string=0x00000000004CC778 "S"
 *   insn=0x00000000004CC79C string=0x00000000004CC7A0 "I"
 *   insn=0x00000000004CC7A0 string=0x00000000004CC7A4 "("
 *   insn=0x00000000004CC7B8 string=0x00000000004CC7BC "7"
 *   insn=0x00000000004CC7DC string=0x00000000004CC7E0 ""
 *   insn=0x00000000004CC7E4 string=0x00000000004CC7E8 """
 *   insn=0x00000000004CC7E8 string=0x00000000004CC7EC "i"
 *   insn=0x00000000004CC7EC string=0x00000000001F5190 "P'"
 *   insn=0x00000000004CC7F0 string=0x00000000004CC7F4 "@"
 *   insn=0x00000000004CC800 string=0x00000000004CC804 ""
 *   insn=0x00000000004CC840 string=0x00000000004CC844 "@"
 *   insn=0x00000000004CC848 string=0x00000000004CC84C "a"
 *   insn=0x00000000004CC84C string=0x00000000004CC850 ""
 *   insn=0x00000000004CC850 string=0x00000000004CC854 ")"
 *   insn=0x00000000004CC858 string=0x00000000004CC85C """
 *   insn=0x00000000004CC85C string=0x00000000004CC860 "L"
 *   insn=0x00000000004CC860 string=0x00000000004CC864 "@\t"
 *   insn=0x00000000004CC864 string=0x00000000004CC868 "`"
 *   insn=0x00000000004CC870 string=0x00000000004CC874 "-w"
 *   insn=0x00000000004CC888 string=0x00000000001FDCC0 "0'"
 *   insn=0x00000000004CC890 string=0x00000000004CC894 "6"
 *   insn=0x00000000004CC898 string=0x00000000004CC89C "s"
 *   insn=0x00000000004CC8A0 string=0x00000000004CC8A4 " "
 *   insn=0x00000000004CC8AC string=0x00000000004CC8B0 ""
 *   insn=0x00000000004CC8B0 string=0x00000000004CC8B4 ")"
 *   insn=0x00000000004CC8B8 string=0x00000000004CC8BC """
 *   insn=0x00000000004CC8BC string=0x00000000004CC8C0 "4"
 *   insn=0x00000000004CC8DC string=0x00000000004CC8E0 "`"
 *   insn=0x00000000004CC8EC string=0x00000000004CC8F0 "("
 *   insn=0x00000000004CC8F0 string=0x00000000001F3990 "P'"
 *   insn=0x00000000004CC90C string=0x00000000004CC910 ""
 *   insn=0x00000000004CC91C string=0x00000000004CC920 "@"
 *   insn=0x00000000004CC920 string=0x00000000004CC924 ""
 *   insn=0x00000000004CC924 string=0x00000000004CC928 ""
 *   insn=0x00000000004CC92C string=0x00000000004CC930 ""
 *   insn=0x00000000004CC930 string=0x00000000004CC934 ""
 *   insn=0x00000000004CC940 string=0x00000000004CC944 ")"
 *   insn=0x00000000004CC954 string=0x00000000004CC958 ""
 *   insn=0x00000000004CC964 string=0x00000000004CC968 "`"
 *   insn=0x00000000004CC964 string=0x00000000004CC9F4 "7"
 *   insn=0x00000000004CC9A4 string=0x00000000004CC9A8 "`"
 *   insn=0x00000000004CC9B0 string=0x00000000004CC9B4 ")=G"
 *   insn=0x00000000004CC9B4 string=0x00000000004CC9B8 "!"
 *   insn=0x00000000004CC9BC string=0x00000000004CC9C0 "\t"
 *   insn=0x00000000004CC9BC string=0x00000000004CC9D4 "\t"
 *   insn=0x00000000004CC9C0 string=0x00000000004CC9C4 "*"
 *   insn=0x00000000004CC9C4 string=0x00000000004CC9C8 "\n"
 *   insn=0x00000000004CC9D0 string=0x00000000004CC9E0 "?"
 *   insn=0x00000000004CC9D4 string=0x00000000004CC9D8 "*"
 *   insn=0x00000000004CC9D8 string=0x00000000004CC9DC "\n"
 *   insn=0x00000000004CC9E8 string=0x00000000004CC9EC "nv"
 *   insn=0x00000000004CC9FC string=0x00000000004CCA00 "J"
 *   insn=0x00000000004CCA04 string=0x00000000004CCA08 "(a"
 *   insn=0x00000000004CCA14 string=0x00000000004CCA18 "J=G"
 *   insn=0x00000000004CCA18 string=0x00000000004CCA1C ")!"
 *   insn=0x00000000004CCA20 string=0x00000000004CCA24 "*"
 *   insn=0x00000000004CCA20 string=0x00000000004CCA50 "*"
 *   insn=0x00000000004CCA24 string=0x00000000004CCA28 "K"
 *   insn=0x00000000004CCA28 string=0x00000000004CCA2C "+"
 *   insn=0x00000000004CCA30 string=0x00000000004CCA34 "_"
 *   insn=0x00000000004CCA34 string=0x00000000004CCA38 "l"
 *   insn=0x00000000004CCA40 string=0x00000000004CCA44 "Xv"
 *   insn=0x00000000004CCA50 string=0x00000000004CCA54 "K"
 *   insn=0x00000000004CCA54 string=0x00000000004CCA58 "+"
 *   insn=0x00000000004CCA58 string=0x00000000004CCA5C "_"
 *   insn=0x00000000004CCA60 string=0x00000000004CCA64 "("
 *   insn=0x00000000004CCA78 string=0x00000000004CCA7C "("
 *   insn=0x00000000004CCA7C string=0x00000000004CCA80 "\t\t@"
 *   insn=0x00000000004CCA80 string=0x00000000004CCA84 ")"
 *   insn=0x00000000004CCA84 string=0x00000000004CCA88 "\t\t"
 *   insn=0x00000000004CCA8C string=0x00000000004CCA90 "\t"
 *   insn=0x00000000004CCA90 string=0x00000000004CCA94 ")"
 *   insn=0x00000000004CCA98 string=0x00000000004CCA9C " "
 *   insn=0x00000000004CCAA4 string=0x00000000004CCAA8 ")"
 *   insn=0x00000000004CCAB8 string=0x00000000004CCABC ")=G"
 *   insn=0x00000000004CCABC string=0x00000000004CCAC0 "!"
 *   insn=0x00000000004CCAC0 string=0x00000000004CCAC4 "i"
 *   insn=0x00000000004CCAC4 string=0x00000000004CCAC8 "\t"
 *   insn=0x00000000004CCAC4 string=0x00000000004CCAF0 "\t"
 *   insn=0x00000000004CCAC8 string=0x00000000004CCACC "*"
 *   insn=0x00000000004CCACC string=0x00000000004CCAD0 "\n"
 *   insn=0x00000000004CCAD4 string=0x00000000004CCAD8 "?"
 *   insn=0x00000000004CCAD8 string=0x00000000004CCADC "L"
 *   insn=0x00000000004CCAE0 string=0x00000000004CCAE4 "0v"
 *   insn=0x00000000004CCAE8 string=0x00000000004CCAEC "v"
 *   insn=0x00000000004CCAF0 string=0x00000000004CCAF4 "*"
 *   insn=0x00000000004CCAF4 string=0x00000000004CCAF8 "\n"
 *   insn=0x00000000004CCAF8 string=0x00000000004CCAFC "?"
 *   insn=0x00000000004CCAFC string=0x00000000004CCB00 ""
 *   insn=0x00000000004CCB04 string=0x00000000004CCB08 "o"
 *   insn=0x00000000004CCB10 string=0x00000000004CCB14 "J"
 *   insn=0x00000000004CCB18 string=0x00000000004CCB1C "(a"
 *   insn=0x00000000004CCB28 string=0x00000000004CCB2C "J=G"
 *   insn=0x00000000004CCB2C string=0x00000000004CCB30 ")!"
 *   insn=0x00000000004CCB34 string=0x00000000004CCB38 "*"
 *   insn=0x00000000004CCB34 string=0x00000000004CCB64 "*"
 *   insn=0x00000000004CCB38 string=0x00000000004CCB3C "K"
 *   insn=0x00000000004CCB3C string=0x00000000004CCB40 "+"
 *   insn=0x00000000004CCB44 string=0x00000000004CCB48 "_"
 *   insn=0x00000000004CCB64 string=0x00000000004CCB68 "K"
 *   insn=0x00000000004CCB68 string=0x00000000004CCB6C "+"
 *   insn=0x00000000004CCB6C string=0x00000000004CCB70 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::TextureLibrary::TextureForName(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        char a3@<W2>,
        Caver::Texture **a4@<X8>)
{
  Caver::Texture **v8; // x0
  Caver::Texture *v9; // x8
  Caver::Texture *v10; // x23
  int v11; // w8
  char v12; // w0
  char v13; // w23
  void *v14; // x0
  char v15; // w0
  Caver::Texture *v16; // x0
  int v17; // w8
  unsigned int *v18; // x8
  int v19; // w9
  _QWORD v20[3]; // [xsp+98h] [xbp-48h] BYREF

  v20[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *a4 = 0;
  if ( a1 + 16 == std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::find() )
  {
    v10 = (Caver::Texture *)operator new(0xA8u);
    Caver::Texture::Texture(v10);
    v11 = *((_DWORD *)v10 + 2);
    *a4 = v10;
    *((_DWORD *)v10 + 2) = v11 + 1;
    sub_56A6A8((char *)v10 + 48);
    if ( *(_BYTE *)(a1 + 57) )
    {
      sub_56A528(v20, a2);
      sub_5677D4(v20, "_2x", 3);
      Caver::Texture::InitWithResource();
      v13 = v12;
      v14 = (void *)(v20[0] - 24LL);
      if ( (__int64 *)(v20[0] - 24LL) == &qword_6FD2E0 )
        goto LABEL_8;
      v18 = (unsigned int *)(v20[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v19 = __ldaxr(v18);
        while ( __stlxr(v19 - 1, v18) );
      }
      else
      {
        v19 = (*v18)--;
      }
      if ( v19 > 0 )
      {
LABEL_8:
        if ( (v13 & 1) != 0 )
          goto LABEL_11;
      }
      else
      {
        operator delete(v14);
        if ( (v13 & 1) != 0 )
          goto LABEL_11;
      }
      v10 = *a4;
    }
    Caver::Texture::InitWithResource();
    if ( (v15 & 1) == 0 )
    {
      *a4 = 0;
      if ( v10 )
      {
        v17 = *((_DWORD *)v10 + 2) - 1;
        *((_DWORD *)v10 + 2) = v17;
        if ( !v17 )
          (*(void (__fastcall **)(Caver::Texture *))(*(_QWORD *)v10 + 8LL))(v10);
      }
LABEL_12:
      if ( (a3 & 1) == 0 )
        return;
      goto LABEL_13;
    }
LABEL_11:
    Caver::TextureLibrary::SetTextureForName();
    goto LABEL_12;
  }
  std::map<std::string,boost::intrusive_ptr<Caver::Texture>>::operator[]();
  v9 = *v8;
  if ( *v8 )
    ++*((_DWORD *)v9 + 2);
  *a4 = v9;
  if ( (a3 & 1) != 0 )
  {
LABEL_13:
    v16 = *a4;
    if ( *a4 )
    {
      if ( !*((_DWORD *)v16 + 14) )
        Caver::Texture::Load(v16);
    }
  }
}

