/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221048
 * Mangled: _ZN5Caver26KeyframeAnimationComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F3FB0  Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FC920  Caver::ModelComponent::LoadModel(void)
 *   0x00000000001FCE60  Caver::ModelLibrary::sharedLibrary(void)
 *   0x00000000001FE9D0  Caver::ModelLibrary::AnimationForModel(Caver::Model const*,std::string const&)
 *   0x00000000001FF940  Caver::AnimKeysNode::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *   0x0000000000203A20  Caver::Component::ShouldPrepare(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 97
 *   insn=0x0000000000221058 string=0x000000000022105C "V"
 *   insn=0x0000000000221060 string=0x0000000000221064 "("
 *   insn=0x0000000000221070 string=0x0000000000221074 "H"
 *   insn=0x0000000000221074 string=0x0000000000221078 "\t"
 *   insn=0x0000000000221078 string=0x0000000000221080 "(y"
 *   insn=0x0000000000221078 string=0x0000000000583E2C "`"
 *   insn=0x0000000000221080 string=0x0000000000221084 ""
 *   insn=0x0000000000221088 string=0x000000000022108C "A"
 *   insn=0x0000000000221088 string=0x00000000002211C0 "H"
 *   insn=0x0000000000221088 string=0x00000000002211D4 "H"
 *   insn=0x0000000000221088 string=0x00000000002211E8 "H"
 *   insn=0x0000000000221090 string=0x0000000000221094 "%%"
 *   insn=0x0000000000221094 string=0x0000000000221098 "hB@"
 *   insn=0x000000000022109C string=0x00000000002210A0 "`"
 *   insn=0x00000000002210A8 string=0x00000000002210AC "hB@"
 *   insn=0x00000000002210A8 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002210B4 string=0x00000000002210B8 ""
 *   insn=0x00000000002210B8 string=0x00000000002210BC "H"
 *   insn=0x00000000002210BC string=0x00000000002210C0 "ho"
 *   insn=0x00000000002210C0 string=0x00000000001FCE60 "0'"
 *   insn=0x00000000002210C4 string=0x00000000002210C8 "uB@"
 *   insn=0x00000000002210CC string=0x00000000002210D0 "`"
 *   insn=0x00000000002210D8 string=0x00000000002210DC "uB@"
 *   insn=0x00000000002210E8 string=0x00000000002210EC "n"
 *   insn=0x00000000002210EC string=0x00000000001FC920 "0'"
 *   insn=0x00000000002210FC string=0x0000000000221100 "4v"
 *   insn=0x0000000000221108 string=0x000000000022110C "`""
 *   insn=0x000000000022110C string=0x0000000000221110 "f%"
 *   insn=0x0000000000221110 string=0x0000000000221114 "`J@"
 *   insn=0x0000000000221118 string=0x000000000022111C "\tz"
 *   insn=0x0000000000221120 string=0x0000000000221124 "?"
 *   insn=0x0000000000221128 string=0x000000000022112C "h"
 *   insn=0x000000000022112C string=0x0000000000221130 "!@"
 *   insn=0x000000000022113C string=0x0000000000221140 "3"
 *   insn=0x0000000000221140 string=0x0000000000221144 "h"
 *   insn=0x0000000000221144 string=0x0000000000221148 ""
 *   insn=0x0000000000221148 string=0x000000000022114C "h"
 *   insn=0x0000000000221150 string=0x0000000000221154 "h"
 *   insn=0x0000000000221154 string=0x0000000000221158 "\t@"
 *   insn=0x0000000000221160 string=0x0000000000221164 "h\n@"
 *   insn=0x0000000000221164 string=0x0000000000221168 ""
 *   insn=0x0000000000221168 string=0x000000000022116C "h\n"
 *   insn=0x0000000000221170 string=0x0000000000221174 "h"
 *   insn=0x0000000000221174 string=0x0000000000221178 "@"
 *   insn=0x0000000000221184 string=0x0000000000221188 ")&"
 *   insn=0x0000000000221188 string=0x000000000022118C ")"
 *   insn=0x0000000000221194 string=0x0000000000221198 "`"
 *   insn=0x0000000000221198 string=0x000000000022119C "\t&"
 *   insn=0x000000000022119C string=0x00000000002211A0 ")=G"
 *   insn=0x00000000002211A0 string=0x00000000002211A4 "!"
 *   insn=0x00000000002211A4 string=0x00000000002211A8 "\t"
 *   insn=0x00000000002211A8 string=0x00000000002211AC "\t"
 *   insn=0x00000000002211A8 string=0x0000000000221228 "\t"
 *   insn=0x00000000002211AC string=0x00000000002211B0 "*"
 *   insn=0x00000000002211B0 string=0x00000000002211B4 "\n"
 *   insn=0x00000000002211BC string=0x0000000000221234 "?"
 *   insn=0x00000000002211C0 string=0x00000000002211C4 "iJ@"
 *   insn=0x00000000002211C4 string=0x00000000002211C8 ""
 *   insn=0x00000000002211C8 string=0x00000000002211CC "("
 *   insn=0x00000000002211CC string=0x00000000002211D0 ""
 *   insn=0x00000000002211D4 string=0x00000000002211D8 "iJ@"
 *   insn=0x00000000002211D8 string=0x00000000002211DC ""
 *   insn=0x00000000002211DC string=0x00000000002211E0 "("
 *   insn=0x00000000002211E0 string=0x00000000002211E4 ""
 *   insn=0x00000000002211E8 string=0x00000000002211EC "iJ@"
 *   insn=0x00000000002211EC string=0x00000000002211F0 ""
 *   insn=0x00000000002211F0 string=0x00000000002211F4 "(1"
 *   insn=0x00000000002211FC string=0x0000000000221200 "H`"
 *   insn=0x0000000000221200 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000221210 string=0x0000000000221248 ""T"
 *   insn=0x0000000000221228 string=0x000000000022122C "*"
 *   insn=0x000000000022122C string=0x0000000000221230 "\n"
 *   insn=0x0000000000221234 string=0x0000000000221238 "l"
 *   insn=0x000000000022123C string=0x0000000000221240 "Y$"
 *   insn=0x0000000000221248 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022125C string=0x0000000000221260 ""
 *   insn=0x000000000022126C string=0x0000000000221270 "\t@"
 *   insn=0x000000000022127C string=0x0000000000221280 ""
 *   insn=0x000000000022128C string=0x0000000000221290 "@"
 *   insn=0x00000000002212A8 string=0x00000000002212AC ")&"
 *   insn=0x00000000002212AC string=0x00000000002212B0 ")"
 *   insn=0x00000000002212BC string=0x00000000002212C0 "\t&"
 *   insn=0x00000000002212C0 string=0x00000000002212C4 ")=G"
 *   insn=0x00000000002212C4 string=0x00000000002212C8 "!"
 *   insn=0x00000000002212C8 string=0x00000000002212CC "i"
 *   insn=0x00000000002212CC string=0x00000000002212D0 "\t"
 *   insn=0x00000000002212CC string=0x00000000002212F8 "\t"
 *   insn=0x00000000002212D0 string=0x00000000002212D4 "*"
 *   insn=0x00000000002212D4 string=0x00000000002212D8 "\n"
 *   insn=0x00000000002212DC string=0x00000000002212E0 "?"
 *   insn=0x00000000002212E0 string=0x00000000002212E4 "l"
 *   insn=0x00000000002212E8 string=0x00000000002212EC ".$"
 *   insn=0x00000000002212F0 string=0x00000000002212F4 "t"
 *   insn=0x00000000002212F8 string=0x00000000002212FC "*"
 *   insn=0x00000000002212FC string=0x0000000000221300 "\n"
 *   insn=0x0000000000221300 string=0x0000000000221304 "?"
 *   insn=0x0000000000221304 string=0x0000000000221308 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::KeyframeAnimationComponent::SetValueForBindedProperty(
        Caver::KeyframeAnimationComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::ModelLibrary *v4; // x0
  Caver::ModelComponent *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x8
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  __int64 v11; // [xsp+0h] [xbp-40h]
  _QWORD *v12; // [xsp+8h] [xbp-38h]
  _QWORD v13[2]; // [xsp+10h] [xbp-30h] BYREF

  v13[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 'e':
      v4 = (Caver::ModelLibrary *)sub_56A528(v13, *((_QWORD *)a3 + 1));
      if ( *((_QWORD *)this + 16)
        || (v4 = (Caver::ModelLibrary *)Caver::ComponentOutletBase::Connect(
                                          (Caver::KeyframeAnimationComponent *)((char *)this + 112),
                                          this),
            *((_QWORD *)this + 16)) )
      {
        if ( *(_QWORD *)(v13[0] - 24LL) )
        {
          Caver::ModelLibrary::sharedLibrary(v4);
          v5 = (Caver::ModelComponent *)*((_QWORD *)this + 16);
          if ( !v5 )
          {
            Caver::ComponentOutletBase::Connect((Caver::KeyframeAnimationComponent *)((char *)this + 112), this);
            v5 = (Caver::ModelComponent *)*((_QWORD *)this + 16);
          }
          if ( !*((_QWORD *)v5 + 15) )
            Caver::ModelComponent::LoadModel(v5);
          Caver::ModelLibrary::AnimationForModel();
          if ( v11 )
          {
            sub_56A6A8((char *)this + 136);
            Caver::AnimKeysNode::InitWithAnimation();
            if ( (Caver::Component::ShouldPrepare(this) & 1) != 0 )
              (*(void (__fastcall **)(Caver::KeyframeAnimationComponent *))(*(_QWORD *)this + 64LL))(this);
          }
          if ( v12 )
          {
            v6 = v12[1] - 1LL;
            v12[1] = v6;
            if ( !v6 )
            {
              (*(void (__fastcall **)())(*v12 + 16LL))();
              v7 = v12[2] - 1LL;
              v12[2] = v7;
              if ( !v7 )
                (*(void (__fastcall **)())(*v12 + 24LL))();
            }
          }
        }
      }
      v8 = (void *)(v13[0] - 24LL);
      if ( (__int64 *)(v13[0] - 24LL) != &qword_6FD2E0 )
      {
        v9 = (unsigned int *)(v13[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v10 = __ldaxr(v9);
          while ( __stlxr(v10 - 1, v9) );
        }
        else
        {
          v10 = (*v9)--;
        }
        if ( v10 <= 0 )
          operator delete(v8);
      }
      break;
    case 'h':
      *(_BYTE *)(*((_QWORD *)this + 18) + 44LL) = **((_BYTE **)a3 + 1);
      break;
    case 'i':
      *(_BYTE *)(*((_QWORD *)this + 18) + 56LL) = **((_BYTE **)a3 + 1);
      break;
    case 'j':
      *(_DWORD *)(*((_QWORD *)this + 18) + 48LL) = **((_DWORD **)a3 + 1);
      break;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}

