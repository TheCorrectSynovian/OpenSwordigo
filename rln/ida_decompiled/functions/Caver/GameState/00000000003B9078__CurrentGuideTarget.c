/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B9078
 * Mangled: _ZN5Caver9GameState18CurrentGuideTargetEv
 * Demangled: Caver::GameState::CurrentGuideTarget(void)
 *
 * Callers: 1
 *   0x00000000001F40E0  Caver::GameState::CurrentGuideTarget(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200910  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>*)
 *   0x0000000000200A40  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>> *)
 *   0x0000000000202680  Caver::GameState::GuideTargetCompleted(boost::shared_ptr<Caver::GuideTarget> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x00000000003B908C string=0x00000000003B9090 "i"
 *   insn=0x00000000003B9094 string=0x00000000003B9098 "*-M"
 *   insn=0x00000000003B9098 string=0x00000000003B909C "j"
 *   insn=0x00000000003B909C string=0x00000000003B90A0 "J"
 *   insn=0x00000000003B90A0 string=0x00000000003B90A4 "_"
 *   insn=0x00000000003B90A4 string=0x00000000003B90A8 "k"
 *   insn=0x00000000003B90B0 string=0x00000000003B90B4 "(i@"
 *   insn=0x00000000003B90B4 string=0x00000000003B90B8 ""
 *   insn=0x00000000003B90B8 string=0x00000000003B90BC "\tU@"
 *   insn=0x00000000003B90C8 string=0x00000000003B90CC ""
 *   insn=0x00000000003B90D8 string=0x00000000003B90DC "i%"
 *   insn=0x00000000003B90E0 string=0x00000000003B90E4 "u"
 *   insn=0x00000000003B90E4 string=0x00000000003B9130 "V"
 *   insn=0x00000000003B90E8 string=0x00000000003B90EC "("
 *   insn=0x00000000003B90F0 string=0x00000000003B90F4 ""
 *   insn=0x00000000003B9104 string=0x00000000003B9108 "\t@"
 *   insn=0x00000000003B9110 string=0x00000000003B9114 ""
 *   insn=0x00000000003B9124 string=0x00000000003B9128 "@"
 *   insn=0x00000000003B9130 string=0x00000000003B9134 "i"
 *   insn=0x00000000003B913C string=0x00000000003B9140 "()M"
 *   insn=0x00000000003B9140 string=0x00000000003B9144 "H"
 *   insn=0x00000000003B9144 string=0x00000000003B9148 ""
 *   insn=0x00000000003B914C string=0x00000000003B9150 "+"
 *   insn=0x00000000003B916C string=0x00000000003B9170 "5"
 *   insn=0x00000000003B9174 string=0x00000000003B9178 ""
 *   insn=0x00000000003B9184 string=0x00000000003B9188 "\t@"
 *   insn=0x00000000003B9194 string=0x00000000003B9198 ""
 *   insn=0x00000000003B91A4 string=0x00000000003B91A8 "@"
 *   insn=0x00000000003B91B8 string=0x00000000003B91BC "dT"
 *   insn=0x00000000003B91D0 string=0x00000000003B91D4 "U"
 *   insn=0x00000000003B9208 string=0x00000000003B920C ")"
 *   insn=0x00000000003B920C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B9224 string=0x00000000003B923C "%"
 *   insn=0x00000000003B923C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GameState::CurrentGuideTarget(Caver::GameState *this@<X0>, _QWORD *a2@<X8>)
{
  __int64 v3; // x9
  __int64 v5; // x23
  __int64 v6; // x24
  _QWORD *v7; // x8
  _QWORD *v8; // x21
  int v9; // w0
  char v10; // w22
  __int64 v11; // x8
  __int64 v12; // x8

  v3 = *(_QWORD *)this;
  if ( (int)((*(_QWORD *)(*(_QWORD *)this + 216LL) - *(_QWORD *)(*(_QWORD *)this + 208LL)) >> 4) < 1 )
  {
LABEL_12:
    *a2 = 0;
    a2[1] = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = (_QWORD *)(*(_QWORD *)(v3 + 208) + v5);
      v8 = (_QWORD *)v7[1];
      *a2 = *v7;
      a2[1] = v8;
      if ( v8 )
        ++v8[1];
      Caver::GameState::GuideTargetCompleted();
      v10 = v9;
      if ( v8 )
      {
        if ( ((v9 ^ 1) & 1) == 0 )
        {
          v11 = v8[1] - 1LL;
          v8[1] = v11;
          if ( !v11 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
            v12 = v8[2] - 1LL;
            v8[2] = v12;
            if ( !v12 )
              (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
          }
        }
      }
      if ( (v10 & 1) == 0 )
        break;
      v3 = *(_QWORD *)this;
      ++v6;
      v5 += 16;
      if ( v6 >= (int)((*(_QWORD *)(*(_QWORD *)this + 216LL) - *(_QWORD *)(*(_QWORD *)this + 208LL)) >> 4) )
        goto LABEL_12;
    }
  }
}

