/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004327B0
 * Mangled: _ZN5Caver10QuestsView10LabelGroupD2Ev
 * Demangled: Caver::QuestsView::LabelGroup::~LabelGroup()
 *
 * Callers: 2
 *   0x00000000001FADD0  Caver::QuestsView::LabelGroup::~LabelGroup()
 *   0x0000000000432350  std::map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::operator[](std::string const&)
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000432A08  Caver::QuestsView::LayoutSubviews(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 44
 *   insn=0x00000000004327C4 string=0x00000000004327C8 "t"
 *   insn=0x00000000004327C8 string=0x00000000004327CC "4"
 *   insn=0x00000000004327CC string=0x0000000000432810 "t"
 *   insn=0x00000000004327D0 string=0x00000000004327D4 ""
 *   insn=0x00000000004327E0 string=0x00000000004327E4 "\t@"
 *   insn=0x00000000004327F0 string=0x00000000004327F4 ""
 *   insn=0x0000000000432800 string=0x0000000000432804 "@"
 *   insn=0x0000000000432810 string=0x0000000000432814 "4"
 *   insn=0x0000000000432814 string=0x0000000000432858 "tZ@"
 *   insn=0x0000000000432818 string=0x000000000043281C ""
 *   insn=0x0000000000432828 string=0x000000000043282C "\t@"
 *   insn=0x0000000000432838 string=0x000000000043283C ""
 *   insn=0x0000000000432848 string=0x000000000043284C "@"
 *   insn=0x0000000000432864 string=0x0000000000432868 "5"
 *   insn=0x000000000043286C string=0x0000000000432870 ""
 *   insn=0x000000000043287C string=0x0000000000432880 "\t@"
 *   insn=0x000000000043288C string=0x0000000000432890 ""
 *   insn=0x000000000043289C string=0x00000000004328A0 "@"
 *   insn=0x00000000004328B4 string=0x00000000004328B8 "t"
 *   insn=0x00000000004328D0 string=0x00000000004328D4 "w"
 *   insn=0x00000000004328D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004328F0 string=0x0000000000432940 "tZ@"
 *   insn=0x00000000004328F8 string=0x00000000004328FC "4"
 *   insn=0x0000000000432900 string=0x0000000000432904 ""
 *   insn=0x0000000000432910 string=0x0000000000432914 "\t@"
 *   insn=0x0000000000432920 string=0x0000000000432924 ""
 *   insn=0x0000000000432930 string=0x0000000000432934 "@"
 *   insn=0x0000000000432948 string=0x00000000004329A4 "t"
 *   insn=0x000000000043294C string=0x0000000000432950 "5"
 *   insn=0x0000000000432954 string=0x0000000000432958 ""
 *   insn=0x0000000000432964 string=0x0000000000432968 "\t@"
 *   insn=0x0000000000432974 string=0x0000000000432978 ""
 *   insn=0x0000000000432984 string=0x0000000000432988 "@"
 *   insn=0x000000000043299C string=0x00000000004329A0 "t"
 *   insn=0x00000000004329A8 string=0x00000000004329AC "A"
 *   insn=0x00000000004329C0 string=0x00000000004329C4 "bn"
 *   insn=0x00000000004329C4 string=0x00000000004329C8 "h"
 *   insn=0x00000000004329CC string=0x00000000004329D0 "h"
 *   insn=0x00000000004329D4 string=0x00000000004329D8 "]n"
 *   insn=0x00000000004329DC string=0x00000000004329E0 "4"
 *   insn=0x00000000004329E4 string=0x00000000004329E8 "Yn"
 *   insn=0x00000000004329E8 string=0x00000000004329EC "h"
 *   insn=0x00000000004329F0 string=0x00000000004329F4 "h"
 *   insn=0x00000000004329F8 string=0x00000000004329FC "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::QuestsView::LabelGroup::~LabelGroup(Caver::QuestsView::LabelGroup *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  _QWORD *v9; // x22
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = *(_QWORD **)this;
  v9 = (_QWORD *)*((_QWORD *)this + 1);
  if ( *(_QWORD **)this != v9 )
  {
    do
    {
      v10 = (_QWORD *)v8[1];
      if ( v10 )
      {
        v11 = v10[1] - 1LL;
        v10[1] = v11;
        if ( !v11 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v12 = v10[2] - 1LL;
          v10[2] = v12;
          if ( !v12 )
            (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
        }
      }
      v8 += 2;
    }
    while ( v9 != v8 );
    v8 = *(_QWORD **)this;
  }
  if ( v8 )
    operator delete(v8);
}

