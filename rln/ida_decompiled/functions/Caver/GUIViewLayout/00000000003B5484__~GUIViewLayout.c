/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B5484
 * Mangled: _ZN5Caver13GUIViewLayoutD2Ev
 * Demangled: Caver::GUIViewLayout::~GUIViewLayout()
 *
 * Callers: 1
 *   0x00000000001F6130  Caver::GUIViewLayout::~GUIViewLayout()
 *
 * Callees: 7
 *   0x00000000001F5240  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 58
 *   insn=0x00000000003B5498 string=0x00000000003B549C "V"
 *   insn=0x00000000003B54A4 string=0x00000000003B54A8 "`"
 *   insn=0x00000000003B54AC string=0x00000000003B54B0 "a"
 *   insn=0x00000000003B54B0 string=0x00000000003B54B4 "c"
 *   insn=0x00000000003B54B4 string=0x00000000003B54B8 "t"
 *   insn=0x00000000003B54B4 string=0x00000000001F5240 "P'"
 *   insn=0x00000000003B54C0 string=0x00000000003B551C "t"
 *   insn=0x00000000003B54C4 string=0x00000000003B54C8 "5"
 *   insn=0x00000000003B54CC string=0x00000000003B54D0 ""
 *   insn=0x00000000003B54DC string=0x00000000003B54E0 "\t@"
 *   insn=0x00000000003B54EC string=0x00000000003B54F0 ""
 *   insn=0x00000000003B54FC string=0x00000000003B5500 "@"
 *   insn=0x00000000003B5514 string=0x00000000003B5518 "t"
 *   insn=0x00000000003B551C string=0x00000000003B5528 "h"
 *   insn=0x00000000003B5520 string=0x00000000003B5524 "c"
 *   insn=0x00000000003B5524 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B552C string=0x00000000003B5530 ")"
 *   insn=0x00000000003B5538 string=0x00000000003B553C "a"
 *   insn=0x00000000003B553C string=0x00000000003B5568 "i"
 *   insn=0x00000000003B554C string=0x00000000003B55AC "I"
 *   insn=0x00000000003B5568 string=0x00000000003B556C ")=G"
 *   insn=0x00000000003B556C string=0x00000000003B5570 "!"
 *   insn=0x00000000003B5574 string=0x00000000003B5578 "\t"
 *   insn=0x00000000003B5574 string=0x00000000003B558C "\t"
 *   insn=0x00000000003B5578 string=0x00000000003B557C "*"
 *   insn=0x00000000003B557C string=0x00000000003B5580 "\n"
 *   insn=0x00000000003B5588 string=0x00000000003B5598 "?"
 *   insn=0x00000000003B558C string=0x00000000003B5590 "*"
 *   insn=0x00000000003B5590 string=0x00000000003B5594 "\n"
 *   insn=0x00000000003B5598 string=0x00000000003B559C ","
 *   insn=0x00000000003B55AC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B55C0 string=0x00000000003B55C4 "6"
 *   insn=0x00000000003B55C8 string=0x00000000003B55CC ""
 *   insn=0x00000000003B55D8 string=0x00000000003B55DC "\t@"
 *   insn=0x00000000003B55E8 string=0x00000000003B55EC ""
 *   insn=0x00000000003B55F8 string=0x00000000003B55FC "@"
 *   insn=0x00000000003B5610 string=0x00000000003B5614 "u"
 *   insn=0x00000000003B5618 string=0x00000000003B5654 "h"
 *   insn=0x00000000003B5628 string=0x00000000003B562C "h"
 *   insn=0x00000000003B5638 string=0x00000000003B563C "Dc"
 *   insn=0x00000000003B563C string=0x00000000003B5640 "h"
 *   insn=0x00000000003B5644 string=0x00000000003B5648 "h"
 *   insn=0x00000000003B5658 string=0x00000000003B565C ")"
 *   insn=0x00000000003B5668 string=0x00000000003B566C "i"
 *   insn=0x00000000003B566C string=0x00000000003B5670 ")=G"
 *   insn=0x00000000003B5670 string=0x00000000003B5674 "!"
 *   insn=0x00000000003B5674 string=0x00000000003B5678 "i"
 *   insn=0x00000000003B5678 string=0x00000000003B567C "\t"
 *   insn=0x00000000003B5678 string=0x00000000003B56A4 "\t"
 *   insn=0x00000000003B567C string=0x00000000003B5680 "*"
 *   insn=0x00000000003B5680 string=0x00000000003B5684 "\n"
 *   insn=0x00000000003B5688 string=0x00000000003B568C "?"
 *   insn=0x00000000003B568C string=0x00000000003B5690 "l"
 *   insn=0x00000000003B5694 string=0x00000000003B5698 "C"
 *   insn=0x00000000003B56A4 string=0x00000000003B56A8 "*"
 *   insn=0x00000000003B56A8 string=0x00000000003B56AC "\n"
 *   insn=0x00000000003B56AC string=0x00000000003B56B0 "?"
 *   insn=0x00000000003B56B0 string=0x00000000003B56B4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIViewLayout::~GUIViewLayout(Caver::GUIViewLayout *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x23
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9

  _ReadStatusReg(TPIDR_EL0);
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_erase();
  v2 = (_QWORD *)*((_QWORD *)this + 1);
  v3 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[1];
      if ( v4 )
      {
        v5 = v4[1] - 1LL;
        v4[1] = v5;
        if ( !v5 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v6 = v4[2] - 1LL;
          v4[2] = v6;
          if ( !v6 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      v2 += 2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)*((_QWORD *)this + 1);
  }
  if ( v2 )
    operator delete(v2);
  v7 = (__int64 *)(*(_QWORD *)this - 24LL);
  if ( v7 != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(*(_QWORD *)this - 8LL);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v7);
  }
}

