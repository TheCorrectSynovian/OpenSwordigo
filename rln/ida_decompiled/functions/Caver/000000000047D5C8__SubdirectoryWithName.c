/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D5C8
 * Mangled: _ZN5Caver20SubdirectoryWithNameERKSsS1_b
 * Demangled: Caver::SubdirectoryWithName(std::string const&,std::string const&,bool)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB380  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x00000000001FBDF0  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 42
 *   insn=0x000000000047D5D8 string=0x000000000047D5DC "U"
 *   insn=0x000000000047D5F4 string=0x000000000047D5F8 "t"
 *   insn=0x000000000047D5F4 string=0x00000000001FBDF0 "0'"
 *   insn=0x000000000047D600 string=0x00000000001FDDD0 "0'"
 *   insn=0x000000000047D60C string=0x000000000047D610 "\"
 *   insn=0x000000000047D610 string=0x00000000001FB380 "0'"
 *   insn=0x000000000047D61C string=0x000000000047D620 ""
 *   insn=0x000000000047D64C string=0x000000000047D650 "Z"
 *   insn=0x000000000047D654 string=0x000000000047D658 "I"
 *   insn=0x000000000047D658 string=0x000000000047D65C ")"
 *   insn=0x000000000047D664 string=0x000000000047D668 "A"
 *   insn=0x000000000047D668 string=0x000000000047D690 ")"
 *   insn=0x000000000047D690 string=0x000000000047D694 ")=G"
 *   insn=0x000000000047D694 string=0x000000000047D698 "!"
 *   insn=0x000000000047D69C string=0x000000000047D6A0 "\t"
 *   insn=0x000000000047D69C string=0x000000000047D6B4 "\t"
 *   insn=0x000000000047D6A0 string=0x000000000047D6A4 "*"
 *   insn=0x000000000047D6A4 string=0x000000000047D6A8 "\n"
 *   insn=0x000000000047D6B0 string=0x000000000047D6C0 "?"
 *   insn=0x000000000047D6B4 string=0x000000000047D6B8 "*"
 *   insn=0x000000000047D6B8 string=0x000000000047D6BC "\n"
 *   insn=0x000000000047D6C0 string=0x000000000047D6C4 "L"
 *   insn=0x000000000047D6C8 string=0x000000000047D6CC "6"
 *   insn=0x000000000047D6D4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047D6DC string=0x000000000047D6E0 "I"
 *   insn=0x000000000047D6E0 string=0x000000000047D6E4 ")"
 *   insn=0x000000000047D6F4 string=0x000000000047D6F8 ")"
 *   insn=0x000000000047D6F8 string=0x000000000047D6FC ")=G"
 *   insn=0x000000000047D6FC string=0x000000000047D700 "!"
 *   insn=0x000000000047D700 string=0x000000000047D704 "i"
 *   insn=0x000000000047D704 string=0x000000000047D708 "\t"
 *   insn=0x000000000047D704 string=0x000000000047D730 "\t"
 *   insn=0x000000000047D708 string=0x000000000047D70C "*"
 *   insn=0x000000000047D70C string=0x000000000047D710 "\n"
 *   insn=0x000000000047D714 string=0x000000000047D718 "?"
 *   insn=0x000000000047D718 string=0x000000000047D71C "l"
 *   insn=0x000000000047D720 string=0x000000000047D724 " "
 *   insn=0x000000000047D728 string=0x000000000047D72C "f"
 *   insn=0x000000000047D730 string=0x000000000047D734 "*"
 *   insn=0x000000000047D734 string=0x000000000047D738 "\n"
 *   insn=0x000000000047D738 string=0x000000000047D73C "?"
 *   insn=0x000000000047D73C string=0x000000000047D740 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::SubdirectoryWithName(char a1@<W2>, __int64 a2@<X8>)
{
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD v7[3]; // [xsp+8h] [xbp-38h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::StringByAppendingPathComponent();
  if ( (a1 & 1) != 0 )
  {
    if ( (Caver::FileExistsAtPath() & 1) == 0 )
      Caver::CreateDirectoryAtPath();
    goto LABEL_6;
  }
  if ( (Caver::FileExistsAtPath() & 1) != 0 )
  {
LABEL_6:
    sub_56A528(a2, v7);
    goto LABEL_8;
  }
  sub_566BB8(a2, "");
LABEL_8:
  v4 = (void *)(v7[0] - 24LL);
  if ( (__int64 *)(v7[0] - 24LL) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v7[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete(v4);
  }
}

