/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000433850
 * Mangled: _ZNSt4pairIKSsSt6vectorIN5Caver10QuestsView10LabelGroupESaIS4_EEED2Ev
 * Demangled: std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>::~pair()
 *
 * Callers: 1
 *   0x00000000001FA9F0  std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>::~pair()
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FADD0  Caver::QuestsView::LabelGroup::~LabelGroup()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 39
 *   insn=0x0000000000433860 string=0x0000000000433864 "U"
 *   insn=0x0000000000433870 string=0x0000000000433874 "t"
 *   insn=0x000000000043387C string=0x0000000000433898 "t"
 *   insn=0x0000000000433880 string=0x0000000000433884 "S"
 *   insn=0x0000000000433884 string=0x00000000001FADD0 "0'"
 *   insn=0x0000000000433890 string=0x0000000000433894 "t"
 *   insn=0x0000000000433898 string=0x00000000004338A4 "h"
 *   insn=0x00000000004338A0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004338A8 string=0x00000000004338AC ")"
 *   insn=0x00000000004338B4 string=0x00000000004338B8 "A"
 *   insn=0x00000000004338C8 string=0x0000000000433924 "k\n"
 *   insn=0x00000000004338E0 string=0x00000000004338E4 ")=G"
 *   insn=0x00000000004338E4 string=0x00000000004338E8 "!"
 *   insn=0x00000000004338EC string=0x00000000004338F0 "\t"
 *   insn=0x00000000004338EC string=0x0000000000433904 "\t"
 *   insn=0x00000000004338F0 string=0x00000000004338F4 "*"
 *   insn=0x00000000004338F4 string=0x00000000004338F8 "\n"
 *   insn=0x0000000000433900 string=0x0000000000433910 "?"
 *   insn=0x0000000000433904 string=0x0000000000433908 "*"
 *   insn=0x0000000000433908 string=0x000000000043390C "\n"
 *   insn=0x0000000000433910 string=0x0000000000433914 "L"
 *   insn=0x0000000000433924 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000043392C string=0x0000000000433930 "h"
 *   insn=0x0000000000433930 string=0x000000000043393C "h"
 *   insn=0x0000000000433934 string=0x0000000000433938 "^"
 *   insn=0x0000000000433940 string=0x0000000000433944 ")"
 *   insn=0x0000000000433954 string=0x0000000000433958 ")=G"
 *   insn=0x0000000000433958 string=0x000000000043395C "!"
 *   insn=0x000000000043395C string=0x0000000000433960 "i"
 *   insn=0x0000000000433960 string=0x0000000000433964 "\t"
 *   insn=0x0000000000433960 string=0x000000000043398C "\t"
 *   insn=0x0000000000433964 string=0x0000000000433968 "*"
 *   insn=0x0000000000433968 string=0x000000000043396C "\n"
 *   insn=0x0000000000433970 string=0x0000000000433974 "?"
 *   insn=0x0000000000433974 string=0x0000000000433978 "l"
 *   insn=0x000000000043398C string=0x0000000000433990 "*"
 *   insn=0x0000000000433990 string=0x0000000000433994 "\n"
 *   insn=0x0000000000433994 string=0x0000000000433998 "?"
 *   insn=0x0000000000433998 string=0x000000000043399C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>::~pair(_QWORD *a1)
{
  Caver::QuestsView::LabelGroup *v2; // x20
  Caver::QuestsView::LabelGroup *v3; // x22
  __int64 *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (Caver::QuestsView::LabelGroup *)a1[1];
  v3 = (Caver::QuestsView::LabelGroup *)a1[2];
  if ( v2 != v3 )
  {
    do
    {
      Caver::QuestsView::LabelGroup::~LabelGroup(v2);
      v2 = (Caver::QuestsView::LabelGroup *)((char *)v2 + 56);
    }
    while ( v3 != v2 );
    v2 = (Caver::QuestsView::LabelGroup *)a1[1];
  }
  if ( v2 )
    operator delete(v2);
  v4 = (__int64 *)(*a1 - 24LL);
  if ( v4 != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(*a1 - 8LL);
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

