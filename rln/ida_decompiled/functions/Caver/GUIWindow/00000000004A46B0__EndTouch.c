/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A46B0
 * Mangled: _ZN5Caver9GUIWindow8EndTouchERKNS_7FWTouchE
 * Demangled: Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *
 * Callers: 2
 *   0x0000000000202D90  Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *   0x00000000004A46B0  Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *
 * Callees: 6
 *   0x00000000001F38C0  Caver::GUIApplication::sharedApplication(void)
 *   0x00000000001F3E80  Caver::GUIWindow::CancelTouch(Caver::FWTouch const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6840  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::erase(ulong const&)
 *   0x00000000001F6E10  std::map<ulong,boost::shared_ptr<Caver::GUIView>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::operator[](ulong const&)
 *   0x0000000000203BF0  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>)
 *
 * Referenced strings: 44
 *   insn=0x00000000004A46C4 string=0x00000000004A46C8 "W"
 *   insn=0x00000000004A46DC string=0x00000000004A46E0 "H"
 *   insn=0x00000000004A46EC string=0x00000000004A46F0 "@"
 *   insn=0x00000000004A46F0 string=0x00000000004A4718 "j<"
 *   insn=0x00000000004A4700 string=0x00000000004A4704 "6"
 *   insn=0x00000000004A4710 string=0x00000000004A4714 "2"
 *   insn=0x00000000004A4710 string=0x00000000001F3E80 "P'"
 *   insn=0x00000000004A4718 string=0x00000000001F38C0 "P'"
 *   insn=0x00000000004A4724 string=0x00000000004A4728 "("
 *   insn=0x00000000004A4738 string=0x00000000001F6E10 "0'"
 *   insn=0x00000000004A4744 string=0x00000000004A4748 ""
 *   insn=0x00000000004A4748 string=0x00000000004A474C "y@"
 *   insn=0x00000000004A4754 string=0x00000000004A4758 "`"
 *   insn=0x00000000004A4758 string=0x00000000004A475C "\t"
 *   insn=0x00000000004A4758 string=0x00000000004A4764 "\t"
 *   insn=0x00000000004A475C string=0x00000000004A4760 ")"
 *   insn=0x00000000004A4760 string=0x00000000004A4804 "\t"
 *   insn=0x00000000004A4764 string=0x00000000004A4768 ")@"
 *   insn=0x00000000004A4770 string=0x00000000004A4774 " "
 *   insn=0x00000000004A4784 string=0x00000000004A4788 ".H"
 *   insn=0x00000000004A4788 string=0x00000000001F6840 "0'"
 *   insn=0x00000000004A4798 string=0x00000000004A479C ")"
 *   insn=0x00000000004A479C string=0x00000000004A47A0 "?"
 *   insn=0x00000000004A47A4 string=0x00000000004A47A8 "*"
 *   insn=0x00000000004A47A4 string=0x00000000004A47B8 "*@"
 *   insn=0x00000000004A47AC string=0x00000000004A47B0 "j"
 *   insn=0x00000000004A47B0 string=0x00000000004A47B4 ""
 *   insn=0x00000000004A47C0 string=0x00000000004A4818 ")"
 *   insn=0x00000000004A4808 string=0x00000000004A480C "\t"
 *   insn=0x00000000004A480C string=0x00000000004A4810 ")\t@"
 *   insn=0x00000000004A4818 string=0x00000000004A481C "*"
 *   insn=0x00000000004A481C string=0x00000000004A4820 "K"
 *   insn=0x00000000004A4820 string=0x00000000004A4824 "La"
 *   insn=0x00000000004A4824 string=0x00000000004A4828 "MA"
 *   insn=0x00000000004A4830 string=0x00000000004A4834 "!0"
 *   insn=0x00000000004A4834 string=0x00000000004A4838 "j"
 *   insn=0x00000000004A4838 string=0x00000000004A483C "*"
 *   insn=0x00000000004A4840 string=0x00000000004A4844 "*"
 *   insn=0x00000000004A4844 string=0x00000000004A4848 "+a"
 *   insn=0x00000000004A4848 string=0x00000000004A484C ",A"
 *   insn=0x00000000004A4854 string=0x00000000004A4858 ""1"
 *   insn=0x00000000004A4858 string=0x00000000004A485C "I"
 *   insn=0x00000000004A485C string=0x00000000004A4860 ")"
 *   insn=0x00000000004A4868 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIWindow::EndTouch(Caver::GUIWindow *this, const Caver::FWTouch *a2)
{
  __int64 v4; // x0
  _QWORD *v5; // x0
  _QWORD *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x0
  _BYTE *v9; // x8
  _QWORD *v10; // x1
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x9
  _QWORD *v13; // x10
  _QWORD *v14; // x9
  _QWORD *v15; // x11
  _QWORD *v16; // x10

  _ReadStatusReg(TPIDR_EL0);
  if ( *((_BYTE *)this + 229) )
  {
    if ( *((Caver::GUIWindow **)this + 56) == (Caver::GUIWindow *)((char *)this + 448) )
    {
      Caver::GUIApplication::sharedApplication(this);
      *(_QWORD *)(v4 + 80) = *((_QWORD *)a2 + 3);
      std::map<unsigned long,boost::shared_ptr<Caver::GUIView>>::operator[]();
      v6 = v5;
      v7 = *v5;
      if ( v7 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 240LL))(v7);
        v9 = (_BYTE *)*v6;
        if ( v8 && !v9[228] && v9[229] )
          (*(void (__fastcall **)(_QWORD, const Caver::FWTouch *))(*(_QWORD *)v9 + 16LL))(*v6, a2);
        else
          (*(void (__fastcall **)(_QWORD, const Caver::FWTouch *))(*(_QWORD *)v9 + 24LL))(*v6, a2);
        std::_Rb_tree<unsigned long,std::pair<unsigned long const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned long const,Caver::FWTouch>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Caver::FWTouch>>>::erase();
        v10 = (_QWORD *)*((_QWORD *)this + 50);
        if ( v10 )
        {
          v11 = *(_QWORD *)a2;
          while ( 1 )
          {
            while ( 1 )
            {
              v12 = v10[4];
              if ( v12 >= v11 )
                break;
              v10 = (_QWORD *)v10[3];
              if ( !v10 )
                goto LABEL_16;
            }
            v13 = (_QWORD *)v10[2];
            if ( v11 >= v12 )
              break;
            v10 = (_QWORD *)v10[2];
            if ( !v13 )
              goto LABEL_16;
          }
          v14 = (_QWORD *)v10[3];
          if ( v13 )
          {
            do
            {
              if ( v13[4] >= v11 )
                v15 = v13 + 2;
              else
                v15 = v13 + 3;
              v13 = (_QWORD *)*v15;
            }
            while ( *v15 );
          }
          if ( v14 )
          {
            do
            {
              if ( v11 >= v14[4] )
                v16 = v14 + 3;
              else
                v16 = v14 + 2;
              v14 = (_QWORD *)*v16;
            }
            while ( *v16 );
          }
        }
LABEL_16:
        std::_Rb_tree<unsigned long,std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux();
      }
    }
    else
    {
      Caver::GUIWindow::EndTouch(*(Caver::GUIWindow **)(*((_QWORD *)this + 57) + 16LL), a2);
    }
  }
  else
  {
    Caver::GUIWindow::CancelTouch();
  }
}

