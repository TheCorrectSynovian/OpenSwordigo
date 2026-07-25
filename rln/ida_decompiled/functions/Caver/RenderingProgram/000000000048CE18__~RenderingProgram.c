/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048CE18
 * Mangled: _ZN5Caver16RenderingProgramD2Ev
 * Demangled: Caver::RenderingProgram::~RenderingProgram()
 *
 * Callers: 1
 *   0x0000000000203C40  Caver::RenderingProgram::~RenderingProgram()
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC580  std::vector<uint,std::allocator<uint>>::_M_insert_aux(__gnu_cxx::__normal_iterator<uint *,std::vector<uint,std::allocator<uint>>>,uint const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x000000000048CE28 string=0x000000000048CE2C "U"
 *   insn=0x000000000048CE38 string=0x000000000048CE3C "tF@"
 *   insn=0x000000000048CE3C string=0x000000000048CE40 "4"
 *   insn=0x000000000048CE40 string=0x000000000048CE84 "t>@"
 *   insn=0x000000000048CE44 string=0x000000000048CE48 ""
 *   insn=0x000000000048CE54 string=0x000000000048CE58 "\t@"
 *   insn=0x000000000048CE64 string=0x000000000048CE68 ""
 *   insn=0x000000000048CE74 string=0x000000000048CE78 "@"
 *   insn=0x000000000048CE84 string=0x000000000048CE88 "4"
 *   insn=0x000000000048CE88 string=0x000000000048CECC "`"
 *   insn=0x000000000048CE8C string=0x000000000048CE90 ""
 *   insn=0x000000000048CE9C string=0x000000000048CEA0 "\t@"
 *   insn=0x000000000048CEAC string=0x000000000048CEB0 ""
 *   insn=0x000000000048CEBC string=0x000000000048CEC0 "@"
 *   insn=0x000000000048CECC string=0x000000000048CED0 "@"
 *   insn=0x000000000048CED0 string=0x000000000048CED8 "h"
 *   insn=0x000000000048CED4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048CEDC string=0x000000000048CEE0 ")"
 *   insn=0x000000000048CEE8 string=0x000000000048CEEC "A"
 *   insn=0x000000000048CF14 string=0x000000000048CF18 ")=G"
 *   insn=0x000000000048CF18 string=0x000000000048CF1C "!"
 *   insn=0x000000000048CF20 string=0x000000000048CF24 "\t"
 *   insn=0x000000000048CF20 string=0x000000000048CF38 "\t"
 *   insn=0x000000000048CF24 string=0x000000000048CF28 "*"
 *   insn=0x000000000048CF28 string=0x000000000048CF2C "\n"
 *   insn=0x000000000048CF34 string=0x000000000048CF44 "?"
 *   insn=0x000000000048CF38 string=0x000000000048CF3C "*"
 *   insn=0x000000000048CF3C string=0x000000000048CF40 "\n"
 *   insn=0x000000000048CF44 string=0x000000000048CF48 "L"
 *   insn=0x000000000048CF58 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000048CF5C string=0x000000000048CF60 "`"
 *   insn=0x000000000048CF68 string=0x000000000048CFC4 "h"
 *   insn=0x000000000048CF70 string=0x000000000048CF74 "5"
 *   insn=0x000000000048CF74 string=0x000000000048CFB8 "`"
 *   insn=0x000000000048CF78 string=0x000000000048CF7C ""
 *   insn=0x000000000048CF88 string=0x000000000048CF8C "\t@"
 *   insn=0x000000000048CF98 string=0x000000000048CF9C ""
 *   insn=0x000000000048CFA8 string=0x000000000048CFAC "@"
 *   insn=0x000000000048CFB8 string=0x000000000048CFBC "@"
 *   insn=0x000000000048CFC8 string=0x000000000048CFCC ")"
 *   insn=0x000000000048CFDC string=0x000000000048CFE0 ")=G"
 *   insn=0x000000000048CFE0 string=0x000000000048CFE4 "!"
 *   insn=0x000000000048CFE4 string=0x000000000048CFE8 "i"
 *   insn=0x000000000048CFE8 string=0x000000000048CFEC "\t"
 *   insn=0x000000000048CFE8 string=0x000000000048D014 "\t"
 *   insn=0x000000000048CFEC string=0x000000000048CFF0 "*"
 *   insn=0x000000000048CFF0 string=0x000000000048CFF4 "\n"
 *   insn=0x000000000048CFF8 string=0x000000000048CFFC "?"
 *   insn=0x000000000048CFFC string=0x000000000048D000 "l"
 *   insn=0x000000000048D00C string=0x000000000048D010 "-"
 *   insn=0x000000000048D014 string=0x000000000048D018 "*"
 *   insn=0x000000000048D018 string=0x000000000048D01C "\n"
 *   insn=0x000000000048D01C string=0x000000000048D020 "?"
 *   insn=0x000000000048D020 string=0x000000000048D024 ""
 *   insn=0x000000000048D03C string=0x000000000048D040 "T"
 *   insn=0x000000000048D054 string=0x000000000048D058 "a"
 *   insn=0x000000000048D058 string=0x000000000048D05C "?"
 *   insn=0x000000000048D060 string=0x000000000048D064 "(D"
 *   insn=0x000000000048D060 string=0x000000000048D070 "`"
 *   insn=0x000000000048D064 string=0x000000000048D068 "a"
 *   insn=0x000000000048D06C string=0x000000000048D07C "h"
 *   insn=0x000000000048D074 string=0x000000000048D078 "B"
 *   insn=0x000000000048D078 string=0x00000000001FC580 "0'"
 *   insn=0x000000000048D07C string=0x000000000048D080 ""
 *   insn=0x000000000048D080 string=0x000000000048D084 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::RenderingProgram::~RenderingProgram(Caver::RenderingProgram *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  void *v8; // x0
  __int64 v9; // x8
  void *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 17);
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
  v5 = (_QWORD *)*((_QWORD *)this + 15);
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
  v8 = (void *)*((_QWORD *)this + 4);
  if ( v8 )
    operator delete(v8);
  v9 = *((_QWORD *)this + 1);
  v10 = (void *)(v9 - 24);
  if ( (__int64 *)(v9 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v9 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v10);
  }
}

