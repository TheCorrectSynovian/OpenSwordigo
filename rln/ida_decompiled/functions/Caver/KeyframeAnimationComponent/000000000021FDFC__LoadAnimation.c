/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021FDFC
 * Mangled: _ZN5Caver26KeyframeAnimationComponent13LoadAnimationEv
 * Demangled: Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *
 * Callers: 1
 *   0x00000000001FED40  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *
 * Callees: 13
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FA7A0  Caver::KeyframeAnimationComponent::RegisterLibrary(void)
 *   0x00000000001FC920  Caver::ModelComponent::LoadModel(void)
 *   0x00000000001FCE60  Caver::ModelLibrary::sharedLibrary(void)
 *   0x00000000001FE9D0  Caver::ModelLibrary::AnimationForModel(Caver::Model const*,std::string const&)
 *   0x00000000001FED40  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *   0x00000000001FF940  Caver::AnimKeysNode::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *   0x00000000001FF980  Caver::AnimKeysNode::CreateBufferIfNeccessary(void)
 *   0x0000000000203A20  Caver::Component::ShouldPrepare(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x000000000021FE0C string=0x000000000021FE10 "V"
 *   insn=0x000000000021FE1C string=0x000000000021FE20 "hB@"
 *   insn=0x000000000021FE24 string=0x000000000021FE28 "`"
 *   insn=0x000000000021FE24 string=0x000000000021FE3C "hJ@"
 *   insn=0x000000000021FE2C string=0x000000000021FE30 ",_"
 *   insn=0x000000000021FE30 string=0x000000000021FE34 "hB@"
 *   insn=0x000000000021FE30 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000021FE3C string=0x000000000021FE40 "@"
 *   insn=0x000000000021FE40 string=0x000000000021FE44 "H"
 *   insn=0x000000000021FE6C string=0x000000000021FE70 "uB@"
 *   insn=0x000000000021FE6C string=0x00000000001FCE60 "0'"
 *   insn=0x000000000021FE74 string=0x000000000021FE78 "5"
 *   insn=0x000000000021FE78 string=0x000000000021FF1C "`"
 *   insn=0x000000000021FE80 string=0x000000000021FE84 "u""
 *   insn=0x000000000021FEA4 string=0x000000000021FEA8 "`J@"
 *   insn=0x000000000021FEBC string=0x000000000021FEC0 "h"
 *   insn=0x000000000021FEC0 string=0x000000000021FEC4 "!@"
 *   insn=0x000000000021FED4 string=0x000000000021FED8 "h"
 *   insn=0x000000000021FED8 string=0x000000000021FEDC ""
 *   insn=0x000000000021FEDC string=0x000000000021FEE0 "h"
 *   insn=0x000000000021FEE0 string=0x000000000021FEE4 "!"
 *   insn=0x000000000021FEE4 string=0x000000000021FEE8 "h"
 *   insn=0x000000000021FEEC string=0x000000000021FEF0 "\t@"
 *   insn=0x000000000021FEF4 string=0x000000000021FEF8 "h\n@"
 *   insn=0x000000000021FEF8 string=0x000000000021FEFC ""
 *   insn=0x000000000021FEFC string=0x000000000021FF00 "h\n"
 *   insn=0x000000000021FF00 string=0x000000000021FF04 "!"
 *   insn=0x000000000021FF04 string=0x000000000021FF08 "h"
 *   insn=0x000000000021FF0C string=0x000000000021FF10 "@"
 *   insn=0x000000000021FF24 string=0x000000000021FF28 "uB@"
 *   insn=0x000000000021FF34 string=0x000000000021FF38 "zr"
 *   insn=0x000000000021FF38 string=0x00000000001FC920 "0'"
 *   insn=0x000000000021FF44 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021FF4C string=0x000000000021FF50 "4"
 *   insn=0x000000000021FF54 string=0x000000000021FF58 ""
 *   insn=0x000000000021FF64 string=0x000000000021FF68 "\t@"
 *   insn=0x000000000021FF74 string=0x000000000021FF78 ""
 *   insn=0x000000000021FF84 string=0x000000000021FF88 "@"
 *   insn=0x000000000021FF94 string=0x000000000021FF98 "K"
 *   insn=0x000000000021FFB0 string=0x000000000021FFB4 "`J@"
 *   insn=0x000000000021FFB0 string=0x00000000001FA7A0 "0'"
 *   insn=0x000000000021FFB4 string=0x000000000021FFB8 ""
 *   insn=0x000000000021FFC0 string=0x000000000021FFC4 "_{"
 *   insn=0x000000000021FFC4 string=0x000000000021FFC8 "`J@"
 *   insn=0x000000000021FFC8 string=0x000000000021FFCC ""
 *   insn=0x000000000021FFD8 string=0x000000000021FFDC "i~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::KeyframeAnimationComponent::LoadAnimation(Caver::KeyframeAnimationComponent *this)
{
  Caver::KeyframeAnimationComponent *v1; // x19
  Caver::ModelComponent *v2; // x21
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // [xsp+28h] [xbp-38h]
  _QWORD *v6; // [xsp+30h] [xbp-30h]

  v1 = this;
  _ReadStatusReg(TPIDR_EL0);
  if ( !*((_QWORD *)this + 16) )
  {
    this = (Caver::KeyframeAnimationComponent *)Caver::ComponentOutletBase::Connect(
                                                  (Caver::KeyframeAnimationComponent *)((char *)this + 112),
                                                  this);
    if ( !*((_QWORD *)v1 + 16) )
      return;
  }
  if ( *(_QWORD *)(*((_QWORD *)v1 + 18) + 24LL) )
    return;
  Caver::ModelLibrary::sharedLibrary(this);
  v2 = (Caver::ModelComponent *)*((_QWORD *)v1 + 16);
  if ( v2 )
  {
    if ( *((_QWORD *)v2 + 15) )
      goto LABEL_7;
  }
  else
  {
    Caver::ComponentOutletBase::Connect((Caver::KeyframeAnimationComponent *)((char *)v1 + 112), v1);
    v2 = (Caver::ModelComponent *)*((_QWORD *)v1 + 16);
    if ( *((_QWORD *)v2 + 15) )
      goto LABEL_7;
  }
  Caver::ModelComponent::LoadModel(v2);
LABEL_7:
  Caver::ModelLibrary::AnimationForModel();
  if ( v5 )
  {
    sub_56A6A8((char *)v1 + 136);
    Caver::AnimKeysNode::InitWithAnimation();
    if ( (Caver::Component::ShouldPrepare(v1) & 1) != 0 )
      (*(void (__fastcall **)(Caver::KeyframeAnimationComponent *))(*(_QWORD *)v1 + 64LL))(v1);
  }
  if ( v6 )
  {
    v3 = v6[1] - 1LL;
    v6[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)())(*v6 + 16LL))();
      v4 = v6[2] - 1LL;
      v6[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)())(*v6 + 24LL))();
    }
  }
}

